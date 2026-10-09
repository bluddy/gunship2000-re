// Place an RTLink overlay slice at its biased link address, label thunk entries,
// analyze, and dump functions/decompiled C.
// Usage: -preScript PlaceOverlayAndDump.java <biasHex> <realBaseSegHex> <slicePath> <outputPath> [SEG:OFF ...]
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Symbol;
import java.io.PrintWriter;
import java.nio.file.Files;
import java.nio.file.Paths;

public class PlaceOverlayAndDump extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 4) {
            println("Usage: PlaceOverlayAndDump.java <biasHex> <realBaseSegHex> <slicePath> <outputPath> [SEG:OFF ...]");
            return;
        }
        int bias = Integer.parseInt(args[0], 16);
        int realBase = Integer.parseInt(args[1], 16);
        String slicePath = args[2];
        String outputPath = args[3];

        for (MemoryBlock b : currentProgram.getMemory().getBlocks()) {
            currentProgram.getMemory().removeBlock(b, monitor);
        }
        Address base = toAddr(String.format("%04X:0000", realBase + bias));
        byte[] data = Files.readAllBytes(Paths.get(slicePath));
        MemoryBlock blk = currentProgram.getMemory()
            .createInitializedBlock("OVL", base, data.length, (byte) 0, monitor, false);
        blk.setPermissions(true, true, true);
        currentProgram.getMemory().setBytes(base, data);

        java.util.List<String> entries = new java.util.ArrayList<>();
        for (int i = 4; i < args.length; i++) {
            for (String s : args[i].split(",")) {
                if (!s.trim().isEmpty()) {
                    entries.add(s.trim());
                }
            }
        }
        int n = 0;
        for (String e : entries) {
            try {
                String[] p = e.split(":");
                Address a = toAddr(String.format("%04X:%04X",
                    Integer.parseInt(p[0], 16) + bias, Integer.parseInt(p[1], 16)));
                currentProgram.getSymbolTable().createLabel(a, "entry_" + p[0] + "_" + p[1], false);
                n++;
            } catch (Exception ex) {
                println("entry FAILED for '" + e + "': " + ex);
            }
        }
        println("labels created: " + n + " of " + entries.size());
        println("Overlay block at " + base + " size=" + data.length);

        // Auto-analyze
        currentProgram.startTransaction("Auto Analysis");
        try {
            ghidra.app.util.AnalysisRunner.run(currentProgram, monitor);
        } finally {
            currentProgram.endTransaction(true, monitor);
        }

        // Dump functions + decompiled C
        DecompInterface dec = new DecompInterface();
        dec.toggleCCode(true);
        dec.setSimplificationStyle("decompile");
        dec.openProgram(currentProgram);

        PrintWriter out = new PrintWriter(outputPath, "UTF-8");
        out.println("=== PROGRAM ===");
        out.println("name=" + currentProgram.getName());
        out.println("exeFormat=" + currentProgram.getExecutableFormat());
        out.println("language=" + currentProgram.getLanguageID());
        out.println("compiler=" + currentProgram.getCompilerSpec().getCompilerSpecID());
        out.println("imageBase=" + currentProgram.getImageBase());
        out.println("minAddress=" + currentProgram.getMinAddress());
        out.println("maxAddress=" + currentProgram.getMaxAddress());

        out.println("=== BLOCKS ===");
        for (MemoryBlock blk2 : currentProgram.getMemory().getBlocks()) {
            out.println("block=" + blk2.getName()
                + "|" + blk2.getStart() + "|" + blk2.getEnd()
                + "|" + (blk2.isRead() ? "R" : "-")
                + (blk2.isWrite() ? "W" : "-")
                + (blk2.isExecute() ? "X" : "-")
                + "|" + blk2.getType());
        }

        out.println("=== ENTRY POINTS ===");
        java.util.Iterator<Address> eps = currentProgram.getSymbolTable().getExternalEntryPointIterator();
        while (eps.hasNext()) {
            Address a = eps.next();
            Symbol sym = currentProgram.getSymbolTable().getPrimarySymbol(a);
            out.println("entry=" + a + "|" + (sym != null ? sym.getName() : ""));
        }

        out.println("=== FUNCTIONS ===");
        FunctionIterator fns = currentProgram.getFunctionManager().getFunctions(true);
        int count = 0;
        while (fns.hasNext()) {
            if (monitor.isCancelled()) break;
            Function f = fns.next();
            count++;
            String name = f.getName();
            String sig = f.getSignature().getPrototypeString();
            String ret = f.getReturnType().getName();
            out.println("=== FUNCTION ===");
            out.println("addr=" + f.getEntryPoint());
            out.println("name=" + name);
            out.println("signature=" + sig);
            out.println("returnType=" + ret);
            out.println("isThunk=" + f.isThunk());
            out.println("callingConvention=" + f.getCallingConventionName());
            String comment = f.getComment();
            if (comment != null && !comment.isEmpty()) {
                out.println("comment=" + comment.replace('\n', ' '));
            }
            DecompileResults res = dec.decompileFunction(f, 60, monitor);
            out.println("decompiled=" + res.decompileCompleted());
            if (res.decompileCompleted() && res.getDecompiledFunction() != null) {
                out.println("--- C ---");
                out.println(res.getDecompiledFunction().getC());
                out.println("--- END C ---");
            }
        }
        out.println("functionCount=" + count);
        dec.dispose();
        out.close();
        println("Dumped " + count + " functions to " + outputPath);
    }
}
// Dump program info, functions, and decompiled C to a text file for the YAML registry pipeline.
// Usage: -postScript DumpProgram.java <output_path>
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Program;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.symbol.Symbol;
import java.io.PrintWriter;

public class DumpProgram extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: DumpProgram.java <output_path>");
            return;
        }
        Program prog = currentProgram;
        PrintWriter out = new PrintWriter(args[0], "UTF-8");

        out.println("=== PROGRAM ===");
        out.println("name=" + prog.getName());
        out.println("exeFormat=" + prog.getExecutableFormat());
        out.println("language=" + prog.getLanguageID());
        out.println("compiler=" + prog.getCompilerSpec().getCompilerSpecID());
        out.println("imageBase=" + prog.getImageBase());
        out.println("minAddress=" + prog.getMinAddress());
        out.println("maxAddress=" + prog.getMaxAddress());

        out.println("=== BLOCKS ===");
        for (MemoryBlock blk : prog.getMemory().getBlocks()) {
            out.println("block=" + blk.getName()
                + "|" + blk.getStart() + "|" + blk.getEnd()
                + "|" + (blk.isRead() ? "R" : "-")
                + (blk.isWrite() ? "W" : "-")
                + (blk.isExecute() ? "X" : "-")
                + "|" + blk.getType());
        }

        out.println("=== ENTRY POINTS ===");
        AddressIterator eps = prog.getSymbolTable().getExternalEntryPointIterator();
        while (eps.hasNext()) {
            Address a = eps.next();
            Symbol sym = prog.getSymbolTable().getPrimarySymbol(a);
            out.println("entry=" + a + "|" + (sym != null ? sym.getName() : ""));
        }

        DecompInterface dec = new DecompInterface();
        dec.toggleCCode(true);
        dec.setSimplificationStyle("decompile");
        dec.openProgram(prog);

        out.println("=== FUNCTIONS ===");
        FunctionIterator fns = prog.getFunctionManager().getFunctions(true);
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
        println("Dumped " + count + " functions to " + args[0]);
    }
}

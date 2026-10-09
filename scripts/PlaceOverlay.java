// Place an RTLink overlay slice at its biased link address and label thunk entry points.
// Runs on a fresh BinaryLoader import; deletes the loader's block, creates the real one.
// Usage: -preScript PlaceOverlay.java <biasHex> <realBaseSegHex> <slicePath> [SEG:OFF ...]
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.mem.MemoryBlock;
import java.nio.file.Files;
import java.nio.file.Paths;

public class PlaceOverlay extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 3) {
            println("Usage: PlaceOverlay.java <biasHex> <realBaseSegHex> <slicePath> [SEG:OFF ...]");
            return;
        }
        int bias = Integer.parseInt(args[0], 16);
        int realBase = Integer.parseInt(args[1], 16);
        String slicePath = args[2];

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
        for (int i = 3; i < args.length; i++) {
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
    }
}

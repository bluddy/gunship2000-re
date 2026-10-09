// ExportListing.java
// Export a proper IDA-style .lst file from Ghidra
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Program;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.listing.CodeUnit;
import ghidra.program.model.listing.CommentType;
import java.io.PrintWriter;

public class ExportListing extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: ExportListing.java <output.lst>");
            return;
        }
        Program prog = currentProgram;
        PrintWriter out = new PrintWriter(args[0], "UTF-8");
        
        // Write header like IDA
        out.println(prog.getName() + "                        LISTING");
        out.println();
        
        Listing listing = prog.getListing();
        MemoryBlock[] blocks = prog.getMemory().getBlocks();
        
        for (MemoryBlock block : blocks) {
            if (block.isExecute()) {
                out.println("Segment: " + block.getName() + " (" + block.getStart() + "-" + block.getEnd() + ")");
                out.println();
                
                AddressIterator iter = listing.getCodeUnits(block.getStart(), block.getEnd(), true);
                while (iter.hasNext()) {
                    CodeUnit cu = iter.next();
                    String addr = cu.getMinAddress().toString();
                    
                    // Get bytes
                    byte[] b = new byte[cu.getLength()];
                    String bytes = "";
                    try {
                        prog.getMemory().getBytes(cu.getMinAddress(), b);
                        for (byte by : b) {
                            bytes += String.format("%02X ", by & 0xFF);
                        }
                    } catch (Exception e) {
                        bytes = "?? ";
                    }
                    
                    String mnemonic = cu.getMnemonicString();
                    String body = cu.getBodyString();
                    String comment = "";
                    try {
                        String c = cu.getComment(CommentType.PLATE);
                        if (c != null) comment = "; " + c;
                    } catch (Exception e) {
                        // ignore
                    }
                    
                    out.printf("%-20s %-30s %-10s %s %s%n", addr, bytes.trim(), mnemonic, body, comment);
                }
                out.println();
            }
        }
        out.close();
        println("Exported listing to " + args[0]);
    }
}

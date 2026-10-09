import ghidra.app.util.headless.HeadlessAnalyzer;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.database.ProgramDB;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.listing.Program;
import ghidra.framework.model.Project;
import ghidra.framework.model.ProjectLocator;
import ghidra.framework.store.FileSystem;
import ghidra.framework.plugintool.PluginTool;
import ghidra.util.task.TaskMonitor;
import ghidra.util.Msg;

import java.io.PrintWriter;
import java.io.File;
import java.io.FileInputStream;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;
import java.util.ArrayList;

/**
 * Standalone overlay analyzer - bypasses Ghidra's script mechanism entirely.
 * Usage: java -cp <ghidra-classpath> OverlayAnalyzer <slicePath> <outputPath> <biasHex> <realBaseSegHex> [SEG:OFF ...]
 */
public class OverlayAnalyzer {

    public static void main(String[] args) throws Exception {
        if (args.length < 4) {
            System.err.println("Usage: OverlayAnalyzer <slicePath> <outputPath> <biasHex> <realBaseSegHex> [SEG:OFF ...]");
            System.exit(1);
        }

        String slicePath = args[0];
        String outputPath = args[1];
        int bias = Integer.parseInt(args[2], 16);
        int realBase = Integer.parseInt(args[3], 16);

        List<String> entries = new ArrayList<>();
        for (int i = 4; i < args.length; i++) {
            for (String s : args[i].split(",")) {
                if (!s.trim().isEmpty()) entries.add(s.trim());
            }
        }

        // Initialize Ghidra
        String ghidraInstall = "C:\\tools\\ghidra\\ghidra_12.0_DEV";
        System.setProperty("ghidra.install.dir", ghidraInstall);
        
        // Build classpath from Ghidra installation
        String classpath = buildClasspath(ghidraInstall);
        System.out.println("Classpath length: " + classpath.length());

        // We can't easily change classpath from within JVM, so we'll use reflection
        // to set the classpath or use a different approach.
        
        // Actually, the simplest is to run this via the same JVM that runs analyzeHeadless
        // but we can't easily change classpath at runtime.
        
        // Alternative: use the HeadlessAnalyzer API directly from within a script-like context
        // but launched as a standalone app with proper classpath.
        
        // For now, let's try a different approach: use Ghidra's headless from command line
        // but with a custom script that we compile and load differently.
        
        // Given the time constraints, let me try the simplest thing:
        // Use the existing analyzeHeadless but with a different script loading mechanism.
        
        System.out.println("OverlayAnalyzer - use analyzeHeadless with proper script loading");
        System.out.println("This approach needs classpath setup. Exiting.");
        System.exit(1);
    }

    private static String buildClasspath(String ghidraInstall) {
        File dir = new File(ghidraInstall);
        StringBuilder cp = new StringBuilder();
        addJars(dir, cp);
        return cp.toString();
    }

    private static void addJars(File dir, StringBuilder cp) {
        File[] files = dir.listFiles();
        if (files == null) return;
        for (File f : files) {
            if (f.isDirectory()) {
                addJars(f, cp);
            } else if (f.getName().endsWith(".jar")) {
                if (cp.length() > 0) cp.append(File.pathSeparator);
                cp.append(f.getAbsolutePath());
            }
        }
    }
}
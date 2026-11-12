// Seed existing assembly entrypoints before auto-analysis; never change the binaries.
// @category SA-MP.Reference
import java.nio.file.*;
import java.util.*;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;

public class SeedReferenceFunctions extends GhidraScript {
    @Override public void run() throws Exception {
        List<String> rows = Files.readAllLines(Path.of(getScriptArgs()[0]));
        // Later entrypoints are barriers to the earlier function's flow traversal.
        Collections.reverse(rows);
        int created = 0;
        for (String row : rows) {
            monitor.checkCancelled();
            String[] fields = row.split("\t");
            Address entry = toAddr(fields[0]);
            if (getFunctionAt(entry) != null) continue;
            try {
                Function owner = getFunctionContaining(entry);
                if (owner != null) {
                    AddressSet body = new AddressSet(owner.getBody());
                    // A later function can own a backward shared tail. Retain
                    // its entry while making the requested start independent.
                    Address end = owner.getEntryPoint().compareTo(entry) > 0
                        ? owner.getEntryPoint().subtract(1) : body.getMaxAddress();
                    body.deleteRange(entry, end);
                    owner.setBody(body);
                }
                disassemble(entry);
                Function function = createFunction(entry, fields[1]);
                if (function != null) created++;
                else printerr("Could not seed " + entry);
            } catch (Exception error) {
                printerr("Seed " + entry + ": " + error);
            }
        }
        println("Seeded " + created + " assembly entrypoints");
    }
}

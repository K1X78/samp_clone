// Export complete, unedited Ghidra C for every assembly entry and discovered function.
// @category SA-MP.Reference
import java.nio.charset.StandardCharsets;
import java.nio.file.*;
import java.util.*;
import com.google.gson.*;
import ghidra.app.decompiler.*;
import ghidra.app.script.GhidraScript;
import ghidra.framework.Application;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class ExportReferencePseudocode extends GhidraScript {
    private String hex(Address address) {
        return String.format("0x%08x", address.getOffset());
    }

    private Map<String, Object> target(Function function) {
        Map<String, Object> result = new LinkedHashMap<>();
        result.put("address", hex(function.getEntryPoint()));
        result.put("name", function.getName());
        result.put("external", function.isExternal());
        return result;
    }

    @Override public void run() throws Exception {
        String[] args = getScriptArgs();
        Path output = Path.of(args[0]);
        int timeout = Integer.parseInt(args[2]);
        // Auto-analysis may have assigned a backward shared tail to a later
        // function. Reassert the exact existing assembly starts before export.
        runScript("SeedReferenceFunctions.java", new String[] {args[1]});
        analyzeChanges(currentProgram);
        Files.createDirectories(output.resolve("functions"));
        TreeMap<Address, String> entries = new TreeMap<>();
        Set<Address> assemblyEntries = new HashSet<>();
        Map<Address, String> seedSources = new HashMap<>();
        for (String row : Files.readAllLines(Path.of(args[1]))) {
            String[] fields = row.split("\t");
            Address start = toAddr(fields[0]);
            entries.put(start, fields[1]);
            String source = fields.length > 2 ? fields[2] : "assembly";
            seedSources.put(start, source);
            if (source.equals("assembly")) assemblyEntries.add(start);
        }
        Set<Address> seedEntries = new HashSet<>(entries.keySet());
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!function.isExternal()) entries.putIfAbsent(function.getEntryPoint(), function.getName());
        }
        DecompInterface decompiler = new DecompInterface();
        DecompileOptions options = new DecompileOptions();
        options.grabFromProgram(currentProgram);
        decompiler.setOptions(options);
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram)) throw new IllegalStateException(decompiler.getLastMessage());
        List<Map<String, Object>> records = new ArrayList<>();
        int done = 0;
        try {
            for (Map.Entry<Address, String> entry : entries.entrySet()) {
                monitor.checkCancelled();
                Address address = entry.getKey();
                Function function = getFunctionAt(address);
                Map<String, Object> record = new LinkedHashMap<>();
                record.put("address", hex(address));
                record.put("name", function == null ? entry.getValue() : function.getName());
                record.put("assembly_entry", assemblyEntries.contains(address));
                record.put("seed_source", seedSources.getOrDefault(address, "ghidra_discovered"));
                String relative = "functions/" + String.format("%08x.c", address.getOffset());
                record.put("file", relative);
                String status = "missing_function";
                String diagnostic = "No Ghidra function exists at this exact assembly entrypoint.";
                String code = "";
                if (function != null) {
                    record.put("signature", function.getSignature().toString());
                    List<String> ranges = new ArrayList<>();
                    for (AddressRange range : function.getBody().getAddressRanges()) {
                        ranges.add(hex(range.getMinAddress()) + ".." + hex(range.getMaxAddress()));
                    }
                    record.put("body_ranges", ranges);
                    List<String> overlaps = new ArrayList<>();
                    for (Address known : seedEntries) {
                        if (!known.equals(address) && function.getBody().contains(known)) overlaps.add(hex(known));
                    }
                    Collections.sort(overlaps);
                    record.put("other_seed_entries_in_body", overlaps);
                    List<Map<String, Object>> callees = new ArrayList<>();
                    List<Function> called = new ArrayList<>(function.getCalledFunctions(monitor));
                    called.sort(Comparator.comparing(Function::getEntryPoint));
                    for (Function callee : called) callees.add(target(callee));
                    record.put("callees", callees);
                    List<Map<String, Object>> incoming = new ArrayList<>();
                    ReferenceIterator references = currentProgram.getReferenceManager().getReferencesTo(address);
                    while (references.hasNext()) {
                        Reference reference = references.next();
                        Map<String, Object> item = new LinkedHashMap<>();
                        item.put("from", hex(reference.getFromAddress()));
                        item.put("type", reference.getReferenceType().toString());
                        Function caller = getFunctionContaining(reference.getFromAddress());
                        if (caller != null) item.put("function", target(caller));
                        incoming.add(item);
                    }
                    record.put("references_to_entry", incoming);
                    try {
                        DecompileResults result = decompiler.decompileFunction(function, timeout, monitor);
                        diagnostic = result.getErrorMessage();
                        if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                            code = result.getDecompiledFunction().getC();
                            status = "ok";
                        } else {
                            status = result.isTimedOut() ? "timeout" : "decompile_failed";
                        }
                    } catch (Exception error) {
                        status = "exception";
                        diagnostic = error.toString();
                    }
                }
                record.put("status", status);
                record.put("diagnostic", diagnostic == null ? "" : diagnostic);
                String header = "/*\n * Generated Ghidra pseudocode, NOT verified source.\n * Binary: " +
                    currentProgram.getName() + "\n * Entry: " + hex(address) +
                    "\n * Name: " + record.get("name") + "\n * Status: " + status +
                    "\n * Full provenance, body ranges, references: ../index.json\n * Diagnostic: " +
                    (diagnostic == null ? "" : diagnostic.replace("*/", "* /")) + "\n */\n\n";
                Files.writeString(output.resolve(relative), header + code +
                    "\n/* END FUNCTION " + hex(address) + " */\n", StandardCharsets.UTF_8);
                records.add(record);
                if (++done % 250 == 0) println("Exported " + done + " / " + entries.size());
            }
        } finally {
            decompiler.dispose();
        }
        Map<String, Object> index = new LinkedHashMap<>();
        index.put("schema", 1);
        index.put("binary", currentProgram.getName());
        index.put("sha256", currentProgram.getExecutableSHA256());
        index.put("image_base", hex(currentProgram.getImageBase()));
        index.put("language", currentProgram.getLanguageID().toString());
        index.put("compiler", currentProgram.getCompilerSpec().getCompilerSpecID().toString());
        index.put("ghidra_version", Application.getApplicationVersion());
        index.put("functions", records);
        Files.writeString(output.resolve("index.json"), new GsonBuilder().setPrettyPrinting().create().toJson(index) + "\n");
        println("EXPORT COMPLETE: " + records.size() + " functions to " + output);
    }
}

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c78e6
 * Name: GetProcessMemoryInfo
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


BOOL GetProcessMemoryInfo(HANDLE Process,PPROCESS_MEMORY_COUNTERS ppsmemCounters,DWORD cb)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x100c78e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetProcessMemoryInfo(Process,ppsmemCounters,cb);
  return BVar1;
}


/* END FUNCTION 0x100c78e6 */

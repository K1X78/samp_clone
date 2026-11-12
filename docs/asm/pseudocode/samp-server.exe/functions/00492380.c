/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00492380
 * Name: FUN_00492380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00492380(void)

{
  bool bVar1;
  
  bVar1 = DAT_004fc430 != (FILE *)0x0;
  if (bVar1) {
    _fclose(DAT_004fc430);
  }
  DAT_004fc430 = (FILE *)FUN_0049fbe9("server_log.txt","a");
  if (DAT_004fc430 != (FILE *)0x0) {
    FUN_00491fa0("");
    FUN_00491fa0("----------");
    if (bVar1) {
      FUN_00491fa0("Reloaded log file: \"server_log.txt\".");
      FUN_00491fa0("----------");
      return;
    }
    FUN_00491fa0("Loaded log file: \"server_log.txt\".");
    FUN_00491fa0("----------");
    return;
  }
  FUN_00491fa0("Failed to load log file: \"server_log.txt\".");
  return;
}


/* END FUNCTION 0x00492380 */

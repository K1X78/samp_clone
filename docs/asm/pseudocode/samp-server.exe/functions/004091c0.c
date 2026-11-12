/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004091c0
 * Name: FUN_004091c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_004091c0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_004ed550 == 0) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_004ed550 = (local_94.dwPlatformId == 2) + 1;
  }
  return DAT_004ed550 == 2;
}


/* END FUNCTION 0x004091c0 */

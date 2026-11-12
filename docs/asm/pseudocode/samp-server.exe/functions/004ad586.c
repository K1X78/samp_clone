/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ad586
 * Name: __IsZeroMan
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl __IsZeroMan(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}


/* END FUNCTION 0x004ad586 */

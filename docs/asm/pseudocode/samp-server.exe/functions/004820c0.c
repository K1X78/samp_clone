/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004820c0
 * Name: FUN_004820c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004820c0(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_2 + 4) - 1;
  if (DAT_004fc410 <= uVar1) {
    return 0;
  }
  return *(undefined4 *)(DAT_004fc40c + uVar1 * 4);
}


/* END FUNCTION 0x004820c0 */

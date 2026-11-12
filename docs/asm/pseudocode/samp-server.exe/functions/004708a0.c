/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004708a0
 * Name: FUN_004708a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004708a0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(void **)(DAT_004fc438 + 0x10) == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_00465960(*(void **)(DAT_004fc438 + 0x10),*(int *)(param_2 + 4));
  return uVar1;
}


/* END FUNCTION 0x004708a0 */

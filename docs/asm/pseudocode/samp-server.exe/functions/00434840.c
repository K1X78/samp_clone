/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00434840
 * Name: FUN_00434840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00434840(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    FUN_00407e50(*(int *)(iVar1 + 0x44));
    uVar2 = FUN_00434350(*(int **)(param_1 + 0x10));
    FUN_00408130(iVar1);
    FUN_00407e90(*(int *)(iVar1 + 0x44));
    return uVar2;
  }
  return 0;
}


/* END FUNCTION 0x00434840 */

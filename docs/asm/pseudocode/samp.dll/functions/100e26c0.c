/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e26c0
 * Name: FUN_100e26c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e26c0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)((param_2 + 0x1e) * 0x10 + param_1);
  if ((*piVar2 != 0) &&
     ((iVar1 = piVar2[3], *(int *)(iVar1 + 0x28) != 0 ||
      ((*(int *)(iVar1 + 0x24) != 0 && (*(int *)(iVar1 + 0x34) == 0)))))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100e26c0 */

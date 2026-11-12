/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b9d10
 * Name: FUN_100b9d10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b9d10(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  while (iVar1 != 0) {
    FUN_100b9d10(param_2);
    param_1 = *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if ((*(int *)(param_1 + 0x28) != 0) &&
     (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 3 != 0)) {
    *param_2 = *param_2 + 1;
  }
  return;
}


/* END FUNCTION 0x100b9d10 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10057d90
 * Name: FUN_10057d90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10057d90(int param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 4);
  piVar2 = piVar1;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    piVar2 = (int *)*piVar1;
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_3 - (int)piVar2;
  }
  if (param_4 != 0) {
    param_4 = param_4 - param_3;
  }
  FUN_1000ad80(iVar3,param_4);
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    *param_2 = (int)piVar1 + iVar3;
    return;
  }
  *param_2 = *piVar1 + iVar3;
  return;
}


/* END FUNCTION 0x10057d90 */

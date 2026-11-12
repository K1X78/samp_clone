/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7600
 * Name: FUN_100b7600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b7600(int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    return;
  }
  iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
  if (iVar1 != 1) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      return;
    }
    iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    if (iVar1 != 5) {
      return;
    }
  }
  if ((((param_2 == 0) && (param_3 == 0)) && (param_4 == 0)) &&
     (((iVar1 = *(int *)(param_1 + 0x4c), *(int *)(iVar1 + 0x5b4) != 0 ||
       (*(int *)(iVar1 + 0x5a9) != 0)) || (*(int *)(iVar1 + 0x5b0) != 0)))) {
    (*(code *)0x6a3440)();
    return;
  }
  *(int *)(*(int *)(param_1 + 0x4c) + 0x5b4) = param_2;
  *(int *)(*(int *)(param_1 + 0x4c) + 0x5a9) = param_3;
  *(uint *)(*(int *)(param_1 + 0x4c) + 0x5b0) = (uint)param_4;
  (*(code *)0x6b3e90)();
  return;
}


/* END FUNCTION 0x100b7600 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7d80
 * Name: FUN_100b7d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b7d80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    if (iVar1 == 1) {
      (*(code *)0x6a6ae0)(0,param_3,param_2,param_4,1);
    }
  }
  return;
}


/* END FUNCTION 0x100b7d80 */

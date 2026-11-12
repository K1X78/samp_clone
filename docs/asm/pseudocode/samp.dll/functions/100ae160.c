/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae160
 * Name: FUN_100ae160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100ae160(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x2a4);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) && (iVar2 = piVar1[6], iVar2 != 0)) {
    if (param_2 == 1) {
      (*(code *)&DAT_004d3aa0)(iVar2,param_3,param_4);
      return;
    }
    if (param_2 == 2) {
      (*(code *)0x4d4610)(iVar2,param_3,param_4,param_5);
    }
  }
  return;
}


/* END FUNCTION 0x100ae160 */

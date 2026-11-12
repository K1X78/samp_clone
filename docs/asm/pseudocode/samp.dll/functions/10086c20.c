/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086c20
 * Name: FUN_10086c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10086c20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_10086ba0(param_2,param_3);
  piVar1 = *(int **)(param_1 + 0xf);
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))();
    }
    *(int **)(param_1 + 0xf) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))();
    }
  }
  return;
}


/* END FUNCTION 0x10086c20 */

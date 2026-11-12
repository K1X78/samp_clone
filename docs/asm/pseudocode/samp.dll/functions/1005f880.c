/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005f880
 * Name: FUN_1005f880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1005f880(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_320 [100];
  int aiStack_190 [100];
  
  FUN_1005f750(param_2,local_320);
  piVar3 = local_320;
  for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *piVar3;
    piVar3 = piVar3 + 1;
    param_1 = param_1 + 1;
  }
  uVar1 = 100;
  do {
    if (local_320[uVar1] != 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 200);
  return 0;
}


/* END FUNCTION 0x1005f880 */

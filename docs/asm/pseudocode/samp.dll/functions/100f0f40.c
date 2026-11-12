/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f0f40
 * Name: FUN_100f0f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f0f40(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) || (*(int *)(param_1 + 0x24) == 0)) ||
       ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 == (int *)0x0 || (*piVar1 != param_1)))) ||
      ((piVar1[1] < 0x3f34 || (0x3f53 < piVar1[1])))) || ((piVar1[3] != 0 && (piVar1[1] != 0x3f3e)))
     ) {
    return 0xfffffffe;
  }
  if (piVar1[1] == 0x3f3e) {
    uVar2 = FUN_100f7770(0,0,0);
    iVar3 = FUN_100f7770(uVar2,param_2,param_3);
    if (iVar3 != piVar1[7]) {
      return 0xfffffffd;
    }
  }
  iVar3 = FUN_100ef590(param_2 + param_3,param_3);
  if (iVar3 == 0) {
    piVar1[4] = 1;
    return 0;
  }
  piVar1[1] = 0x3f52;
  return 0xfffffffc;
}


/* END FUNCTION 0x100f0f40 */

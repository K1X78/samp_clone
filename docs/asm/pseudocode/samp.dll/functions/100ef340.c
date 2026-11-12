/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ef340
 * Name: FUN_100ef340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100ef340(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_1;
  if (((((param_1 == 0) || (*(int *)(param_1 + 0x20) == 0)) ||
       (puVar1 = (undefined4 *)(param_1 + 0x24), (code *)*puVar1 == (code *)0x0)) ||
      ((piVar2 = *(int **)(param_1 + 0x1c), piVar2 == (int *)0x0 || (*piVar2 != param_1)))) ||
     ((piVar2[1] < 0x3f34 || (0x3f53 < piVar2[1])))) {
    return 0xfffffffe;
  }
  if ((int)param_2 < 0) {
    param_1 = 0;
    param_2 = -param_2;
  }
  else {
    param_1 = ((int)param_2 >> 4) + 5;
    if ((int)param_2 < 0x30) {
      param_2 = param_2 & 0xf;
    }
  }
  if ((param_2 != 0) && (((int)param_2 < 8 || (0xf < (int)param_2)))) {
    return 0xfffffffe;
  }
  if ((piVar2[0xe] != 0) && (piVar2[10] != param_2)) {
    (*(code *)*puVar1)(*(undefined4 *)(iVar3 + 0x28),piVar2[0xe]);
    piVar2[0xe] = 0;
  }
  piVar2[3] = param_1;
  piVar2[10] = param_2;
  uVar4 = FUN_100ef2e0(iVar3);
  return uVar4;
}


/* END FUNCTION 0x100ef340 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d6b80
 * Name: FUN_100d6b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d6b80(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (int *)0x0) || (param_2[0x1300] != -0x3f212453)) {
    return 2;
  }
  if (param_2[0x19] == 0) {
    return 0;
  }
  iVar1 = param_2[9];
  piVar2 = param_2 + 2;
  if (((undefined4 *)*piVar2 == (undefined4 *)0x0) || (*(int **)*piVar2 != param_2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (iVar1 < 0x11) {
    param_1[4] = param_1[4] + -1;
    FUN_100d69c0(param_1);
  }
  if ((((undefined4 *)*piVar2 != (undefined4 *)0x0) && (9 < param_2[9])) && (param_2[9] < 0x11)) {
    *(undefined4 *)*piVar2 = param_2;
    FUN_100dc080(*piVar2,2);
    bVar3 = true;
  }
  FUN_100d6850(param_2);
  if (*piVar2 != 0) {
    if (bVar3) {
      FUN_100d5660(piVar2,iVar1 < 0x11);
    }
    else {
      FUN_100d0c00(param_2,*piVar2);
    }
  }
  if (param_2[0x18] == 2) {
    param_2[0x17] = 0;
    param_2[0x18] = 0;
  }
  FUN_100eb610(param_2 + 0x12ca);
  FUN_100e8a60(param_2 + 0x126e,0);
  param_2[0x20e] = 0;
  param_2[9] = 0x11;
  FUN_100d5ef0(param_1,param_2);
  if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
    *(undefined4 *)*piVar2 = 0;
    *piVar2 = 0;
  }
  param_2[0x19] = 0;
  piVar2 = (int *)param_1[5];
  do {
    if (piVar2 == (int *)0x0) {
LAB_100d6cbd:
      if ((int *)param_2[1] == (int *)0x0) {
        param_1[1] = *param_2;
      }
      else {
        *(int *)param_2[1] = *param_2;
      }
      if (*param_2 == 0) {
        param_1[2] = param_2[1];
      }
      else {
        *(int *)(*param_2 + 4) = param_2[1];
      }
      param_1[3] = param_1[3] + -1;
      FUN_100d6530();
      return 0;
    }
    if (*(int **)(*piVar2 + 0x10) == param_2) {
      FUN_100e89e0(param_1 + 5,piVar2,0);
      goto LAB_100d6cbd;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}


/* END FUNCTION 0x100d6b80 */

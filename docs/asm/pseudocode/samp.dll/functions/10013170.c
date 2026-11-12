/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013170
 * Name: FUN_10013170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10013170(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3;
  if (((*param_1 < 0x1000) && (-1 < param_3)) && (param_3 < 0x1000)) {
    if (param_1[param_3 + 1] != 0) {
      FUN_100b1f10(&DAT_10118158,param_1[param_3 + 1]);
    }
    piVar1 = param_1 + iVar2 * 5 + 0x3c01;
    *piVar1 = *param_2;
    piVar1[1] = param_2[1];
    piVar1[2] = param_2[2];
    piVar1[3] = param_2[3];
    piVar1[4] = param_2[4];
    *(undefined1 *)(iVar2 * 3 + 0xc004 + (int)param_1) = 0;
    iVar3 = FUN_100a1010(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],&param_3);
    param_1[iVar2 + 1] = iVar3;
    param_1[iVar2 + 0x1001] = param_3;
    *param_1 = *param_1 + 1;
  }
  return;
}


/* END FUNCTION 0x10013170 */

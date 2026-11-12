/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a5170
 * Name: FUN_100a5170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5170(undefined4 *param_1,undefined4 param_2,float *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_1018e590;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_1018e594 = *param_1;
  _DAT_1018e598 = param_1[1];
  _DAT_1018e59c = param_1[2];
  _DAT_1018e5a0 = *param_3;
  _DAT_1018e5a4 = param_3[1];
  _DAT_1018e5a8 = param_3[2];
  if (((param_4 != (int *)0x0) && (iVar1 = *param_4, DAT_1018f644 = iVar1, iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x14) != 0)) {
    if (DAT_10156ab0 == 0) {
      puVar3 = &DAT_1018e828;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      puVar3 = &DAT_1018ea60;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      FUN_100b5450(&DAT_1018ea60,*(undefined4 *)(iVar1 + 0x14));
      FUN_100b5280(&DAT_1018e828,&DAT_1018ea60);
      FUN_100b4850(&DAT_1018e5ac,&DAT_1018e828,param_3);
      _DAT_1018e5b8 = DAT_1018f644;
    }
    else {
      _DAT_1018e5ac = *param_3 - *(float *)(*(int *)(iVar1 + 0x14) + 0x30);
      _DAT_1018e5b0 = param_3[1] - *(float *)(*(int *)(iVar1 + 0x14) + 0x34);
      _DAT_1018e5b4 = param_3[2] - *(float *)(*(int *)(iVar1 + 0x14) + 0x38);
      _DAT_1018e5b8 = iVar1;
    }
  }
  puVar3 = &DAT_1018e590;
  FUN_10001010(&DAT_1018e590);
  FUN_100aee80(puVar3);
  return;
}


/* END FUNCTION 0x100a5170 */

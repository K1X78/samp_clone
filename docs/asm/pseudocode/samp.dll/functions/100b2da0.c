/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2da0
 * Name: FUN_100b2da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100b2da0(char *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (pcVar6 == param_1 + 1) {
    return;
  }
  pcVar6 = param_1 + 0x321;
  pcVar7 = param_1;
  do {
    cVar1 = *pcVar7;
    pcVar7[0x321] = cVar1;
    fVar5 = _DAT_00859524;
    fVar4 = _DAT_00859520;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  fVar2 = (float)_DAT_00c17048;
  fVar3 = (float)_DAT_00c17044;
  FUN_1009fce0(fVar3 * *(float *)(param_1 + 0x963) * _DAT_00859520,
               fVar2 * *(float *)(param_1 + 0x967) * _DAT_00859524 * 0.5);
  if (param_1[0x9d1] == '\0') {
    uVar10 = *(undefined4 *)(param_1 + 0x96b);
  }
  else {
    uVar10 = *(undefined4 *)(param_1 + 0x9d2);
  }
  FUN_1009fca0(uVar10);
  FUN_1009fcd0(0);
  if (param_1[0x986] == '\0') {
    if (param_1[0x970] == '\0') {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 2;
  }
  FUN_1009fcf0(uVar10);
  FUN_1009fd50(fVar3 * *(float *)(param_1 + 0x972) * fVar4);
  FUN_1009fd60(fVar3 * *(float *)(param_1 + 0x976) * fVar4);
  FUN_1009fd30(param_1[0x971],0);
  FUN_1009fd40(*(undefined4 *)(param_1 + 0x97a));
  FUN_1009fd10(param_1[0x97e]);
  FUN_1009fcb0(*(undefined4 *)(param_1 + 0x97f));
  if (param_1[0x984] == '\0') {
    FUN_1009fd70(param_1[0x983]);
  }
  else {
    FUN_1009fcc0(param_1[0x984]);
  }
  FUN_1009fd00(*(undefined4 *)(param_1 + 0x987));
  FUN_1009fd80(pcVar6,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,pcVar6);
  if (param_1[0x9c0] != '\0') {
    FUN_1009fd90(pcVar6);
  }
  FUN_1009fc80(fVar3 - fVar3 * fVar4 * (640.0 - *(float *)(param_1 + 0x98b)),
               fVar2 - fVar2 * fVar5 * (448.0 - *(float *)(param_1 + 0x98f)),pcVar6);
  FUN_1009fcc0(0);
  if (param_1[0x986] == '\0') {
    if (param_1[0x970] != '\0') {
      iVar8 = FUN_100f9324();
      *(int *)(param_1 + 0x9c1) = iVar8;
      iVar9 = FUN_100f9324();
      *(int *)(param_1 + 0x9c9) = iVar9 + iVar8;
      uVar10 = FUN_100f9324();
      goto LAB_100b3059;
    }
    uVar10 = FUN_100f9324();
  }
  else {
    uVar10 = FUN_100f9324();
  }
  *(undefined4 *)(param_1 + 0x9c1) = uVar10;
  uVar10 = FUN_100f9324();
  *(undefined4 *)(param_1 + 0x9c9) = uVar10;
  uVar10 = FUN_100f9324();
LAB_100b3059:
  *(undefined4 *)(param_1 + 0x9c5) = uVar10;
  uVar10 = FUN_100f9324();
  *(undefined4 *)(param_1 + 0x9cd) = uVar10;
  param_1[0x9bf] = '\x01';
  return;
}


/* END FUNCTION 0x100b2da0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100465c0
 * Name: FUN_100465c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_100465c0(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,byte param_6,
            char param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  char cVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined2 *local_4;
  
  if ((10 < param_5) || (param_5 < 0)) {
    param_5 = 8;
  }
  if ((4 < param_4) || (param_4 < 0)) {
    param_4 = 1;
  }
  if (0x1f < param_6) {
    param_6 = 0;
  }
  uVar8 = param_3 + 7 >> 3;
  if (param_3 == 0) {
    return 0;
  }
  puVar2 = (undefined2 *)FUN_10044ec0();
  *(undefined4 *)((int)puVar2 + 0x1b) = param_9;
  *(undefined4 *)((int)puVar2 + 0x1f) = param_10;
  local_4 = puVar2;
  if (param_7 == '\0') {
    *(undefined4 **)((int)puVar2 + 0x2f) = param_2;
  }
  else {
    puVar3 = operator_new(uVar8);
    *(undefined4 **)((int)puVar2 + 0x2f) = puVar3;
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  *(int *)((int)puVar2 + 0x2b) = param_3;
  *(undefined4 *)((int)puVar2 + 0x23) = 0;
  *(undefined4 *)((int)puVar2 + 0x27) = 0;
  *puVar2 = *(undefined2 *)(param_1 + 0xb0);
  *(int *)(puVar2 + 3) = param_4;
  *(int *)(puVar2 + 5) = param_5;
  *(undefined4 *)((int)puVar2 + 0x17) = 0;
  iVar4 = FUN_10043980(puVar2);
  iVar4 = param_8 - (iVar4 + 7 >> 3);
  iVar7 = iVar4 + -0x1c;
  cVar1 = FUN_10056450();
  if (cVar1 != '\0') {
    iVar7 = iVar4 + -0x24;
  }
  if ((int)uVar8 <= iVar7) {
    *(int *)(param_1 + 0x37b) = *(int *)(param_1 + 0x37b) + 1;
  }
  else {
    *(int *)(param_1 + 0x37f) = *(int *)(param_1 + 0x37f) + 1;
  }
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  iVar4 = *(int *)(puVar2 + 5);
  if ((iVar4 == 10) || (iVar4 == 7)) {
    *(byte *)(puVar2 + 7) = param_6;
    psVar5 = (short *)(param_1 + 0x20b + (uint)param_6 * 2);
  }
  else {
    if (iVar4 != 9) goto LAB_10046724;
    *(byte *)(puVar2 + 7) = param_6;
    psVar5 = (short *)(param_1 + 0x1cb + (uint)param_6 * 2);
  }
  *(short *)((int)puVar2 + 0xf) = *psVar5;
  *psVar5 = *psVar5 + 1;
LAB_10046724:
  if ((int)uVar8 <= iVar7) {
    FUN_1002e400(&local_4);
    return 1;
  }
  FUN_100452c0(puVar2,param_8);
  return 1;
}


/* END FUNCTION 0x100465c0 */

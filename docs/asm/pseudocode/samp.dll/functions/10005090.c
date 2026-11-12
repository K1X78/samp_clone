/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005090
 * Name: FUN_10005090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10005090(int *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  undefined1 local_148 [4];
  char local_144;
  undefined4 local_143;
  undefined4 local_13f;
  undefined4 local_13b;
  undefined4 local_137;
  undefined4 local_133;
  undefined4 local_12f;
  float local_12b;
  byte local_127;
  undefined1 local_126;
  float local_124;
  undefined1 local_120 [276];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011270b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_4 = 0;
  puVar3 = (undefined4 *)thunk_FUN_1009c400();
  cVar1 = *(char *)(*param_1 + 0x2b0);
  if (cVar1 == '\0') {
    local_144 = FUN_1009c340();
  }
  else {
    local_144 = FUN_1009c330(CONCAT31((int3)((uint)*param_1 >> 8),cVar1));
  }
  local_143 = *puVar3;
  local_13f = puVar3[1];
  local_13b = puVar3[2];
  local_137 = puVar3[3];
  local_133 = puVar3[4];
  local_12f = puVar3[5];
  fVar10 = (float10)FUN_100ad510();
  local_12b = (float)fVar10;
  fVar10 = (float10)FUN_1009c2b0();
  local_124 = (float)fVar10;
  FUN_1009c2a0();
  local_126 = FUN_100f9324();
  bVar2 = FUN_100f9324();
  local_127 = local_127 ^ (bVar2 ^ local_127) & 0x3f;
  iVar4 = FUN_100abd60();
  if (*(int *)(iVar4 + 4) == 2) {
    local_127 = local_127 | 0xc0;
  }
  else {
    uVar5 = *(uint *)(iVar4 + 8);
    if (1 < uVar5) {
      uVar5 = 2;
    }
    local_127 = (char)uVar5 << 6 | local_127 & 0x3f;
  }
  DVar6 = GetTickCount();
  if (DVar6 - param_1[0x4a] < 0x1f5) {
    iVar4 = 0x1f;
    bVar9 = true;
    pcVar7 = (char *)((int)param_1 + 0xd5);
    pcVar8 = &local_144;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar9 = *pcVar7 == *pcVar8;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (bVar9) goto LAB_10005213;
  }
  DVar6 = GetTickCount();
  param_1[0x4a] = DVar6;
  local_148[0] = 0xcb;
  FUN_1001faa0(local_148,8,1);
  FUN_1001fb50(&local_144,0x1f);
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x18))(local_120,1,7,1);
  pcVar7 = &local_144;
  puVar3 = (undefined4 *)((int)param_1 + 0xd5);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)pcVar7;
  *(char *)((int)puVar3 + 2) = pcVar7[2];
LAB_10005213:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10005090 */

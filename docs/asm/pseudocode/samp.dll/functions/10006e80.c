/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10006e80
 * Name: FUN_10006e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10006e80(int *param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  float10 fVar11;
  undefined1 local_1cc [4];
  undefined2 local_1c8 [2];
  undefined2 local_1c4 [2];
  int local_1c0;
  ushort local_1bc;
  undefined2 local_1ba;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  float local_18c;
  undefined1 local_188;
  undefined1 local_187;
  byte local_186;
  undefined1 local_185;
  undefined1 local_184;
  ushort local_183;
  undefined4 uStack_181;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [48];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [276];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011292b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_1c0 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  local_4 = 0;
  uVar3 = FUN_100af1d0(local_1c4,local_1c8);
  cVar1 = FUN_100ab810();
  puVar9 = &local_1bc;
  for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar9[0] = 0;
    puVar9[1] = 0;
    puVar9 = puVar9 + 2;
  }
  iVar8 = *param_1;
  *puVar9 = 0;
  *(undefined1 *)(puVar9 + 1) = 0;
  uStack_181 = (float)CONCAT22(uStack_181._2_2_,(undefined2)uStack_181);
  if (iVar8 == 0) goto LAB_10007291;
  uVar4 = FUN_100abc20();
  iVar8 = local_1c0;
  local_1bc = FUN_1001e650(uVar4);
  uStack_181 = (float)CONCAT22(uStack_181._2_2_,(undefined2)uStack_181);
  if (local_1bc == 0xffff) goto LAB_10007291;
  local_1ba = local_1c4[0];
  local_186 = local_186 & 0x3f | cVar1 << 6;
  local_1b8 = local_1c8[0];
  local_1b6 = uVar3;
  uStack_181 = (float)CONCAT22(uStack_181._2_2_,(undefined2)uStack_181);
  if (((1999 < local_1bc) ||
      (uStack_181 = (float)CONCAT22(uStack_181._2_2_,(undefined2)uStack_181),
      *(int *)(iVar8 + 0x3074 + (uint)local_1bc * 4) == 0)) ||
     (iVar8 = *(int *)(iVar8 + 0x1134 + (uint)local_1bc * 4),
     uStack_181 = (float)CONCAT22(uStack_181._2_2_,(undefined2)uStack_181), iVar8 == 0))
  goto LAB_10007291;
  FUN_1009e950(local_160);
  FUN_1009eb20(&local_16c);
  FUN_100b4df0(local_160,&local_17c);
  FUN_100b5040(&local_17c);
  local_1ac = local_174;
  local_1b0 = local_178;
  local_1b4 = local_17c;
  local_1a8 = local_170;
  fVar11 = (float10)FUN_100b44b0(local_17c,*(undefined4 *)((int)param_1 + 0x9e));
  if (fVar11 < (float10)1e-05) {
    fVar11 = (float10)FUN_100b44b0(local_1b0,*(undefined4 *)((int)param_1 + 0xa2));
    if (fVar11 < (float10)1e-05) {
      fVar11 = (float10)FUN_100b44b0(local_1ac,*(undefined4 *)((int)param_1 + 0xa6));
      if (fVar11 < (float10)1e-05) {
        fVar11 = (float10)FUN_100b44b0(local_1a8,*(undefined4 *)((int)param_1 + 0xaa));
        if (fVar11 < (float10)1e-05) {
          local_1b4 = *(undefined4 *)((int)param_1 + 0x9e);
          local_1b0 = *(undefined4 *)((int)param_1 + 0xa2);
          local_1ac = *(undefined4 *)((int)param_1 + 0xa6);
          local_1a8 = *(undefined4 *)((int)param_1 + 0xaa);
        }
      }
    }
  }
  local_1a0 = local_12c;
  local_1a4 = local_130;
  local_19c = local_128;
  local_194 = local_168;
  local_198 = local_16c;
  local_190 = local_164;
  fVar11 = (float10)FUN_100b6de0();
  local_18c = (float)fVar11;
  FUN_100ab970();
  local_188 = FUN_100f9324();
  FUN_100ab9b0();
  local_187 = FUN_100f9324();
  bVar2 = FUN_100ab870();
  local_186 = local_186 ^ (bVar2 ^ local_186) & 0x3f;
  local_183 = 0;
  iVar5 = FUN_100b77d0();
  if ((iVar5 == 0) || (*(int *)(iVar5 + 0x4c) == 0)) {
LAB_10007135:
    FUN_100b77c0(0);
  }
  else {
    iVar6 = FUN_100b7830();
    if (iVar6 != iVar8) goto LAB_10007135;
    FUN_100b77c0(iVar5);
    local_183 = FUN_1001e650(*(undefined4 *)(iVar5 + 0x4c));
  }
  iVar8 = FUN_1009ee70();
  if (iVar8 == 0x208) {
    uStack_181 = (float)FUN_100b7200();
  }
  else {
    iVar8 = FUN_1009ee70();
    if (iVar8 == 0x21a) {
LAB_100071ac:
      fVar11 = (float10)FUN_100b7420();
    }
    else {
      iVar8 = FUN_1009ee70();
      if (iVar8 == 0x219) goto LAB_100071ac;
      iVar8 = FUN_1009ee70();
      if (iVar8 == 0x1c1) goto LAB_100071ac;
      iVar8 = FUN_100b6ed0();
      if (iVar8 != 2) {
        iVar8 = FUN_100b6ed0();
        if (iVar8 != 6) {
          uStack_181 = 0.0;
          goto LAB_100071b7;
        }
      }
      fVar11 = (float10)FUN_100b7de0();
    }
    uStack_181 = (float)fVar11;
  }
LAB_100071b7:
  iVar8 = FUN_100b70a0();
  local_185 = iVar8 != 0;
  iVar8 = FUN_100b7170();
  local_184 = iVar8 != 0;
  iVar8 = FUN_10003970((ushort *)((int)param_1 + 0x96),&local_1bc,0x3f);
  if (iVar8 != 0) {
    local_1cc[0] = 200;
    FUN_1001faa0(local_1cc,8,1);
    FUN_1001fb50(&local_1bc,0x3f);
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x18))(local_120,1,7,1);
    puVar9 = &local_1bc;
    puVar10 = (ushort *)((int)param_1 + 0x96);
    for (iVar8 = 0xf; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
      puVar9 = puVar9 + 2;
      puVar10 = puVar10 + 2;
    }
    *puVar10 = *puVar9;
    *(char *)(puVar10 + 1) = (char)puVar9[1];
  }
  if ((local_183 != 0) && (local_183 < 2000)) {
    FUN_10005240(CONCAT22((undefined2)uStack_181,local_183));
  }
  iVar8 = FUN_100b6fe0();
  if (iVar8 == 0) {
    DVar7 = GetTickCount();
    if (DVar7 - *(int *)((int)param_1 + 0x13b) < 0x3e9) goto LAB_10007291;
  }
  DVar7 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x13b) = DVar7;
  FUN_10005090();
LAB_10007291:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10006e80 */

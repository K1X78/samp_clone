/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10004db0
 * Name: FUN_10004db0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10004db0(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  DWORD DVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  float10 fVar11;
  undefined1 local_1bc [4];
  undefined2 local_1b8 [2];
  undefined2 local_1b4 [2];
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined4 local_1aa;
  undefined4 local_1a6;
  undefined4 local_1a2;
  undefined4 local_19e;
  undefined4 local_19a;
  undefined4 local_196;
  undefined4 local_192;
  undefined1 local_18e;
  undefined1 local_18d;
  byte local_18c;
  undefined1 local_18b;
  undefined4 local_18a;
  undefined4 local_186;
  undefined4 local_182;
  undefined4 local_17e;
  undefined4 local_17a;
  undefined4 local_176;
  undefined2 local_172;
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
  puStack_8 = &LAB_101126eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_4 = 0;
  uVar3 = FUN_100af1d0(local_1b8,local_1b4);
  cVar1 = FUN_100ab810();
  FUN_1009e950(local_160);
  FUN_1009eb20(&local_16c);
  local_1b0._0_2_ = local_1b8[0];
  local_1b0._2_2_ = local_1b4[0];
  local_18c = local_18c & 0x3f | cVar1 << 6;
  local_1aa = local_130;
  local_1a6 = local_12c;
  local_1a2 = local_128;
  local_1ac = uVar3;
  FUN_100b4df0(local_160,&local_19e);
  FUN_100b5040(&local_19e);
  fVar11 = (float10)FUN_100b44b0(local_19e,*(undefined4 *)(param_1 + 0x4c));
  if (fVar11 < (float10)1e-05) {
    fVar11 = (float10)FUN_100b44b0(local_19a,*(undefined4 *)(param_1 + 0x50));
    if (fVar11 < (float10)1e-05) {
      fVar11 = (float10)FUN_100b44b0(local_196,*(undefined4 *)(param_1 + 0x54));
      if (fVar11 < (float10)1e-05) {
        fVar11 = (float10)FUN_100b44b0(local_192,*(undefined4 *)(param_1 + 0x58));
        if (fVar11 < (float10)1e-05) {
          local_19e = *(undefined4 *)(param_1 + 0x4c);
          local_19a = *(undefined4 *)(param_1 + 0x50);
          local_196 = *(undefined4 *)(param_1 + 0x54);
          local_192 = *(undefined4 *)(param_1 + 0x58);
        }
      }
    }
  }
  FUN_100ab970();
  local_18e = FUN_100f9324();
  FUN_100ab9b0();
  local_18d = FUN_100f9324();
  bVar2 = FUN_100ab870();
  local_18c = local_18c ^ (bVar2 ^ local_18c) & 0x3f;
  local_18b = FUN_10003390();
  local_182 = local_164;
  local_18a = local_16c;
  local_186 = local_168;
  if (*(int *)(param_1 + 0x2e6) == 0) {
    local_17e = 0;
    local_17a = 0;
    local_176 = 0;
    local_172 = 0;
  }
  else {
    local_17e = *(undefined4 *)(param_1 + 0x2ea);
    local_17a = *(undefined4 *)(param_1 + 0x2ee);
    local_176 = *(undefined4 *)(param_1 + 0x2f2);
    local_172 = *(undefined2 *)(param_1 + 0x2d8);
  }
  local_170 = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = 1;
  DVar4 = GetTickCount();
  if (DVar4 - *(int *)(param_1 + 0x128) < 0x1f5) {
    iVar5 = 0x11;
    bVar10 = true;
    piVar6 = (int *)(param_1 + 0x3a);
    piVar8 = &local_1b0;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar10 = *piVar6 == *piVar8;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar10);
    if (bVar10) goto LAB_10005059;
  }
  DVar4 = GetTickCount();
  *(DWORD *)(param_1 + 0x128) = DVar4;
  local_1bc[0] = 0xcf;
  FUN_1001faa0(local_1bc,8,1);
  FUN_1001fb50(&local_1b0,0x44);
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x18))(local_120,1,7,1);
  puVar7 = &local_1b0;
  puVar9 = (undefined4 *)(param_1 + 0x3a);
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
LAB_10005059:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10004db0 */

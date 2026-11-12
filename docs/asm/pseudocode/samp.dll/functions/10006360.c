/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10006360
 * Name: FUN_10006360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10006360(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined1 local_184 [4];
  undefined2 local_180 [2];
  undefined2 local_17c [2];
  undefined2 local_178;
  undefined2 local_176;
  undefined2 local_174;
  undefined4 local_172;
  undefined4 local_16e;
  float local_16a;
  int local_164;
  undefined1 local_160 [48];
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011288b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f1f0();
  local_4 = 0;
  uVar4 = FUN_100af1d0(local_180,local_17c);
  FUN_1009d2a0(local_160);
  iVar8 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  local_164 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if ((iVar8 == 0) || (local_164 == 0)) {
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return;
  }
  local_172 = local_130;
  local_16e = local_12c;
  local_16a = local_128;
  local_178 = local_180[0];
  local_176 = local_17c[0];
  local_174 = uVar4;
  uVar5 = FUN_10003a00();
  DVar6 = GetTickCount();
  if (uVar5 < DVar6 - *(int *)(param_1 + 0x137)) {
    DVar6 = GetTickCount();
    *(DWORD *)(param_1 + 0x137) = DVar6;
    local_184[0] = 0xd4;
    FUN_1001faa0(local_184,8,1);
    FUN_1001fb50(&local_178,0x12);
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x18))(local_120,1,6,1);
    iVar7 = FUN_10003a00();
    DVar6 = GetTickCount();
    if ((uint)(iVar7 * 2) < DVar6 - *(int *)(param_1 + 0x13b)) {
      DVar6 = GetTickCount();
      *(DWORD *)(param_1 + 0x13b) = DVar6;
      FUN_10005090();
    }
  }
  FUN_100a1bd0(0);
  FUN_100ab990(0x42c80000);
  FUN_1009ee80(local_172,local_16e,local_16a + 20.0);
  if (*(char *)(param_1 + 0x313) == '\x01') {
    if ((0x3eb < *(ushort *)(param_1 + 0x314)) ||
       (*(int *)(iVar8 + 0xfd6 + (uint)*(ushort *)(param_1 + 0x314) * 4) == 0)) {
      *(undefined1 *)(param_1 + 0x313) = 0;
      *(undefined4 *)(param_1 + 0x318) = 0;
    }
    if (*(char *)(param_1 + 0x313) == '\x01') {
      uVar3 = *(ushort *)(param_1 + 0x314);
      if ((uVar3 < 0x3ec) && (*(int *)(iVar8 + 0xfd6 + (uint)uVar3 * 4) != 0)) {
        iVar8 = FUN_100010f0(uVar3);
        if ((*(int *)(iVar8 + 4) != 0) && (*(char *)(iVar8 + 0x1a) != '\0')) {
          iVar8 = FUN_100010f0(uVar3);
          if (*(char *)(iVar8 + 0x1a) != ' ') goto LAB_10006558;
        }
        *(undefined1 *)(param_1 + 0x313) = 0;
        *(undefined4 *)(param_1 + 0x318) = 0;
      }
    }
  }
LAB_10006558:
  if (*(int *)(param_1 + 0x318) != 0) goto LAB_1000664a;
  cVar1 = *(char *)(param_1 + 0x313);
  if (cVar1 == '\0') {
    FUN_100ac190(0,0,0x41200000);
    FUN_1009d5c0(0x42480000,0x42480000,0x42480000,0,0,0);
    FUN_1009d620(0x42700000,0x42700000,0x42480000,2);
  }
  else {
    if (cVar1 == '\x01') {
      uVar4 = *(undefined2 *)(param_1 + 0x314);
      iVar8 = FUN_100010b0(uVar4);
      if (iVar8 == 0) goto LAB_1000664a;
      iVar8 = FUN_100010f0(uVar4);
      if (*(int *)(iVar8 + 4) == 0) goto LAB_1000664a;
      uVar2 = *(undefined1 *)(param_1 + 0x312);
      uVar10 = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x44);
      puVar9 = &DAT_10117854;
    }
    else {
      if (cVar1 != '\x02') goto LAB_1000664a;
      uVar4 = *(undefined2 *)(param_1 + 0x314);
      iVar8 = FUN_10001150(uVar4);
      if (iVar8 == 0) goto LAB_1000664a;
      iVar8 = FUN_10001120(uVar4);
      if (iVar8 == 0) goto LAB_1000664a;
      uVar2 = *(undefined1 *)(param_1 + 0x312);
      uVar10 = *(undefined4 *)(iVar8 + 0x44);
      puVar9 = &DAT_10117840;
    }
    FUN_100b1f10(puVar9,uVar10,uVar2,2);
  }
  *(undefined4 *)(param_1 + 0x318) = 1;
LAB_1000664a:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10006360 */

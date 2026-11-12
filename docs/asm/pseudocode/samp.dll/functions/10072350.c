/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10072350
 * Name: FUN_10072350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10072350(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  DWORD DVar3;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  uint local_164;
  undefined1 local_160 [48];
  uint local_130;
  uint local_12c;
  uint local_128;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011620b;
  local_c = ExceptionList;
  uVar1 = *(ushort *)(param_1 + 0x88);
  iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
  if ((((uVar1 < 0x835) && (*(int *)(iVar2 + 4 + (uint)uVar1 * 4) != 0)) &&
      (*(int *)(iVar2 + 0x20d4 + (uint)uVar1 * 4) != 0)) &&
     ((ExceptionList = &local_c, param_2 != 2 ||
      (ExceptionList = &local_c, DVar3 = GetTickCount(),
      0xf9 < (int)(DVar3 - *(int *)(param_1 + 0x9e)))))) {
    DVar3 = GetTickCount();
    local_168 = *(undefined4 *)(param_1 + 0x92);
    local_164 = *(uint *)(param_1 + 0x9a);
    *(DWORD *)(param_1 + 0x9e) = DVar3;
    local_16c = *(undefined4 *)(param_1 + 0x96);
    FUN_1009e950(local_160);
    FUN_1001f1f0();
    local_4 = 0;
    if (*(int *)(param_1 + 0x8e) == 0) {
      FUN_1001f9d0();
    }
    else {
      FUN_1001f9f0();
    }
    local_170 = (uint)*(ushort *)(param_1 + 0x88);
    FUN_1001faa0(&local_170,0x10,1);
    local_170 = param_2;
    FUN_1001faa0(&local_170,0x20,1);
    local_170 = local_130;
    FUN_1001faa0(&local_170,0x20,1);
    local_170 = local_12c;
    FUN_1001faa0(&local_170,0x20,1);
    local_170 = local_128;
    FUN_1001faa0(&local_170,0x20,1);
    FUN_1001faa0(&local_168,0x20,1);
    FUN_1001faa0(&local_16c,0x20,1);
    local_170 = local_164;
    FUN_1001faa0(&local_170,0x20,1);
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117f2c,local_120,1,9,0,0);
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10072350 */

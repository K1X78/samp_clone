/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100109d0
 * Name: FUN_100109d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100109d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint local_164;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
  undefined1 local_144 [4];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  undefined2 local_138 [150];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101130cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  local_4 = 0;
  local_154 = CONCAT31(local_154._1_3_,4);
  local_164 = local_164 & 0xffffff00;
  local_158 = 0;
  local_15c = 0;
  local_150 = 0;
  local_14c = 0;
  local_148 = iVar1;
  FUN_1001f470(&local_160,0x10,1);
  FUN_1001f470(&local_164,8,1);
  FUN_1001f470(&local_158,0x20,1);
  FUN_1001f470(&local_15c,0x20,1);
  FUN_1001f470(local_144,0x20,1);
  FUN_1001f470(local_140,0x20,1);
  FUN_1001f470(local_13c,0x20,1);
  FUN_1001f470(&local_150,0x20,1);
  FUN_1001f470(&local_14c,0x20,1);
  FUN_1001f470(&local_154,8,1);
  FUN_1001f960(local_138,0x16);
  if ((((iVar1 != 0) && ((ushort)local_160 < 0x3ec)) &&
      (iVar1 = iVar1 + (local_160 & 0xffff) * 4, *(int *)(iVar1 + 0xfd6) != 0)) &&
     ((iVar1 = *(int *)(iVar1 + 0x26), iVar1 != 0 && (iVar1 = *(int *)(iVar1 + 8), iVar1 != 0)))) {
    iVar2 = FUN_10016c50(local_164,local_158,local_15c,local_144,local_150,local_14c,local_154);
    if (iVar2 == 0) {
      if (DAT_102aca10 != 0) {
        FUN_10067b60(DAT_102aca10,"Warning: Couldn\'t spawn player(%u)",local_160 & 0xffff);
      }
    }
    else {
      if (*(int *)(iVar1 + 4) != 0) {
        iVar2 = 0;
        do {
          FUN_100ae050(iVar2,local_138[iVar2]);
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0xb);
      }
      if ((char)local_164 != -1) {
        *(char *)(iVar1 + 0x19) = (char)local_164;
      }
      iVar2 = FUN_1000e300(local_160);
      if ((iVar2 != 0) && (*(int *)(iVar1 + 4) != 0)) {
        FUN_100ab920(0,1,1,0,0);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100109d0 */

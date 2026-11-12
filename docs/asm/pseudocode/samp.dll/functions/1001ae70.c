/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001ae70
 * Name: FUN_1001ae70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_1001ae70(undefined4 *param_1)

{
  int iVar1;
  char local_16d;
  undefined4 local_16c;
  undefined4 local_168;
  uint local_164;
  uint local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  uint local_13c [7];
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101139fb;
  local_c = ExceptionList;
  local_164 = 0xffff;
  local_15c = 0xffffffff;
  local_158 = 0;
  local_154 = 0;
  local_150 = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_14c = 0;
  local_16c = 0xffff;
  local_168 = 0xffff;
  local_13c[4] = 0;
  local_13c[5] = 0;
  local_13c[6] = 0;
  local_13c[1] = 0;
  local_13c[2] = 0;
  local_13c[3] = 0;
  local_13c[0] = local_13c[0] & 0xffffff00;
  local_160 = local_160 & 0xffffff00;
  local_16d = '\0';
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(&local_164,0x10,1);
  FUN_1001f470(&local_15c,0x20,1);
  FUN_1001f470(&local_158,0x20,1);
  FUN_1001f470(&local_154,0x20,1);
  FUN_1001f470(&local_150,0x20,1);
  FUN_1001f470(&local_148,0x20,1);
  FUN_1001f470(&local_144,0x20,1);
  FUN_1001f470(&local_140,0x20,1);
  FUN_1001f470(&local_14c,0x20,1);
  FUN_1001f470(&local_16d,8,1);
  FUN_1001f470(&local_16c,0x10,1);
  FUN_1001f470(&local_168,0x10,1);
  if (((short)local_16c != -1) || ((short)local_168 != -1)) {
    FUN_1001f470(local_13c + 4,0x20,1);
    FUN_1001f470(local_13c + 5,0x20,1);
    FUN_1001f470(local_13c + 6,0x20,1);
    FUN_1001f470(local_13c + 1,0x20,1);
    FUN_1001f470(local_13c + 2,0x20,1);
    FUN_1001f470(local_13c + 3,0x20,1);
    FUN_1001f470(local_13c,8,1);
  }
  FUN_1001f470(&local_160,8,1);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
  FUN_100127d0(local_164,local_15c,local_158,local_154,local_150,local_148,local_144,local_140,
               local_14c);
  if (((ushort)local_164 < 0x835) && (*(int *)(iVar1 + 4 + (local_164 & 0xffff) * 4) != 0)) {
    iVar1 = *(int *)(iVar1 + 0x20d4 + (local_164 & 0xffff) * 4);
  }
  else {
    iVar1 = 0;
  }
  if ((short)local_16c == -1) {
    if (((short)local_168 != -1) && (iVar1 != 0)) {
      FUN_100a7d90(local_168,local_13c + 4,local_13c + 1,local_13c[0]);
    }
  }
  else if (iVar1 != 0) {
    FUN_100a7d00(local_16c,local_13c + 4,local_13c + 1);
  }
  if ((char)local_160 != '\0') {
    FUN_1001aba0(local_160,iVar1,local_120);
  }
  if ((iVar1 != 0) && (local_16d != '\0')) {
    *(undefined1 *)(iVar1 + 0x53) = 1;
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001ae70 */

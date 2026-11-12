/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005e630
 * Name: FUN_1005e630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005e630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_238 [48];
  int local_208 [26];
  undefined1 local_1a0 [104];
  int local_138 [26];
  undefined1 local_d0 [104];
  undefined1 local_68 [104];
  
  FUN_1005e5f0(param_2,param_4,param_5);
  FUN_1005e610(param_1,param_3,param_5 + 0xd0);
  iVar2 = FUN_10058700(param_2,param_1,0x1a,0x19,local_68);
  iVar3 = FUN_10058700(param_4,param_3,0x1a,0x19,local_d0);
  FUN_1005e5f0(local_68,local_d0,local_208);
  local_138[0] = 0;
  local_138[1] = 0;
  local_138[2] = 0;
  local_138[3] = 0;
  local_138[4] = 0;
  local_138[5] = 0;
  local_138[6] = 0;
  local_138[7] = 0;
  local_138[8] = 0;
  local_138[9] = 0;
  local_138[10] = 0;
  local_138[0xb] = 0;
  local_138[0xc] = 0;
  local_138[0xd] = 0;
  local_138[0xe] = 0;
  local_138[0xf] = 0;
  local_138[0x10] = 0;
  local_138[0x11] = 0;
  local_138[0x12] = 0;
  local_138[0x13] = 0;
  local_138[0x14] = 0;
  local_138[0x15] = 0;
  local_138[0x16] = 0;
  local_138[0x17] = 0;
  local_138[0x18] = 0;
  local_138[0x19] = 0;
  if (iVar2 != 0) {
    iVar4 = FUN_10058700(local_1a0,local_d0,0x34,0x1a,local_1a0);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_238,&DAT_101383ec);
    }
  }
  if (iVar3 != 0) {
    iVar4 = FUN_10058700(local_1a0,local_68,0x34,0x1a,local_1a0);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_238,&DAT_101383ec);
    }
  }
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar5 = 0x34;
    while( true ) {
      piVar1 = local_208 + uVar5;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_208 + uVar5 + 1;
      *piVar1 = *piVar1 + 1;
      if ((*piVar1 != 0) || (uVar5 = uVar5 + 2, 0x4d < uVar5)) break;
    }
  }
  iVar2 = FUN_10058780(local_208,param_5 + 0xd0,0x4e,0x32,local_208);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_238,&DAT_101383ec);
  }
  iVar2 = FUN_10058780(local_208,param_5,0x4e,0x34,local_208);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_238,&DAT_101383ec);
  }
  uVar5 = 0x4c;
  do {
    if (local_208[uVar5] != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x555);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_238,&DAT_101383ec);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x4e);
  iVar2 = FUN_10058700(param_5 + 0x68,local_208,0x4c,0x4c,param_5 + 0x68);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x559);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_238,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005e630 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005ef30
 * Name: FUN_1005ef30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005ef30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_224 [48];
  int local_1f4 [25];
  undefined1 local_190 [100];
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [100];
  undefined1 local_64 [100];
  
  FUN_1005e610(param_2,param_4,param_5);
  FUN_1005e610(param_1,param_3,param_5 + 200);
  iVar2 = FUN_10058700(param_2,param_1,0x19,0x19,local_64);
  iVar3 = FUN_10058700(param_4,param_3,0x19,0x19,local_c8);
  FUN_1005e610(local_64,local_c8,local_1f4);
  local_12c = 0;
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  if (iVar2 != 0) {
    iVar4 = FUN_10058700(local_190,local_c8,0x32,0x19,local_190);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_224,&DAT_101383ec);
    }
  }
  if (iVar3 != 0) {
    iVar4 = FUN_10058700(local_190,local_64,0x32,0x19,local_190);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_224,&DAT_101383ec);
    }
  }
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar5 = 0x32;
    while( true ) {
      piVar1 = local_1f4 + uVar5;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_1f4 + uVar5 + 1;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_1f4 + uVar5 + 2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_1f4 + uVar5 + 3;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_1f4 + uVar5 + 4;
      *piVar1 = *piVar1 + 1;
      if ((*piVar1 != 0) || (uVar5 = uVar5 + 5, 0x4a < uVar5)) break;
    }
  }
  iVar2 = FUN_10058780(local_1f4,param_5 + 200,0x4b,0x32,local_1f4);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_224,&DAT_101383ec);
  }
  iVar2 = FUN_10058780(local_1f4,param_5,0x4b,0x32,local_1f4);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_224,&DAT_101383ec);
  }
  iVar2 = FUN_10058700(param_5 + 100,local_1f4,0x4b,0x4b,param_5 + 100);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x55e);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_224,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005ef30 */

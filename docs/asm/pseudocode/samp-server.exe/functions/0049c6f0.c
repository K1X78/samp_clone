/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049c6f0
 * Name: FUN_0049c6f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0049c6f0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  
  FUN_0049c6d0(param_2,param_4,param_5);
  FUN_0049c6d0(param_1,param_3,param_5 + 0x32);
  uVar3 = FUN_0049b2c0(local_64,param_1,param_2,param_1,0x19,0x19,(int)local_64);
  uVar4 = FUN_0049b2c0(extraout_ECX,(int)((ulonglong)uVar3 >> 0x20),param_4,param_3,0x19,0x19,
                       (int)local_c8);
  FUN_0049c6d0((int)local_64,(int)local_c8,local_1f4);
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
  if ((int)uVar3 != 0) {
    uVar5 = FUN_0049b2c0(local_190,local_190,(int)local_190,(int)local_c8,0x32,0x19,(int)local_190);
    if ((int)uVar5 != 0) {
      FUN_0049b060(local_224,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_224,&DAT_004c8aa0);
    }
  }
  if ((int)uVar4 != 0) {
    uVar5 = FUN_0049b2c0(local_64,local_190,(int)local_190,(int)local_64,0x32,0x19,(int)local_190);
    if ((int)uVar5 != 0) {
      FUN_0049b060(local_224,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_224,&DAT_004c8aa0);
    }
  }
  if (((int)uVar3 != 0) && ((int)uVar4 != 0)) {
    uVar2 = 0x32;
    while( true ) {
      piVar1 = local_1f4 + uVar2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_1f4 + uVar2 + 1;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_1f4 + uVar2 + 2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_1f4 + uVar2 + 3;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_1f4 + uVar2 + 4;
      *piVar1 = *piVar1 + 1;
      if ((*piVar1 != 0) || (uVar2 = uVar2 + 5, 0x4a < uVar2)) break;
    }
  }
  uVar3 = FUN_0049b340(local_1f4,local_1f4,(int)local_1f4,(int)(param_5 + 0x32),0x4b,0x32,
                       (int)local_1f4);
  if ((int)uVar3 != 0) {
    FUN_0049b060(local_224,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_224,&DAT_004c8aa0);
  }
  uVar3 = FUN_0049b340(local_1f4,local_1f4,(int)local_1f4,(int)param_5,0x4b,0x32,(int)local_1f4);
  if ((int)uVar3 != 0) {
    FUN_0049b060(local_224,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_224,&DAT_004c8aa0);
  }
  uVar3 = FUN_0049b2c0(local_1f4,(int)((ulonglong)uVar3 >> 0x20),(int)(param_5 + 0x19),
                       (int)local_1f4,0x4b,0x4b,(int)(param_5 + 0x19));
  if ((int)uVar3 != 0) {
    FUN_0049b060(local_224,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x55e);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_224,&DAT_004c8aa0);
  }
  return;
}


/* END FUNCTION 0x0049c6f0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049bca0
 * Name: FUN_0049bca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0049bca0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  int local_60 [4];
  undefined1 local_50 [16];
  int local_40 [4];
  undefined1 local_30 [48];
  
  FUN_0049bc40(param_2,param_4,param_5);
  FUN_0049b9f0(param_1,param_3,param_5 + 8);
  uVar4 = FUN_0049b2c0(local_70,param_1,param_2,param_1,4,3,(int)local_70);
  uVar5 = FUN_0049b2c0(extraout_ECX,(int)((ulonglong)uVar4 >> 0x20),param_4,param_3,4,3,
                       (int)local_80);
  FUN_0049bc40((int)local_70,(int)local_80,local_60);
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  uVar3 = extraout_EDX;
  if ((int)uVar4 != 0) {
    uVar6 = FUN_0049b2c0(local_50,local_80,(int)local_50,(int)local_80,8,4,(int)local_50);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_004c8aa0);
    }
  }
  if ((int)uVar5 != 0) {
    uVar6 = FUN_0049b2c0(local_50,local_50,(int)local_50,(int)local_70,8,4,(int)local_50);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_004c8aa0);
    }
  }
  if (((int)uVar4 != 0) && ((int)uVar5 != 0)) {
    uVar2 = 8;
    do {
      piVar1 = local_60 + uVar2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xc);
  }
  uVar4 = FUN_0049b340(local_60,uVar3,(int)local_60,(int)(param_5 + 8),0xc,6,(int)local_60);
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_004c8aa0);
  }
  uVar4 = FUN_0049b340(local_60,(int)((ulonglong)uVar4 >> 0x20),(int)local_60,(int)param_5,0xc,8,
                       (int)local_60);
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_004c8aa0);
  }
  uVar2 = 10;
  do {
    if (local_60[uVar2] != 0) {
      FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x555);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_004c8aa0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  uVar4 = FUN_0049b2c0(local_60,(int)((ulonglong)uVar4 >> 0x20),(int)(param_5 + 4),(int)local_60,10,
                       10,(int)(param_5 + 4));
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x559);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_004c8aa0);
  }
  return;
}


/* END FUNCTION 0x0049bca0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049bf30
 * Name: FUN_0049bf30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0049bf30(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_bc [48];
  int local_8c [7];
  undefined1 local_70 [28];
  int local_54 [7];
  undefined1 local_38 [28];
  undefined1 local_1c [28];
  
  FUN_0049bef0(param_2,param_4,param_5);
  FUN_0049bf10(param_1,param_3,param_5 + 0xe);
  uVar4 = FUN_0049b2c0(local_38,param_1,param_2,param_1,7,6,(int)local_38);
  uVar5 = FUN_0049b2c0(extraout_ECX,(int)((ulonglong)uVar4 >> 0x20),param_4,param_3,7,6,
                       (int)local_1c);
  FUN_0049bef0((int)local_38,(int)local_1c,local_8c);
  local_54[0] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  local_54[4] = 0;
  local_54[5] = 0;
  local_54[6] = 0;
  uVar3 = extraout_EDX;
  if ((int)uVar4 != 0) {
    uVar6 = FUN_0049b2c0(local_70,local_1c,(int)local_70,(int)local_1c,0xe,7,(int)local_70);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      FUN_0049b060(local_bc,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_bc,&DAT_004c8aa0);
    }
  }
  if ((int)uVar5 != 0) {
    uVar6 = FUN_0049b2c0(local_70,local_70,(int)local_70,(int)local_38,0xe,7,(int)local_70);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      FUN_0049b060(local_bc,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_bc,&DAT_004c8aa0);
    }
  }
  if (((int)uVar4 != 0) && ((int)uVar5 != 0)) {
    uVar2 = 0xe;
    do {
      piVar1 = local_8c + uVar2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x15);
  }
  uVar4 = FUN_0049b340(local_8c,uVar3,(int)local_8c,(int)(param_5 + 0xe),0x15,0xc,(int)local_8c);
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_bc,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_bc,&DAT_004c8aa0);
  }
  uVar4 = FUN_0049b340(local_8c,(int)((ulonglong)uVar4 >> 0x20),(int)local_8c,(int)param_5,0x15,0xe,
                       (int)local_8c);
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_bc,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_bc,&DAT_004c8aa0);
  }
  uVar2 = 0x13;
  do {
    if (local_8c[uVar2] != 0) {
      FUN_0049b060(local_bc,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x555);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_bc,&DAT_004c8aa0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x15);
  uVar4 = FUN_0049b2c0(local_8c,(int)((ulonglong)uVar4 >> 0x20),(int)(param_5 + 7),(int)local_8c,
                       0x13,0x13,(int)(param_5 + 7));
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_bc,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x559);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_bc,&DAT_004c8aa0);
  }
  return;
}


/* END FUNCTION 0x0049bf30 */

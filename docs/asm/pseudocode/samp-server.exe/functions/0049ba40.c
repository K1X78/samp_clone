/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049ba40
 * Name: FUN_0049ba40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0049ba40(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  int local_54 [3];
  undefined1 local_48 [12];
  int local_3c [3];
  undefined1 local_30 [48];
  
  FUN_0049b9f0(param_2,param_4,param_5);
  FUN_0049b9f0(param_1,param_3,param_5 + 6);
  uVar4 = FUN_0049b2c0(local_60,param_1,param_2,param_1,3,3,(int)local_60);
  uVar5 = FUN_0049b2c0(extraout_ECX,(int)((ulonglong)uVar4 >> 0x20),param_4,param_3,3,3,
                       (int)local_6c);
  FUN_0049b9f0((int)local_60,(int)local_6c,local_54);
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  uVar3 = extraout_EDX;
  if ((int)uVar4 != 0) {
    uVar6 = FUN_0049b2c0(local_48,local_6c,(int)local_48,(int)local_6c,6,3,(int)local_48);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_004c8aa0);
    }
  }
  if ((int)uVar5 != 0) {
    uVar6 = FUN_0049b2c0(local_48,local_48,(int)local_48,(int)local_60,6,3,(int)local_48);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_004c8aa0);
    }
  }
  if (((int)uVar4 != 0) && ((int)uVar5 != 0)) {
    uVar2 = 6;
    do {
      piVar1 = local_54 + uVar2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 9);
  }
  uVar4 = FUN_0049b340(local_54,uVar3,(int)local_54,(int)(param_5 + 6),9,6,(int)local_54);
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_004c8aa0);
  }
  uVar4 = FUN_0049b340(local_54,(int)((ulonglong)uVar4 >> 0x20),(int)local_54,(int)param_5,9,6,
                       (int)local_54);
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_004c8aa0);
  }
  uVar4 = FUN_0049b2c0(local_54,(int)((ulonglong)uVar4 >> 0x20),(int)(param_5 + 3),(int)local_54,9,9
                       ,(int)(param_5 + 3));
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_30,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x55e);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_004c8aa0);
  }
  return;
}


/* END FUNCTION 0x0049ba40 */

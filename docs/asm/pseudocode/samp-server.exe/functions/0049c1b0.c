/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049c1b0
 * Name: FUN_0049c1b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0049c1b0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_a8 [6];
  undefined1 local_90 [24];
  int local_78 [6];
  undefined1 local_60 [48];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_0049bf10(param_2,param_4,param_5);
  FUN_0049bf10(param_1,param_3,param_5 + 0xc);
  uVar4 = FUN_0049b2c0(local_30,param_1,param_2,param_1,6,6,(int)local_30);
  uVar5 = FUN_0049b2c0(extraout_ECX,(int)((ulonglong)uVar4 >> 0x20),param_4,param_3,6,6,
                       (int)local_18);
  FUN_0049bf10((int)local_30,(int)local_18,local_a8);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  uVar3 = extraout_EDX;
  if ((int)uVar4 != 0) {
    uVar6 = FUN_0049b2c0(local_90,local_18,(int)local_90,(int)local_18,0xc,6,(int)local_90);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      FUN_0049b060(local_60,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_60,&DAT_004c8aa0);
    }
  }
  if ((int)uVar5 != 0) {
    uVar6 = FUN_0049b2c0(local_90,local_90,(int)local_90,(int)local_30,0xc,6,(int)local_90);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      FUN_0049b060(local_60,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_60,&DAT_004c8aa0);
    }
  }
  if (((int)uVar4 != 0) && ((int)uVar5 != 0)) {
    uVar2 = 0xc;
    do {
      piVar1 = local_a8 + uVar2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x12);
  }
  uVar4 = FUN_0049b340(local_a8,uVar3,(int)local_a8,(int)(param_5 + 0xc),0x12,0xc,(int)local_a8);
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_60,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_60,&DAT_004c8aa0);
  }
  uVar4 = FUN_0049b340(local_a8,(int)((ulonglong)uVar4 >> 0x20),(int)local_a8,(int)param_5,0x12,0xc,
                       (int)local_a8);
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_60,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_60,&DAT_004c8aa0);
  }
  uVar4 = FUN_0049b2c0(local_a8,(int)((ulonglong)uVar4 >> 0x20),(int)(param_5 + 6),(int)local_a8,
                       0x12,0x12,(int)(param_5 + 6));
  if ((int)uVar4 != 0) {
    FUN_0049b060(local_60,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x55e);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_60,&DAT_004c8aa0);
  }
  return;
}


/* END FUNCTION 0x0049c1b0 */

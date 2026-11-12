/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049c420
 * Name: FUN_0049c420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0049c420(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_134 [48];
  int local_104 [13];
  undefined1 local_d0 [52];
  int local_9c [13];
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  FUN_0049c3e0(param_2,param_4,param_5);
  FUN_0049c400(param_1,param_3,param_5 + 0x1a);
  uVar3 = FUN_0049b2c0(local_34,param_1,param_2,param_1,0xd,0xc,(int)local_34);
  uVar4 = FUN_0049b2c0(extraout_ECX,(int)((ulonglong)uVar3 >> 0x20),param_4,param_3,0xd,0xc,
                       (int)local_68);
  FUN_0049c3e0((int)local_34,(int)local_68,local_104);
  local_9c[0] = 0;
  local_9c[1] = 0;
  local_9c[2] = 0;
  local_9c[3] = 0;
  local_9c[4] = 0;
  local_9c[5] = 0;
  local_9c[6] = 0;
  local_9c[7] = 0;
  local_9c[8] = 0;
  local_9c[9] = 0;
  local_9c[10] = 0;
  local_9c[0xb] = 0;
  local_9c[0xc] = 0;
  if ((int)uVar3 != 0) {
    uVar5 = FUN_0049b2c0(local_d0,local_d0,(int)local_d0,(int)local_68,0x1a,0xd,(int)local_d0);
    if ((int)uVar5 != 0) {
      FUN_0049b060(local_134,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_134,&DAT_004c8aa0);
    }
  }
  if ((int)uVar4 != 0) {
    uVar5 = FUN_0049b2c0(local_34,local_d0,(int)local_d0,(int)local_34,0x1a,0xd,(int)local_d0);
    if ((int)uVar5 != 0) {
      FUN_0049b060(local_134,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_134,&DAT_004c8aa0);
    }
  }
  if (((int)uVar3 != 0) && ((int)uVar4 != 0)) {
    uVar2 = 0x1a;
    do {
      piVar1 = local_104 + uVar2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x27);
  }
  uVar3 = FUN_0049b340(local_104,local_104,(int)local_104,(int)(param_5 + 0x1a),0x27,0x18,
                       (int)local_104);
  if ((int)uVar3 != 0) {
    FUN_0049b060(local_134,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_134,&DAT_004c8aa0);
  }
  uVar3 = FUN_0049b340(local_104,local_104,(int)local_104,(int)param_5,0x27,0x1a,(int)local_104);
  if ((int)uVar3 != 0) {
    FUN_0049b060(local_134,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_134,&DAT_004c8aa0);
  }
  uVar2 = 0x25;
  do {
    if (local_104[uVar2] != 0) {
      FUN_0049b060(local_134,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x555);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_134,&DAT_004c8aa0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x27);
  uVar3 = FUN_0049b2c0(0,local_104,(int)(param_5 + 0xd),(int)local_104,0x25,0x25,
                       (int)(param_5 + 0xd));
  if ((int)uVar3 != 0) {
    FUN_0049b060(local_134,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x559);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_134,&DAT_004c8aa0);
  }
  return;
}


/* END FUNCTION 0x0049c420 */

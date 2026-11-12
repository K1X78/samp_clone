/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005e0a0
 * Name: FUN_1005e0a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005e0a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_134 [48];
  int local_104 [13];
  undefined1 local_d0 [52];
  int local_9c [13];
  undefined1 local_68 [52];
  undefined1 local_34 [52];
  
  FUN_1005db40(param_2,param_4,param_5);
  FUN_1005db60(param_1,param_3,param_5 + 0x68);
  iVar2 = FUN_10058700(param_2,param_1,0xd,0xc,local_34);
  iVar3 = FUN_10058700(param_4,param_3,0xd,0xc,local_68);
  FUN_1005db40(local_34,local_68,local_104);
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
  if (iVar2 != 0) {
    iVar4 = FUN_10058700(local_d0,local_68,0x1a,0xd,local_d0);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_134,&DAT_101383ec);
    }
  }
  if (iVar3 != 0) {
    iVar4 = FUN_10058700(local_d0,local_34,0x1a,0xd,local_d0);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_134,&DAT_101383ec);
    }
  }
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar5 = 0x1a;
    do {
      piVar1 = local_104 + uVar5;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x27);
  }
  iVar2 = FUN_10058780(local_104,param_5 + 0x68,0x27,0x18,local_104);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_134,&DAT_101383ec);
  }
  iVar2 = FUN_10058780(local_104,param_5,0x27,0x1a,local_104);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_134,&DAT_101383ec);
  }
  uVar5 = 0x25;
  do {
    if (local_104[uVar5] != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x555);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_134,&DAT_101383ec);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x27);
  iVar2 = FUN_10058700(param_5 + 0x34,local_104,0x25,0x25,param_5 + 0x34);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x559);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_134,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005e0a0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005d1c0
 * Name: FUN_1005d1c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005d1c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_bc [48];
  int local_8c [7];
  undefined1 local_70 [28];
  int local_54 [7];
  undefined1 local_38 [28];
  undefined1 local_1c [28];
  
  FUN_1005ccd0(param_2,param_4,param_5);
  FUN_1005ccf0(param_1,param_3,param_5 + 0x38);
  iVar2 = FUN_10058700(param_2,param_1,7,6,local_38);
  iVar3 = FUN_10058700(param_4,param_3,7,6,local_1c);
  FUN_1005ccd0(local_38,local_1c,local_8c);
  local_54[0] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  local_54[4] = 0;
  local_54[5] = 0;
  local_54[6] = 0;
  if (iVar2 != 0) {
    iVar4 = FUN_10058700(local_70,local_1c,0xe,7,local_70);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_bc,&DAT_101383ec);
    }
  }
  if (iVar3 != 0) {
    iVar4 = FUN_10058700(local_70,local_38,0xe,7,local_70);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_bc,&DAT_101383ec);
    }
  }
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar5 = 0xe;
    do {
      piVar1 = local_8c + uVar5;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x15);
  }
  iVar2 = FUN_10058780(local_8c,param_5 + 0x38,0x15,0xc,local_8c);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_bc,&DAT_101383ec);
  }
  iVar2 = FUN_10058780(local_8c,param_5,0x15,0xe,local_8c);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_bc,&DAT_101383ec);
  }
  uVar5 = 0x13;
  do {
    if (local_8c[uVar5] != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x555);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_bc,&DAT_101383ec);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x15);
  iVar2 = FUN_10058700(param_5 + 0x1c,local_8c,0x13,0x13,param_5 + 0x1c);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x559);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_bc,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005d1c0 */

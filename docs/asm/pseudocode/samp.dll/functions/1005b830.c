/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005b830
 * Name: FUN_1005b830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005b830(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  int local_48 [2];
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [48];
  
  FUN_1005b000(param_2,param_4,param_5);
  FUN_1005a9c0(param_1,param_3,param_5 + 0x10);
  iVar2 = FUN_10058700(param_2,param_1,2,1,local_50);
  iVar3 = FUN_10058700(param_4,param_3,2,1,local_58);
  FUN_1005b000(local_50,local_58,local_48);
  local_38 = 0;
  local_34 = 0;
  if (iVar2 != 0) {
    iVar4 = FUN_10058700(local_40,local_58,4,2,local_40);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  if (iVar3 != 0) {
    iVar4 = FUN_10058700(local_40,local_50,4,2,local_40);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar5 = 4;
    do {
      piVar1 = local_48 + uVar5;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 6);
  }
  iVar2 = FUN_10058780(local_48,param_5 + 0x10,6,2,local_48);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  iVar2 = FUN_10058780(local_48,param_5,6,4,local_48);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  uVar5 = 4;
  do {
    if (local_48[uVar5] != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x555);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 6);
  iVar2 = FUN_10058700(param_5 + 8,local_48,4,4,param_5 + 8);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x559);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005b830 */

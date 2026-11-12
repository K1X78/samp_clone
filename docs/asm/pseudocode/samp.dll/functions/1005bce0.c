/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005bce0
 * Name: FUN_1005bce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005bce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  int local_54 [3];
  undefined1 local_48 [8];
  int aiStack_40 [4];
  undefined1 local_30 [48];
  
  FUN_1005ba50(param_2,param_4,param_5);
  FUN_1005b000(param_1,param_3,param_5 + 0x18);
  iVar2 = FUN_10058700(param_2,param_1,3,2,local_60);
  iVar3 = FUN_10058700(param_4,param_3,3,2,local_6c);
  FUN_1005ba50(local_60,local_6c,local_54);
  aiStack_40[1] = 0;
  aiStack_40[2] = 0;
  aiStack_40[3] = 0;
  if (iVar2 != 0) {
    iVar4 = FUN_10058700(local_48,local_6c,6,3,local_48);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  if (iVar3 != 0) {
    iVar4 = FUN_10058700(local_48,local_60,6,3,local_48);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar5 = 6;
    do {
      piVar1 = local_54 + uVar5;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 9);
  }
  iVar2 = FUN_10058780(local_54,param_5 + 0x18,9,4,local_54);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  iVar2 = FUN_10058780(local_54,param_5,9,6,local_54);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  uVar5 = 5;
  do {
    if (local_54[uVar5] != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x555);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 9);
  iVar2 = FUN_10058700(param_5 + 0xc,local_54,5,5,param_5 + 0xc);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x559);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005bce0 */

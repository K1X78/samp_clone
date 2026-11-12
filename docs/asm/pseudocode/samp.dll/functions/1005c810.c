/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005c810
 * Name: FUN_1005c810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005c810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  int local_60 [4];
  undefined1 local_50 [16];
  int local_40 [4];
  undefined1 local_30 [48];
  
  FUN_1005c340(param_2,param_4,param_5);
  FUN_1005ba50(param_1,param_3,param_5 + 0x20);
  iVar2 = FUN_10058700(param_2,param_1,4,3,local_70);
  iVar3 = FUN_10058700(param_4,param_3,4,3,local_80);
  FUN_1005c340(local_70,local_80,local_60);
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  if (iVar2 != 0) {
    iVar4 = FUN_10058700(local_50,local_80,8,4,local_50);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  if (iVar3 != 0) {
    iVar4 = FUN_10058700(local_50,local_70,8,4,local_50);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
  }
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar5 = 8;
    do {
      piVar1 = local_60 + uVar5;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0xc);
  }
  iVar2 = FUN_10058780(local_60,param_5 + 0x20,0xc,6,local_60);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  iVar2 = FUN_10058780(local_60,param_5,0xc,8,local_60);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  uVar5 = 10;
  do {
    if (local_60[uVar5] != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x555);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_101383ec);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xc);
  iVar2 = FUN_10058700(param_5 + 0x10,local_60,10,10,param_5 + 0x10);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x559);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005c810 */

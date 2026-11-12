/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005d8f0
 * Name: FUN_1005d8f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005d8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_a8 [6];
  undefined1 local_90 [24];
  int local_78 [6];
  undefined1 local_60 [48];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_1005ccf0(param_2,param_4,param_5);
  FUN_1005ccf0(param_1,param_3,param_5 + 0x30);
  iVar2 = FUN_10058700(param_2,param_1,6,6,local_30);
  iVar3 = FUN_10058700(param_4,param_3,6,6,local_18);
  FUN_1005ccf0(local_30,local_18,local_a8);
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  if (iVar2 != 0) {
    iVar4 = FUN_10058700(local_90,local_18,0xc,6,local_90);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_60,&DAT_101383ec);
    }
  }
  if (iVar3 != 0) {
    iVar4 = FUN_10058700(local_90,local_30,0xc,6,local_90);
    if (iVar4 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_60,&DAT_101383ec);
    }
  }
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar5 = 0xc;
    do {
      piVar1 = local_a8 + uVar5;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x12);
  }
  iVar2 = FUN_10058780(local_a8,param_5 + 0x30,0x12,0xc,local_a8);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_60,&DAT_101383ec);
  }
  iVar2 = FUN_10058780(local_a8,param_5,0x12,0xc,local_a8);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_60,&DAT_101383ec);
  }
  iVar2 = FUN_10058700(param_5 + 0x18,local_a8,0x12,0x12,param_5 + 0x18);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x55e);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_60,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005d8f0 */

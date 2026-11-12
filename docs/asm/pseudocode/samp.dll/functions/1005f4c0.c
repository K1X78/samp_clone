/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005f4c0
 * Name: FUN_1005f4c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005f4c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_420 [48];
  int local_3f0 [50];
  undefined1 local_328 [200];
  undefined4 local_260 [50];
  undefined1 local_198 [200];
  undefined1 local_d0 [204];
  
  FUN_1005f230(param_2,param_4,param_5);
  FUN_1005f230(param_1,param_3,param_5 + 400);
  iVar2 = FUN_10058700(param_2,param_1,0x32,0x32,local_d0);
  iVar3 = FUN_10058700(param_4,param_3,0x32,0x32,local_198);
  FUN_1005f230(local_d0,local_198,local_3f0);
  puVar6 = local_260;
  for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (iVar2 != 0) {
    iVar5 = FUN_10058700(local_328,local_198,100,0x32,local_328);
    if (iVar5 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_420,&DAT_101383ec);
    }
  }
  if (iVar3 != 0) {
    iVar5 = FUN_10058700(local_328,local_d0,100,0x32,local_328);
    if (iVar5 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_420,&DAT_101383ec);
    }
  }
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar4 = 100;
    while( true ) {
      piVar1 = local_3f0 + uVar4;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_3f0 + uVar4 + 1;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_3f0 + uVar4 + 2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_3f0 + uVar4 + 3;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_3f0 + uVar4 + 4;
      *piVar1 = *piVar1 + 1;
      if ((*piVar1 != 0) || (uVar4 = uVar4 + 5, 0x95 < uVar4)) break;
    }
  }
  iVar2 = FUN_10058780(local_3f0,param_5 + 400,0x96,100,local_3f0);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_420,&DAT_101383ec);
  }
  iVar2 = FUN_10058780(local_3f0,param_5,0x96,100,local_3f0);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_420,&DAT_101383ec);
  }
  iVar2 = FUN_10058700(param_5 + 200,local_3f0,0x96,0x96,param_5 + 200);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x55e);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_420,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005f4c0 */

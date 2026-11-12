/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005f250
 * Name: FUN_1005f250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005f250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_440 [48];
  int local_410 [51];
  undefined1 local_344 [204];
  undefined4 local_278 [47];
  int aiStack_1bc [5];
  undefined1 local_1a8 [208];
  undefined1 local_d8 [212];
  
  FUN_1005f210(param_2,param_4,param_5);
  FUN_1005f230(param_1,param_3,param_5 + 0x198);
  iVar2 = FUN_10058700(param_2,param_1,0x33,0x32,local_d8);
  iVar3 = FUN_10058700(param_4,param_3,0x33,0x32,local_1a8);
  FUN_1005f210(local_d8,local_1a8,local_410);
  puVar6 = local_278;
  for (iVar5 = 0x33; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (iVar2 != 0) {
    iVar5 = FUN_10058700(local_344,local_1a8,0x66,0x33,local_344);
    if (iVar5 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_440,&DAT_101383ec);
    }
  }
  if (iVar3 != 0) {
    iVar5 = FUN_10058700(local_344,local_d8,0x66,0x33,local_344);
    if (iVar5 != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_440,&DAT_101383ec);
    }
  }
  if ((iVar2 != 0) && (iVar3 != 0)) {
    uVar4 = 0x66;
    while( true ) {
      piVar1 = local_410 + uVar4;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_410 + uVar4 + 1;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_410 + uVar4 + 2;
      *piVar1 = *piVar1 + 1;
      if ((*piVar1 != 0) || (uVar4 = uVar4 + 3, 0x98 < uVar4)) break;
    }
  }
  iVar2 = FUN_10058780(local_410,param_5 + 0x198,0x99,100,local_410);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_440,&DAT_101383ec);
  }
  iVar2 = FUN_10058780(local_410,param_5,0x99,0x66,local_410);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_440,&DAT_101383ec);
  }
  uVar4 = 0x95;
  do {
    if (local_410[uVar4] != 0) {
      FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x555);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_440,&DAT_101383ec);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x99);
  iVar2 = FUN_10058700(param_5 + 0xcc,local_410,0x95,0x95,param_5 + 0xcc);
  if (iVar2 != 0) {
    FUN_10058290("c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x559);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_440,&DAT_101383ec);
  }
  return;
}


/* END FUNCTION 0x1005f250 */

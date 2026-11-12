/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049c9f0
 * Name: FUN_0049c9f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0049c9f0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_420 [48];
  int local_3f0 [50];
  undefined1 local_328 [200];
  undefined4 local_260 [50];
  undefined1 local_198 [200];
  undefined1 local_d0 [204];
  
  FUN_0049c9d0(param_2,param_4,param_5);
  FUN_0049c9d0(param_1,param_3,param_5 + 100);
  uVar6 = FUN_0049b2c0(param_1,extraout_EDX,param_2,param_1,0x32,0x32,(int)local_d0);
  uVar7 = FUN_0049b2c0(extraout_ECX,local_198,param_4,param_3,0x32,0x32,(int)local_198);
  FUN_0049c9d0((int)local_d0,(int)local_198,local_3f0);
  puVar5 = local_260;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar4 = extraout_EDX_00;
  if ((int)uVar6 != 0) {
    uVar8 = FUN_0049b2c0(local_328,local_198,(int)local_328,(int)local_198,100,0x32,(int)local_328);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      FUN_0049b060(local_420,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x533);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_420,&DAT_004c8aa0);
    }
  }
  if ((int)uVar7 != 0) {
    uVar8 = FUN_0049b2c0(local_328,local_328,(int)local_328,(int)local_d0,100,0x32,(int)local_328);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      FUN_0049b060(local_420,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x539);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_420,&DAT_004c8aa0);
    }
  }
  if (((int)uVar6 != 0) && ((int)uVar7 != 0)) {
    uVar2 = 100;
    while( true ) {
      piVar1 = local_3f0 + uVar2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_3f0 + uVar2 + 1;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_3f0 + uVar2 + 2;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_3f0 + uVar2 + 3;
      *piVar1 = *piVar1 + 1;
      if (*piVar1 != 0) break;
      piVar1 = local_3f0 + uVar2 + 4;
      *piVar1 = *piVar1 + 1;
      if ((*piVar1 != 0) || (uVar2 = uVar2 + 5, 0x95 < uVar2)) break;
    }
  }
  uVar6 = FUN_0049b340(local_3f0,uVar4,(int)local_3f0,(int)(param_5 + 100),0x96,100,(int)local_3f0);
  if ((int)uVar6 != 0) {
    FUN_0049b060(local_420,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x546);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_420,&DAT_004c8aa0);
  }
  uVar6 = FUN_0049b340(local_3f0,(int)((ulonglong)uVar6 >> 0x20),(int)local_3f0,(int)param_5,0x96,
                       100,(int)local_3f0);
  if ((int)uVar6 != 0) {
    FUN_0049b060(local_420,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x54a);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_420,&DAT_004c8aa0);
  }
  uVar6 = FUN_0049b2c0(local_3f0,(int)((ulonglong)uVar6 >> 0x20),(int)(param_5 + 0x32),
                       (int)local_3f0,0x96,0x96,(int)(param_5 + 0x32));
  if ((int)uVar6 != 0) {
    FUN_0049b060(local_420,"c:\\sampcvs\\main\\ttmath\\ttmathuint.h",0x55e);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_420,&DAT_004c8aa0);
  }
  return;
}


/* END FUNCTION 0x0049c9f0 */

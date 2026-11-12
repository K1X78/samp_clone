/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006be00
 * Name: FUN_1006be00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_1006be00(undefined4 *param_1,float param_2,undefined4 param_3,float *param_4,float param_5,
            int param_6,int param_7)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 unaff_EBX;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  float10 fVar8;
  int aiStack_a4 [10];
  undefined1 *puStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 *puStack_70;
  float fStack_6c;
  undefined4 local_4c [15];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011610b;
  local_c = ExceptionList;
  piVar5 = (int *)0x0;
  fStack_6c = 0.0;
  puStack_70 = (undefined4 *)0x100;
  uStack_74 = 0x100;
  iStack_78 = 0x1006be35;
  ExceptionList = &local_c;
  iVar2 = FUN_100b12d0();
  puStack_7c = (undefined1 *)0x1006be41;
  iStack_78 = iVar2;
  iVar3 = FUN_100b1320();
  if (param_2 == 7.9874e-43) {
    param_2 = 7.53899e-43;
  }
  else if (param_2 == 7.97339e-43) {
    param_2 = 7.52497e-43;
  }
  fStack_6c = 2.6573554e-29;
  pvVar4 = operator_new(0xb8);
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    fStack_6c = 0.0;
    puStack_70 = (undefined4 *)0x0;
    uStack_74 = 0x42480000;
    iStack_78 = 0;
    puStack_7c = (undefined1 *)0x0;
    aiStack_a4[8] = 0x1006be93;
    aiStack_a4[9] = (int)param_2;
    piVar5 = (int *)FUN_100b7f00();
  }
  local_4 = 0xffffffff;
  if (((iVar2 != 0) && (iVar3 != 0)) && (piVar5 != (int *)0x0)) {
    fStack_6c = 2.6573795e-29;
    FUN_1009f4c0();
    fStack_6c = 2.6573822e-29;
    FUN_1009f470();
    fStack_6c = 2.657384e-29;
    fVar8 = (float10)FUN_100b5ea0();
    fVar8 = ((float10)-1.0 - (fVar8 + fVar8)) * (float10)param_5;
    iVar3 = FUN_100b6ed0();
    if (iVar3 == 4) {
      fStack_6c = 2.657395e-29;
      fVar8 = (float10)FUN_100b5ea0();
      fVar8 = (float10)-5.5 - fVar8 * (float10)2.5;
    }
    param_2 = (float)fVar8;
    fStack_6c = param_2;
    puStack_70 = (undefined4 *)0x0;
    uStack_74 = 0x1006bf1c;
    FUN_1009ee80();
    if ((param_6 != -1) && (param_7 != -1)) {
      fStack_6c = (float)param_6;
      puStack_70 = (undefined4 *)0x1006bf37;
      FUN_100b6e20();
    }
    puVar6 = local_4c;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    fStack_6c = 2.6574222e-29;
    FUN_1009e950();
    pfVar1 = param_4;
    if (*param_4 != 0.0) {
      puStack_70 = local_4c;
      fStack_6c = 0.0;
      uStack_74 = 0x1006bf74;
      FUN_100b52d0();
    }
    if (pfVar1[1] != 0.0) {
      puStack_70 = local_4c;
      fStack_6c = 1.4013e-45;
      uStack_74 = 0x1006bf99;
      FUN_100b52d0();
    }
    if (pfVar1[2] != 0.0) {
      puStack_70 = local_4c;
      fStack_6c = 2.8026e-45;
      uStack_74 = 0x1006bfbe;
      FUN_100b52d0();
    }
    puVar6 = local_4c;
    piVar7 = aiStack_a4;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    FUN_1009fb40();
    puStack_70 = (undefined4 *)*param_1;
    uStack_74 = 0x1006bfea;
    fStack_6c = (float)iVar2;
    FUN_100b15b0();
    uStack_74 = *param_1;
    iStack_78 = 0x1006bff3;
    FUN_100b1840();
    aiStack_a4[9] = *param_1;
    iStack_78 = 3;
    puStack_7c = (undefined1 *)&param_3;
    aiStack_a4[8] = 0x1006c006;
    FUN_100b14f0();
    aiStack_a4[8] = *param_1;
    aiStack_a4[7] = 0x1006c00f;
    FUN_100b1520();
    aiStack_a4[7] = param_1[2];
    aiStack_a4[6] = 0x1006c018;
    FUN_100b17c0();
    aiStack_a4[6] = 1;
    aiStack_a4[5] = 6;
    aiStack_a4[4] = 0x1006c021;
    FUN_100c54f0();
    aiStack_a4[4] = 1;
    aiStack_a4[3] = 8;
    aiStack_a4[2] = 0x1006c02a;
    FUN_100c54f0();
    aiStack_a4[2] = 2;
    aiStack_a4[1] = 7;
    aiStack_a4[0] = 0x1006c033;
    FUN_100c54f0();
    aiStack_a4[0] = 0;
    FUN_100c54f0(0xe);
    (**(code **)(*piVar5 + 4))();
    DAT_102aca70 = 1;
    FUN_1009f960();
    DAT_102aca70 = 0;
    fStack_6c = 2.657507e-29;
    FUN_100b1550();
    fStack_6c = (float)param_1[2];
    puStack_70 = (undefined4 *)0x1006c073;
    FUN_100b1800();
    fStack_6c = 2.657513e-29;
    (**(code **)*piVar5)();
    ExceptionList = pvStack_10;
    return unaff_EBX;
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x1006be00 */

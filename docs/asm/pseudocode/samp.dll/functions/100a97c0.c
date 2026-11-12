/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a97c0
 * Name: FUN_100a97c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100a97c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,float param_6,float param_7,float param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 auStack_dc [9];
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 *puStack_a8;
  undefined4 *puStack_a4;
  undefined4 *puStack_a0;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [12];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40 [64];
  
  puStack_a0 = local_80;
  puStack_a4 = (undefined4 *)0x100a97d6;
  FUN_1009e950();
  if ((*(byte *)(param_1 + 0x1af) & 1) != 0) {
    puStack_a0 = (undefined4 *)0x100a97e9;
    FUN_100a7c20();
    local_48 = *(undefined4 *)(param_1 + 0x113);
    local_50 = *(undefined4 *)(param_1 + 0x10b);
    local_4c = *(undefined4 *)(param_1 + 0x10f);
    if (*(char *)(param_1 + 0x1b5) != '\0') {
      puStack_a0 = local_80;
      puStack_a4 = (undefined4 *)(param_1 + 0x167);
      puStack_a8 = (undefined4 *)0x100a9822;
      thunk_FUN_100b4e40();
    }
    puVar3 = local_80;
    puVar4 = auStack_dc;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_1009fb40();
  }
  puStack_a0 = (undefined4 *)0x100a9841;
  uVar1 = FUN_1002e2b0();
  *(undefined4 *)(param_1 + 0x15f) = uVar1;
  *(undefined4 *)(param_1 + 0x10b) = param_2;
  *(undefined4 *)(param_1 + 0x1b0) = param_5;
  *(byte *)(param_1 + 0x1af) = *(byte *)(param_1 + 0x1af) | 1;
  *(undefined4 *)(param_1 + 0x10f) = param_3;
  *(undefined4 *)(param_1 + 0x113) = param_4;
  if (((param_6 <= -999.0) || (param_7 <= -999.0)) || (param_8 <= -999.0)) {
    *(undefined1 *)(param_1 + 0x1b5) = 0;
  }
  else {
    puStack_a0 = &local_8c;
    puStack_a4 = &local_84;
    puStack_a8 = &local_88;
    *(undefined1 *)(param_1 + 0x1b5) = 1;
    iStack_ac = 0x100a98ed;
    FUN_1009f730();
    puStack_a0 = (undefined4 *)param_7;
    puStack_a4 = (undefined4 *)0x100a98fa;
    fVar5 = (float10)FUN_100b44e0();
    *(float *)(param_1 + 0x197) = (float)fVar5;
    puStack_a4 = (undefined4 *)param_6;
    puStack_a8 = (undefined4 *)0x100a990d;
    fVar5 = (float10)FUN_100b44e0();
    *(float *)(param_1 + 0x19b) = (float)fVar5;
    puStack_a8 = (undefined4 *)param_8;
    iStack_ac = 0x100a9920;
    fVar5 = (float10)FUN_100b44e0();
    *(float *)(param_1 + 0x19f) = (float)fVar5;
    puStack_a0 = *(undefined4 **)(param_1 + 0x197);
    puStack_a4 = (undefined4 *)local_88;
    puStack_a8 = (undefined4 *)0x100a993c;
    fVar5 = (float10)FUN_100a7bf0();
    *(float *)(param_1 + 0x1a3) = (float)fVar5;
    puStack_a0 = *(undefined4 **)(param_1 + 0x19b);
    puStack_a4 = (undefined4 *)local_84;
    puStack_a8 = (undefined4 *)0x100a9955;
    fVar5 = (float10)FUN_100a7bf0();
    *(float *)(param_1 + 0x1a7) = (float)fVar5;
    puStack_a0 = *(undefined4 **)(param_1 + 0x19f);
    puStack_a4 = (undefined4 *)local_8c;
    puStack_a8 = (undefined4 *)0x100a996e;
    fVar5 = (float10)FUN_100a7bf0();
    *(float *)(param_1 + 0x1ab) = (float)fVar5;
    puStack_a0 = (undefined4 *)param_8;
    puStack_a4 = (undefined4 *)param_7;
    puStack_a8 = (undefined4 *)param_6;
    iStack_ac = 0x100a997e;
    FUN_100a7fb0();
    puStack_a0 = (undefined4 *)local_40;
    puStack_a4 = (undefined4 *)0x100a998a;
    FUN_1009e950();
    puStack_a4 = (undefined4 *)local_40;
    puStack_a8 = (undefined4 *)0x100a999b;
    puStack_a0 = (undefined4 *)(param_1 + 0x187);
    FUN_100b4d50();
    iStack_ac = param_1 + 0xdb;
    iStack_b0 = 0x100a99ae;
    puStack_a8 = (undefined4 *)(param_1 + 0x167);
    FUN_100b4d50();
    iStack_b4 = 0x100a99b4;
    iStack_b0 = param_1 + 0x187;
    FUN_100b5040();
    uStack_b8 = 0x100a99ba;
    iStack_b4 = param_1 + 0x167;
    FUN_100b5040();
  }
  puStack_a0 = *(undefined4 **)(param_1 + 0x113);
  puStack_a4 = *(undefined4 **)(param_1 + 0x10f);
  puStack_a8 = *(undefined4 **)(param_1 + 0x10b);
  iStack_ac = 0x100a99e2;
  fVar5 = (float10)FUN_1009f0f0();
  *(float *)(param_1 + 0x15b) = (float)fVar5;
  if ((DAT_102aca24 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) != 0)) {
    puStack_a0 = (undefined4 *)0x100a9a06;
    FUN_10003650();
  }
  puStack_a0 = (undefined4 *)0x100a9a0d;
  FUN_1009f5c0();
  return;
}


/* END FUNCTION 0x100a97c0 */

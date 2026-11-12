/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014d80
 * Name: FUN_10014d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10014d80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 auStack_b0 [7];
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined4 *puStack_8c;
  undefined1 *puStack_88;
  int iStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  float local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 local_40 [4];
  float local_30;
  float local_2c;
  
  if (*(int *)(param_1 + 4) != 0) {
    puStack_74 = local_40;
    puStack_78 = (undefined4 *)0x10014d9d;
    FUN_1009e950();
    puStack_74 = (undefined4 *)local_60;
    puStack_78 = local_40;
    uStack_7c = 0x10014dac;
    FUN_100b4df0();
    uStack_7c = 0x3f400000;
    puStack_80 = local_60;
    iStack_84 = param_1 + 0x4e;
    puStack_88 = local_50;
    puStack_8c = (undefined4 *)0x10014dc4;
    FUN_100b4fc0();
    puStack_8c = local_40;
    puStack_90 = local_50;
    uStack_94 = 0x10014dd3;
    FUN_100b65c0();
    puVar2 = local_40;
    puVar3 = auStack_b0;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1009ea00();
    fVar4 = (float10)fpatan(-(float10)local_30,(float10)local_2c);
    local_64 = (float)(fVar4 * (float10)57.295776);
    if ((float10)0.0 <= fVar4 * (float10)57.295776) {
      if (360.0 <= local_64) {
        local_64 = local_64 - 360.0;
      }
    }
    else {
      local_64 = local_64 + 360.0;
    }
    puStack_74 = (undefined4 *)local_64;
    puStack_78 = (undefined4 *)0x10014e42;
    FUN_100abb30();
  }
  return;
}


/* END FUNCTION 0x10014d80 */

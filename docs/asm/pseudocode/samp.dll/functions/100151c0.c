/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100151c0
 * Name: FUN_100151c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100151c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_b8 [6];
  undefined4 uStack_a0;
  undefined1 *puStack_9c;
  undefined4 *puStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  int iStack_8c;
  undefined1 *puStack_88;
  float local_84;
  undefined4 *local_80;
  float *local_7c;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined4 local_40 [16];
  
  local_6c = 0.0;
  local_68 = 0.0;
  local_64 = 0.0;
  if (*(int *)(param_1 + 8) != 0) {
    if (DAT_1013c4a0 != 0) {
      local_7c = &local_6c;
      local_80 = (undefined4 *)0x10015202;
      FUN_1009ec70();
      if (local_6c <= 0.02) {
        if (local_6c < -0.02) {
          local_6c = -0.02;
        }
      }
      else {
        local_6c = 0.02;
      }
      if (local_68 <= 0.02) {
        if (local_68 < -0.02) {
          local_68 = -0.02;
        }
      }
      else {
        local_68 = 0.02;
      }
      if (local_64 <= 0.02) {
        if (local_64 < -0.02) {
          local_64 = -0.02;
        }
      }
      else {
        local_64 = 0.02;
      }
      local_84 = local_6c;
      local_80 = (undefined4 *)local_68;
      local_7c = (float *)local_64;
      puStack_88 = (undefined1 *)0x100152bf;
      FUN_1009eca0();
    }
    local_7c = (float *)local_40;
    local_80 = (undefined4 *)0x100152cc;
    FUN_1009e950();
    local_7c = (float *)local_50;
    local_80 = local_40;
    local_84 = 2.5504594e-29;
    FUN_100b4d50();
    local_84 = 0.75;
    puStack_88 = local_50;
    iStack_8c = param_1 + 0x19c;
    puStack_90 = local_60;
    puStack_94 = (undefined1 *)0x100152f6;
    FUN_100b4fc0();
    puStack_94 = local_60;
    puStack_98 = (undefined4 *)0x10015300;
    FUN_100b5040();
    puStack_98 = local_40;
    puStack_9c = local_60;
    uStack_a0 = 0x1001530f;
    thunk_FUN_100b4e40();
    puVar2 = local_40;
    puVar3 = auStack_b8;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1009ea00();
  }
  return;
}


/* END FUNCTION 0x100151c0 */

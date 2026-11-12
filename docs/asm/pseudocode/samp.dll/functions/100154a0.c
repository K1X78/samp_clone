/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100154a0
 * Name: FUN_100154a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100154a0(int param_1,undefined1 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_1009c310(*param_2,*(undefined1 *)(*(int *)(param_1 + 4) + 0x2b0));
    local_3c = *(undefined4 *)(param_2 + 1);
    local_38 = *(undefined4 *)(param_2 + 5);
    local_34 = *(undefined4 *)(param_2 + 9);
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_30 = local_3c;
    local_2c = local_38;
    local_28 = local_34;
    FUN_100b6440(&local_3c,&local_48);
    local_c = local_48;
    local_24 = *(undefined4 *)(param_2 + 0xd);
    local_8 = local_44;
    local_20 = *(undefined4 *)(param_2 + 0x11);
    local_4 = local_40;
    local_1c = *(undefined4 *)(param_2 + 0x15);
    local_18 = local_24;
    local_14 = local_20;
    local_10 = local_1c;
    FUN_100ab850(&local_30);
    FUN_100ad550(*(undefined4 *)(param_2 + 0x19));
    FUN_1009c280(*(undefined1 *)(*(int *)(param_1 + 4) + 0x2b0),
                 (float)(param_2[0x1d] & 0x3f) * 0.015873017,
                 (float)(byte)param_2[0x1e] * 0.003921569);
    iVar1 = FUN_100abd60();
    bVar2 = (byte)param_2[0x1d] >> 6;
    if (bVar2 == 3) {
      *(undefined4 *)(iVar1 + 4) = 2;
      return;
    }
    if (bVar2 != 2) {
      *(uint *)(iVar1 + 8) = (uint)((byte)param_2[0x1d] >> 6);
      return;
    }
    if (*(uint *)(iVar1 + 8) < 2) {
      *(undefined4 *)(iVar1 + 8) = 2;
    }
  }
  return;
}


/* END FUNCTION 0x100154a0 */

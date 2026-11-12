/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10052fb0
 * Name: FUN_10052fb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10052fb0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  local_8 = (undefined1)((uint)uVar2 >> 0x18);
  local_7 = (undefined1)((uint)uVar2 >> 0x10);
  local_5 = (undefined1)uVar2;
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  local_6 = (undefined1)((uint)uVar2 >> 8);
  local_4 = (undefined1)((uint)uVar3 >> 0x18);
  local_3 = (undefined1)((uint)uVar3 >> 0x10);
  local_2 = (undefined1)((uint)uVar3 >> 8);
  local_1 = (undefined1)uVar3;
  FUN_10052e00(&DAT_10117954,1);
  uVar5 = *(uint *)(param_1 + 0x18);
  while ((uVar5 & 0x1f8) != 0x1c0) {
    FUN_10052e00(&DAT_1011b3b0,1);
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  FUN_10052e00(&local_8,8);
  uVar5 = 0;
  do {
    bVar4 = (byte)uVar5;
    uVar1 = uVar5 & 0xfffffffc;
    uVar5 = uVar5 + 1;
    *(char *)(param_1 + 0x5f + uVar5) =
         (char)(*(uint *)(param_1 + 4 + uVar1) >> (('\x03' - (bVar4 & 3)) * '\b' & 0x1f));
  } while (uVar5 < 0x14);
  puVar7 = (undefined4 *)(param_1 + 0x20);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_100511e0((undefined4 *)(param_1 + 4),(undefined4 *)(param_1 + 0x20));
  return;
}


/* END FUNCTION 0x10052fb0 */

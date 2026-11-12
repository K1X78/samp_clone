/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1c90
 * Name: FUN_100f1c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100f1c90(byte *param_1)

{
  byte *in_EAX;
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 == in_EAX) {
    return 0;
  }
  if (4 < (uint)((int)param_1 - (int)in_EAX)) {
    uVar1 = FUN_100f1c10();
    return uVar1;
  }
  if ((char)*in_EAX < '\0') {
    uVar3 = 0xffffffff;
  }
  do {
    uVar3 = uVar3 << 8 | (uint)*in_EAX;
    in_EAX = in_EAX + 1;
  } while (in_EAX < param_1);
  if (((int)uVar3 < 0) || (puVar2 = &DAT_10117a39, 9 < (int)uVar3)) {
    puVar2 = &DAT_1012a538;
  }
  uVar1 = FUN_100cd220("%s%lx",puVar2,uVar3);
  return uVar1;
}


/* END FUNCTION 0x100f1c90 */

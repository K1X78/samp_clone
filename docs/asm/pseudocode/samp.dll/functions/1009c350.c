/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009c350
 * Name: FUN_1009c350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009c350(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10182288;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_101822b8;
  for (iVar1 = 0x9d8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_10181e68;
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x4040404;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0x404;
  puVar2 = &DAT_10184d90;
  for (iVar1 = 0x906; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x4479c000;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_10184a48;
  for (iVar1 = 0xd2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x3eaaaa9f;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_10181f40;
  for (iVar1 = 0xd2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x3f800000;
    puVar2 = puVar2 + 1;
  }
  return;
}


/* END FUNCTION 0x1009c350 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415610
 * Name: FUN_00415610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00415610(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *extraout_EDX;
  undefined4 *puVar3;
  
  uVar1 = FUN_0040e2b0();
  puVar3 = extraout_EDX;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *extraout_EDX = &DAT_004b3098;
  return;
}


/* END FUNCTION 0x00415610 */

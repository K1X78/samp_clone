/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100623f0
 * Name: FUN_100623f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100623f0(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  puVar2 = &LAB_100623e0;
  uVar1 = FUN_101111e0("user32.dll","ShowCursor");
  DAT_1016c368 = FUN_10110960(uVar1,puVar2);
  return;
}


/* END FUNCTION 0x100623f0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1190
 * Name: FUN_100a1190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100a1190(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_102ac9b8 == 1) {
    uVar1 = (*(code *)0x7f9d50)();
    return uVar1;
  }
  if (DAT_102ac9b8 == 2) {
    uVar1 = (*(code *)0x7f9d90)(0);
  }
  return uVar1;
}


/* END FUNCTION 0x100a1190 */

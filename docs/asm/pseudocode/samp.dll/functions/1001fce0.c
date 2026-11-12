/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001fce0
 * Name: FUN_1001fce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001fce0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      FUN_1001fca0(*(undefined1 *)(uVar1 + param_1));
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}


/* END FUNCTION 0x1001fce0 */

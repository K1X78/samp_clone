/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c2680
 * Name: FUN_100c2680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c2680(undefined4 param_1)

{
  uint unaff_EBX;
  uint uVar1;
  
  uVar1 = 0;
  if (unaff_EBX != 0) {
    do {
      FUN_100c2640(param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < unaff_EBX);
  }
  return;
}


/* END FUNCTION 0x100c2680 */

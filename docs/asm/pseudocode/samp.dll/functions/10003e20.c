/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003e20
 * Name: FUN_10003e20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10003e20(void)

{
  uint uVar1;
  
  uVar1 = FUN_100a6f70(**(undefined2 **)(*(int *)(DAT_102aca24 + 0x3de) + 8));
  return uVar1 >> 8 | 0xff000000;
}


/* END FUNCTION 0x10003e20 */

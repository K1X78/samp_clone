/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c6a00
 * Name: FUN_100c6a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c6a00(void)

{
  int iVar1;
  
  iVar1 = FUN_10065890("fontweight");
  if (iVar1 == 0) {
    return 700;
  }
  return (-(uint)(iVar1 != 1) & 300) + 400;
}


/* END FUNCTION 0x100c6a00 */

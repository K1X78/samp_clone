/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fa985
 * Name: ___onexitinit
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 ___onexitinit(void)

{
  DAT_102ae6b4 = _malloc(0x80);
  if (DAT_102ae6b4 == (undefined4 *)0x0) {
    return 0x18;
  }
  *DAT_102ae6b4 = 0;
  DAT_102ae6b0 = DAT_102ae6b4;
  return 0;
}


/* END FUNCTION 0x100fa985 */

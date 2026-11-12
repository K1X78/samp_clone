/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004cbb0
 * Name: FUN_1004cbb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 FUN_1004cbb0(byte param_1,byte param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return (&DAT_1013c910)
           [((uint)(byte)(&DAT_1013c810)[param_1] + (uint)(byte)(&DAT_1013c810)[param_2]) % 0xff];
  }
  return 0;
}


/* END FUNCTION 0x1004cbb0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009c490
 * Name: FUN_1009c490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009c490(int param_1,int param_2,ushort param_3)

{
  if ((param_2 < 0xb) && (param_1 < 0xd2)) {
    (&DAT_10184d90)[param_1 * 0xb + param_2] = (float)param_3;
  }
  return;
}


/* END FUNCTION 0x1009c490 */

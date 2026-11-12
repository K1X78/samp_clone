/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6090
 * Name: FUN_100b6090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 FUN_100b6090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_102abe5c = *DAT_10155408;
  *DAT_10155408 = &DAT_102aae18;
  DAT_102abe60 = (*DAT_10155404)(param_1,param_2,param_3);
  *DAT_10155408 = DAT_102abe5c;
  return DAT_102abe60;
}


/* END FUNCTION 0x100b6090 */

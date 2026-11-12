/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100654e0
 * Name: FUN_100654e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100654e0(undefined4 param_1)

{
  if (DAT_1016c3ac == 0) {
    DAT_1014079c = (DAT_1014079c ^ 0x3d3e7) << 0xd | (DAT_1014079c ^ 0xc107ffff) >> 0x13;
    DAT_1016c3a8 = DAT_10140798 * DAT_1014079c;
    DAT_1016c3ac = 1;
  }
  return param_1;
}


/* END FUNCTION 0x100654e0 */

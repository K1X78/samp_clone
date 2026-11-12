/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5880
 * Name: FUN_100d5880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d5880(int param_1,uint param_2)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x78) & param_2) != 0)) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100d5880 */

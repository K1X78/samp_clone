/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de890
 * Name: FUN_100de890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100de890(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 != 0) {
    uVar1 = FUN_100de830();
    return uVar1;
  }
  return 0;
}


/* END FUNCTION 0x100de890 */

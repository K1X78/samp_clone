/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022300
 * Name: FUN_10022300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10022300(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10021720(param_1,&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  FUN_100217c0(uVar1);
  return uVar1;
}


/* END FUNCTION 0x10022300 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003c820
 * Name: FUN_1003c820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1003c820(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003ac00(param_1,&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  FUN_1003ae40(uVar1);
  return uVar1;
}


/* END FUNCTION 0x1003c820 */

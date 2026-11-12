/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004b320
 * Name: FUN_1004b320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1004b320(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1004acc0(param_1,&param_1);
  if ((char)param_1 == '\0') {
    return 0;
  }
  FUN_1004aed0(uVar1);
  return uVar1;
}


/* END FUNCTION 0x1004b320 */

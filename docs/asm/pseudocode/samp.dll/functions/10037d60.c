/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037d60
 * Name: FUN_10037d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10037d60(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_10033230(param_2);
  if (cVar1 != '\0') {
    return 0xffffffff;
  }
  cVar1 = FUN_100331a0(param_2);
  return (uint)(cVar1 == '\0');
}


/* END FUNCTION 0x10037d60 */

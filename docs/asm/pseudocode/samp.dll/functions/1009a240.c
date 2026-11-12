/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009a240
 * Name: FUN_1009a240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009a240(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_10086cf0(0x12,4);
  uVar2 = FUN_10099ab0(param_1);
  cVar1 = FUN_1008a250(uVar2,0);
  if (cVar1 == '\0') {
    FUN_1008a120(uVar2,param_1);
  }
  return;
}


/* END FUNCTION 0x1009a240 */

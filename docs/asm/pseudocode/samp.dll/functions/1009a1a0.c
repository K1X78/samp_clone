/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009a1a0
 * Name: FUN_1009a1a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009a1a0(undefined4 param_1)

{
  char cVar1;
  undefined1 local_34 [52];
  
  FUN_10086cf0(0x10,4);
  FUN_1007bc80(local_34,0x32,&DAT_1011c6d4,param_1);
  cVar1 = FUN_1008a250(local_34,0);
  if (cVar1 == '\0') {
    FUN_1008a120(local_34,param_1);
  }
  return;
}


/* END FUNCTION 0x1009a1a0 */

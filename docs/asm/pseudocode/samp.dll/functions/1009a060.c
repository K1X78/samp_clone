/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009a060
 * Name: FUN_1009a060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009a060(uint param_1,int param_2)

{
  char cVar1;
  undefined1 local_34 [52];
  
  FUN_10086cf0(9,4);
  FUN_1007bc80(local_34,0x32,"%d by %d",param_1,param_2);
  cVar1 = FUN_1008a250(local_34,0);
  if (cVar1 == '\0') {
    FUN_1008a120(local_34,param_2 << 0x10 | param_1 & 0xffff);
  }
  return;
}


/* END FUNCTION 0x1009a060 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c2320
 * Name: FUN_100c2320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c2320(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int in_EAX;
  
  while (in_EAX != 0) {
    in_EAX = in_EAX + -1;
    FUN_100c2130(param_3 >> ((byte)in_EAX & 0x1f) & 1);
  }
  return;
}


/* END FUNCTION 0x100c2320 */

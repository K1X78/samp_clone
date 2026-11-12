/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c110
 * Name: FUN_0048c110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048c110(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int in_EAX;
  
  while (in_EAX != 0) {
    in_EAX = in_EAX + -1;
    FUN_0048bf20(param_3 >> ((byte)in_EAX & 0x1f) & 1);
  }
  return;
}


/* END FUNCTION 0x0048c110 */

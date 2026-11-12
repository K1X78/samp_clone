/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c150
 * Name: FUN_0048c150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048c150(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int in_EAX;
  undefined4 local_4;
  
  local_4 = in_EAX;
  if (0 < in_EAX) {
    do {
      FUN_0048bf20(param_3 & 1);
      param_3 = param_3 >> 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}


/* END FUNCTION 0x0048c150 */

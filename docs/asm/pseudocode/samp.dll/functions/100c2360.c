/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c2360
 * Name: FUN_100c2360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c2360(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int in_EAX;
  undefined4 local_4;
  
  local_4 = in_EAX;
  if (0 < in_EAX) {
    do {
      FUN_100c2130(param_3 & 1);
      param_3 = param_3 >> 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}


/* END FUNCTION 0x100c2360 */

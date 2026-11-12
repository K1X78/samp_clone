/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111c90
 * Name: FUN_10111c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10111c90(int param_1,int param_2,int param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_10111d30();
  FUN_10111d70();
  if (param_2 == 0) {
    local_c = param_1 + 0x14;
  }
  else {
    local_c = param_2;
  }
  *(int *)(param_1 + 8) = local_c;
  if (param_3 == 0) {
    local_10 = param_1 + 0x10;
  }
  else {
    local_10 = param_3;
  }
  *(int *)(param_1 + 0xc) = local_10;
  **(undefined4 **)(param_1 + 8) = 0;
  **(undefined4 **)(param_1 + 0xc) = 0;
  return param_1;
}


/* END FUNCTION 0x10111c90 */

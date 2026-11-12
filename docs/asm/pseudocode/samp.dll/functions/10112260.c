/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10112260
 * Name: FUN_10112260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10112260(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_14;
  code *local_10;
  undefined4 local_c;
  code *local_8;
  
  if ((*(byte *)(param_4 + 1) & 0x38) == 0) {
    local_14 = 0x66f7;
    local_10 = FUN_10111df0;
    FUN_10111df0(&local_14,param_3,param_4);
  }
  else {
    local_c = 0x52f7;
    local_8 = FUN_10111df0;
    FUN_10111df0(&local_c,param_3,param_4,param_1);
  }
  return;
}


/* END FUNCTION 0x10112260 */

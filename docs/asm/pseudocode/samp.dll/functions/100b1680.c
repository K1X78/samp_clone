/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b1680
 * Name: FUN_100b1680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b1680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_102ac9b8 == 1) {
    local_c = (code *)0x7ee2a0;
    local_8 = (code *)0x7ee1d0;
  }
  else {
    local_c = (code *)0x7ee2e0;
    local_8 = (code *)0x7ee210;
  }
  (*local_c)(param_1,param_2);
  (*local_8)(param_1,param_3);
  return;
}


/* END FUNCTION 0x100b1680 */

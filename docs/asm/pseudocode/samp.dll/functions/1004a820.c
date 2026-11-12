/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004a820
 * Name: FUN_1004a820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004a820(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  undefined4 local_4;
  
  cVar1 = FUN_10033480();
  if (cVar1 != '\0') {
    local_4 = param_1;
    FUN_1001faa0(&local_4,0x20,1);
    local_4 = CONCAT22(param_2._2_2_,(undefined2)param_2);
    FUN_1001faa0(&local_4,0x10,1);
  }
  param_1 = CONCAT22(param_3,param_2._2_2_);
  FUN_1001faa0(&param_1,0x10,1);
  return;
}


/* END FUNCTION 0x1004a820 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001b840
 * Name: FUN_1001b840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001b840(undefined4 *param_1)

{
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113a9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(&local_128,0x20,1);
  FUN_1001f470(&local_130,0x20,1);
  FUN_1001f470(&local_134,0x20,1);
  FUN_1001f470(&local_12c,0x20,1);
  FUN_1001f470(local_124,0x20,1);
  FUN_100b1f10("H\tfffii",(double)local_128,(double)local_130,(double)local_134,local_12c,
               (double)local_124[0]);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1001b840 */

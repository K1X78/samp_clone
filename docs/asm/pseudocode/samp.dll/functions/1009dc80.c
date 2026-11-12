/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009dc80
 * Name: FUN_1009dc80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 FUN_1009dc80(undefined4 *param_1)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  float fStack_2c;
  
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = 0xc2c80000;
  FUN_100b3710(param_1,&local_40,local_34,&param_1,1,0,0,1,1,1,0,0);
  return (float10)fStack_2c;
}


/* END FUNCTION 0x1009dc80 */

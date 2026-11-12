/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000a0a0
 * Name: FUN_1000a0a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1000a0a0(float *param_1,float *param_2,float *param_3)

{
  char cVar1;
  uint local_10;
  float local_c;
  float local_8;
  float local_4;
  
  cVar1 = FUN_1001f470(&local_c,0x20,1);
  if (cVar1 != '\0') {
    if (local_c <= 1e-05) {
      *param_1 = 0.0;
      *param_2 = 0.0;
      *param_3 = 0.0;
      return 1;
    }
    cVar1 = FUN_1001f470(&local_10,0x10,1);
    if (cVar1 != '\0') {
      local_10 = local_10 & 0xffff;
      local_8 = (float)local_10 * 3.0518044e-05 - 1.0;
    }
    cVar1 = FUN_1001f470(&local_10,0x10,1);
    if (cVar1 != '\0') {
      local_10 = local_10 & 0xffff;
      local_4 = (float)local_10 * 3.0518044e-05 - 1.0;
    }
    cVar1 = FUN_1001f470(&local_10,0x10,1);
    if (cVar1 != '\0') {
      *param_1 = local_8;
      *param_2 = local_4;
      *param_3 = (float)(local_10 & 0xffff) * 3.0518044e-05 - 1.0;
      *param_1 = local_c * *param_1;
      *param_2 = local_c * *param_2;
      *param_3 = local_c * *param_3;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x1000a0a0 */

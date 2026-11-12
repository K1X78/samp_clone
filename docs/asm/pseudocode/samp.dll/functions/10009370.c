/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009370
 * Name: FUN_10009370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 FUN_10009370(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  char cVar2;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  uint local_c;
  ushort local_8 [2];
  ushort local_4 [2];
  
  FUN_10008110(&local_d);
  FUN_10008110(&local_10);
  FUN_10008110(&local_f);
  FUN_10008110(&local_e);
  FUN_1001f470(&local_c,0x10,1);
  FUN_1001f470(local_8,0x10,1);
  cVar2 = FUN_1001f470(local_4,0x10,1);
  if (cVar2 == '\0') {
    return 0;
  }
  *param_2 = (float)(local_c & 0xffff) * 1.5259022e-05;
  *param_3 = (float)local_8[0] * 1.5259022e-05;
  *param_4 = (float)local_4[0] * 1.5259022e-05;
  if (local_10 != '\0') {
    *param_2 = -*param_2;
  }
  if (local_f != '\0') {
    *param_3 = -*param_3;
  }
  if (local_e != '\0') {
    *param_4 = -*param_4;
  }
  fVar1 = ((1.0 - *param_2 * *param_2) - *param_3 * *param_3) - *param_4 * *param_4;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  *param_1 = SQRT(fVar1);
  if (local_d != '\0') {
    *param_1 = -SQRT(fVar1);
    return 1;
  }
  return 1;
}


/* END FUNCTION 0x10009370 */

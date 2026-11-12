/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093f10
 * Name: FUN_10093f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10093f10(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_2 <= *(float *)(param_1 + 0x138)) {
    fVar1 = *(float *)(param_1 + 0x138);
  }
  else {
    fVar1 = *param_2;
  }
  *param_2 = fVar1;
  if (param_2[1] <= *(float *)(param_1 + 0x13c)) {
    fVar2 = *(float *)(param_1 + 0x13c);
  }
  else {
    fVar2 = param_2[1];
  }
  param_2[1] = fVar2;
  if (param_2[2] <= *(float *)(param_1 + 0x140)) {
    fVar3 = *(float *)(param_1 + 0x140);
  }
  else {
    fVar3 = param_2[2];
  }
  param_2[2] = fVar3;
  if (*(float *)(param_1 + 0x144) <= fVar1) {
    fVar1 = *(float *)(param_1 + 0x144);
  }
  *param_2 = fVar1;
  if (*(float *)(param_1 + 0x148) <= fVar2) {
    fVar2 = *(float *)(param_1 + 0x148);
  }
  param_2[1] = fVar2;
  if (*(float *)(param_1 + 0x14c) <= fVar3) {
    param_2[2] = *(float *)(param_1 + 0x14c);
    return;
  }
  param_2[2] = fVar3;
  return;
}


/* END FUNCTION 0x10093f10 */

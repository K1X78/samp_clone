/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093cd0
 * Name: FUN_10093cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10093cd0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_ESI;
  float local_18;
  float local_14;
  float local_10;
  float fStack_4;
  
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0.0;
  if (*(char *)(param_1 + 0x135) != '\0') {
    if ((*(byte *)(param_1 + 0x86) & 1) != 0) {
      local_10 = 1.0;
    }
    if ((*(byte *)(param_1 + 0x87) & 1) != 0) {
      local_10 = local_10 - 1.0;
    }
    if (*(char *)(param_1 + 0x136) != '\0') {
      if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
        local_14 = 1.0;
      }
      if ((*(byte *)(param_1 + 0x89) & 1) != 0) {
        local_14 = local_14 - 1.0;
      }
    }
    if ((*(byte *)(param_1 + 0x85) & 1) != 0) {
      local_18 = 1.0;
    }
    if ((*(byte *)(param_1 + 0x84) & 1) != 0) {
      local_18 = local_18 - 1.0;
    }
  }
  D3DXVec3Normalize(&local_18);
  fVar2 = *(float *)(param_1 + 0x130);
  fVar3 = (float)&local_18 * fVar2;
  fVar4 = unaff_ESI * fVar2;
  fVar2 = fVar2 * local_18;
  if (*(char *)(param_1 + 0xff) != '\0') {
    if (0.0 < fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) {
      *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x110);
      fVar1 = 1.0 / *(float *)(param_1 + 0x110);
      *(float *)(param_1 + 0xf3) = fVar3;
      *(float *)(param_1 + 0xf7) = fVar4;
      *(float *)(param_1 + 0xfb) = fVar2;
      *(float *)(param_1 + 0x100) = fVar3 * fVar1;
      *(float *)(param_1 + 0x104) = fVar4 * fVar1;
      *(float *)(param_1 + 0x108) = fVar1 * fVar2;
      return;
    }
    if (0.0 < *(float *)(param_1 + 0x10c)) {
      *(float *)(param_1 + 0xf3) =
           *(float *)(param_1 + 0xf3) - fStack_4 * *(float *)(param_1 + 0x100);
      *(float *)(param_1 + 0xf7) =
           *(float *)(param_1 + 0xf7) - fStack_4 * *(float *)(param_1 + 0x104);
      *(float *)(param_1 + 0xfb) =
           *(float *)(param_1 + 0xfb) - fStack_4 * *(float *)(param_1 + 0x108);
      *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) - fStack_4;
      return;
    }
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0xf3) = fVar3;
  *(float *)(param_1 + 0xf7) = fVar4;
  *(float *)(param_1 + 0xfb) = fVar2;
  return;
}


/* END FUNCTION 0x10093cd0 */

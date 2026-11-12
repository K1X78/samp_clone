/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085f40
 * Name: FUN_10085f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10085f40(int param_1,int param_2)

{
  uint uVar1;
  float10 fVar2;
  
  uVar1 = *(uint *)(param_1 + param_2 * 4);
  fVar2 = (float10)FUN_100fc750();
  fVar2 = (float10)1.0 - fVar2;
  *(float *)(param_1 + 0x18) =
       (float)(((float10)((float)(uVar1 >> 0x10 & 0xff) * 0.003921569) -
               (float10)*(float *)(param_1 + 0x18)) * fVar2 + (float10)*(float *)(param_1 + 0x18));
  *(float *)(param_1 + 0x1c) =
       (float)(((float10)((float)(uVar1 >> 8 & 0xff) * 0.003921569) -
               (float10)*(float *)(param_1 + 0x1c)) * fVar2 + (float10)*(float *)(param_1 + 0x1c));
  *(float *)(param_1 + 0x20) =
       (float)(((float10)((float)(uVar1 & 0xff) * 0.003921569) - (float10)*(float *)(param_1 + 0x20)
               ) * fVar2 + (float10)*(float *)(param_1 + 0x20));
  *(float *)(param_1 + 0x24) =
       (float)(((float10)((float)(uVar1 >> 0x18) * 0.003921569) -
               (float10)*(float *)(param_1 + 0x24)) * fVar2 + (float10)*(float *)(param_1 + 0x24));
  return;
}


/* END FUNCTION 0x10085f40 */

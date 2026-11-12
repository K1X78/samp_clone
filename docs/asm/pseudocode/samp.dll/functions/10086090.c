/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086090
 * Name: FUN_10086090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10086090(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  *(float *)(param_1 + 0x34) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x38) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x3c) = (float)(uVar1 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x40) = (float)(uVar1 >> 0x18) * 0.003921569;
  uVar1 = *(uint *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x5c) = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x60) = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
  *(float *)(param_1 + 100) = (float)(uVar1 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x68) = (float)(uVar1 >> 0x18) * 0.003921569;
  return;
}


/* END FUNCTION 0x10086090 */

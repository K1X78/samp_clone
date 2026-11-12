/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009c4c0
 * Name: FUN_1009c4c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009c4c0(int param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = DAT_101419b4;
  if (param_1 < 0xb) {
    *(float *)(&DAT_10184a1c + param_1 * 4) = (float)param_2;
    *(float *)(iVar1 + 0x114 + param_1 * 4) = (float)param_2;
  }
  return;
}


/* END FUNCTION 0x1009c4c0 */

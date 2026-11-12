/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001fca0
 * Name: FUN_1001fca0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1001fca0(short *param_1,byte param_2)

{
  param_2 = (byte)((ushort)*param_1 >> 8) ^ param_2;
  *param_1 = ((ushort)param_2 + *param_1) * param_1[1] + param_1[2];
  *(uint *)(param_1 + 3) = *(int *)(param_1 + 3) + (uint)param_2;
  return;
}


/* END FUNCTION 0x1001fca0 */

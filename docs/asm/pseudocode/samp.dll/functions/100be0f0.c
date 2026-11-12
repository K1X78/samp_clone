/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100be0f0
 * Name: FUN_100be0f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100be0f0(int *param_1)

{
  _memmove((void *)param_1[0xd],(void *)(*param_1 - param_1[0x10]),
           (param_1[3] - param_1[1]) + param_1[0x10]);
  *param_1 = param_1[0xd] + param_1[0x10];
  return;
}


/* END FUNCTION 0x100be0f0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048a920
 * Name: FUN_0048a920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048a920(int *param_1)

{
  _memmove((void *)param_1[0xd],(void *)(*param_1 - param_1[0x10]),
           (param_1[3] - param_1[1]) + param_1[0x10]);
  *param_1 = param_1[0xd] + param_1[0x10];
  return;
}


/* END FUNCTION 0x0048a920 */

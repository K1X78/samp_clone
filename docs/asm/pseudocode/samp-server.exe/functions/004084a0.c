/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004084a0
 * Name: FUN_004084a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_004084a0(byte *param_1,byte *param_2,int param_3)

{
  while (0 < param_3) {
    if ((*param_1 == 0) || ((&DAT_004b28c8)[*param_1] != (&DAT_004b28c8)[*param_2])) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  if (param_3 + -1 < 0) {
    return 0;
  }
  return (uint)(byte)(&DAT_004b28c8)[*param_1] - (uint)(byte)(&DAT_004b28c8)[*param_2];
}


/* END FUNCTION 0x004084a0 */

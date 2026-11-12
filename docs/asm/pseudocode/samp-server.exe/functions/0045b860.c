/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b860
 * Name: FUN_0045b860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0045b860(ushort *param_1,ushort *param_2)

{
  if (*param_1 < *param_2) {
    return 0xffffffff;
  }
  return (uint)(*param_1 != *param_2);
}


/* END FUNCTION 0x0045b860 */

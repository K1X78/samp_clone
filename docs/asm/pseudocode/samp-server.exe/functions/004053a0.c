/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004053a0
 * Name: FUN_004053a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004053a0(LPCSTR param_1)

{
  DAT_004ed070 = '\0';
  GetEnvironmentVariableA(param_1,&DAT_004ed070,0x104);
  return -(uint)(DAT_004ed070 != '\0') & 0x4ed070;
}


/* END FUNCTION 0x004053a0 */

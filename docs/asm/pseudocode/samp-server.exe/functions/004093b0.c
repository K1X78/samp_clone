/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004093b0
 * Name: FUN_004093b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


LPSTR __cdecl FUN_004093b0(LPCSTR param_1)

{
  LPWSTR _Memory;
  LPSTR pCVar1;
  
  _Memory = FUN_004092d0(param_1);
  if (_Memory == (LPWSTR)0x0) {
    return (LPSTR)0x0;
  }
  pCVar1 = FUN_00409270();
  _free(_Memory);
  return pCVar1;
}


/* END FUNCTION 0x004093b0 */

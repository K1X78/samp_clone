/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004093e0
 * Name: FUN_004093e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


LPSTR FUN_004093e0(void)

{
  LPWSTR _Memory;
  LPSTR pCVar1;
  
  _Memory = FUN_00409210();
  if (_Memory == (LPWSTR)0x0) {
    return (LPSTR)0x0;
  }
  pCVar1 = FUN_00409340(_Memory);
  _free(_Memory);
  return pCVar1;
}


/* END FUNCTION 0x004093e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004056c0
 * Name: FUN_004056c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_004056c0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _fclose(*(FILE **)(param_2 + 4));
  return (bool)('\x01' - (iVar1 != 0));
}


/* END FUNCTION 0x004056c0 */

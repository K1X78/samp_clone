/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00493380
 * Name: FUN_00493380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char __cdecl FUN_00493380(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  cVar1 = **(char **)(param_1 + 0x10);
  if (cVar1 == '(') {
    cVar1 = (*(char **)(param_1 + 0x10))[5];
  }
  return cVar1;
}


/* END FUNCTION 0x00493380 */

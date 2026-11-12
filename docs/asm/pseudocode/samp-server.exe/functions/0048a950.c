/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048a950
 * Name: FUN_0048a950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __cdecl FUN_0048a950(int *param_1)

{
  if (*(char *)((int)param_1 + 0x1f) != '\0') {
    return false;
  }
  return (bool)('\x01' - ((uint)param_1[0x11] < (uint)((param_1[0xf] + param_1[0xd]) - *param_1)));
}


/* END FUNCTION 0x0048a950 */

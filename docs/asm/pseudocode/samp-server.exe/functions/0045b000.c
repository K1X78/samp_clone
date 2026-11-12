/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b000
 * Name: FUN_0045b000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0045b000(uint *param_1,int *param_2)

{
  if (*param_1 < *(uint *)(*param_2 + 0x18)) {
    return 0xffffffff;
  }
  return (uint)(*param_1 != *(uint *)(*param_2 + 0x18));
}


/* END FUNCTION 0x0045b000 */

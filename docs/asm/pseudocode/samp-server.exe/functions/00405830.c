/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405830
 * Name: FUN_00405830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00405830(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar1 = FUN_00405120(1);
    return iVar1;
  }
  _putc(*(int *)(param_2 + 8),*(FILE **)(param_2 + 4));
  return param_2;
}


/* END FUNCTION 0x00405830 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408f50
 * Name: FUN_00408f50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00408f50(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    param_1 = param_1 >> 7 | param_2 << 0x19;
    param_2 = param_2 >> 7;
    iVar1 = iVar1 + 1;
    if (param_1 == 0 && param_2 == 0) {
      return;
    }
  } while (iVar1 < 9);
  return;
}


/* END FUNCTION 0x00408f50 */

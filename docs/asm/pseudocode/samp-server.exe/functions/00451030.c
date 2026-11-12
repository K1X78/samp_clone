/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451030
 * Name: FUN_00451030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00451030(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + uVar2 * 4);
    *(int *)(param_1 + uVar2 * 4) = iVar1 + -1;
    if (iVar1 != 0) {
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}


/* END FUNCTION 0x00451030 */

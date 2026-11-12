/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408130
 * Name: FUN_00408130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00408130(int param_1)

{
  int iVar1;
  int extraout_ECX;
  undefined4 *extraout_EDX;
  
  iVar1 = FUN_00408070(param_1);
  if (iVar1 != 0) {
    *extraout_EDX = *(undefined4 *)(extraout_ECX + 0xf4);
    *(undefined4 **)(extraout_ECX + 0xf4) = extraout_EDX;
    *(int *)(extraout_ECX + 0xec) = *(int *)(extraout_ECX + 0xec) + -1;
    return;
  }
  FUN_004080d0((int)extraout_EDX);
  return;
}


/* END FUNCTION 0x00408130 */

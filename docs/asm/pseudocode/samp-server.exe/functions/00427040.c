/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00427040
 * Name: FUN_00427040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00427040(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040d5c0();
  if ((iVar1 == 0) &&
     ((*(char *)(param_1 + 4) == '\0' ||
      ((-1 < *(int *)(param_1 + 0x4c) &&
       ((0 < *(int *)(param_1 + 0x4c) || (*(int *)(param_1 + 0x48) != 0)))))))) {
    FUN_00426f60();
  }
  return;
}


/* END FUNCTION 0x00427040 */

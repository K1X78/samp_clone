/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423100
 * Name: FUN_00423100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00423100(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_00418b70();
    if (iVar1 == 0) {
      uVar2 = FUN_0041d7c0();
      return uVar2;
    }
    if (*(char *)(param_1 + 0x1e) == '\0') {
      return *(uint *)(param_1 + 0x18) & *(uint *)(param_1 + 0x14);
    }
  }
  return 7;
}


/* END FUNCTION 0x00423100 */

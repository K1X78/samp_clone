/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423800
 * Name: FUN_00423800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00423800(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    if (*(char *)(param_1 + 8) != '\0') {
      iVar1 = FUN_0041f130(0,*(uint *)(param_1 + 0x84));
      return iVar1;
    }
    iVar1 = FUN_0041f130((uint)*(byte *)(param_1 + 10),*(uint *)(param_1 + 0x84));
  }
  return iVar1;
}


/* END FUNCTION 0x00423800 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004161c0
 * Name: FUN_004161c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004161c0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    if ((param_2 == 0) || ((*(ushort *)(param_2 + 2) & 0x2000) != 0)) {
      return 0;
    }
    if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
      iVar1 = FUN_0040ece0(param_1);
    }
    else {
      iVar1 = FUN_0041a910(param_1,*(int *)(param_2 + 0x10));
    }
    if ((iVar1 != 0) || (iVar1 = FUN_004161c0(param_1,*(int *)(param_2 + 0xc)), iVar1 != 0)) break;
    param_2 = *(int *)(param_2 + 8);
  }
  return 1;
}


/* END FUNCTION 0x004161c0 */

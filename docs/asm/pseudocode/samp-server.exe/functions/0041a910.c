/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a910
 * Name: FUN_0041a910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0041a910(int param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    iVar1 = FUN_0040ece0(param_1);
    if ((((iVar1 != 0) || (iVar1 = FUN_00420930(param_1,*(short **)(param_2 + 8)), iVar1 != 0)) ||
        (iVar1 = FUN_004161c0(param_1,*(int *)(param_2 + 0xc)), iVar1 != 0)) ||
       (iVar1 = FUN_004161c0(param_1,*(int *)(param_2 + 0x14)), iVar1 != 0)) break;
    param_2 = *(int *)(param_2 + 0x1c);
  }
  return 1;
}


/* END FUNCTION 0x0041a910 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481990
 * Name: FUN_00481990
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00481990(undefined4 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = *(int *)(param_2 + 4) - 1;
  if ((uVar1 < DAT_004fc408) && (piVar2 = *(int **)(DAT_004fc404 + uVar1 * 4), piVar2 != (int *)0x0)
     ) {
    if (piVar2[4] != *piVar2 + -1) {
      piVar2[4] = piVar2[4] + 1;
      return 1;
    }
  }
  else if (DAT_004fc464 != 0) {
    FUN_00491fa0("[Error] db_next_row(): invalid result handle %u");
  }
  return 0;
}


/* END FUNCTION 0x00481990 */

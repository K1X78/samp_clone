/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00481950
 * Name: FUN_00481950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00481950(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(int *)(param_2 + 4) - 1;
  if ((uVar1 < DAT_004fc408) &&
     (puVar2 = *(undefined4 **)(DAT_004fc404 + uVar1 * 4), puVar2 != (undefined4 *)0x0)) {
    return *puVar2;
  }
  if (DAT_004fc464 != 0) {
    FUN_00491fa0("[Error] db_num_rows(): invalid result handle %u");
  }
  return 0;
}


/* END FUNCTION 0x00481950 */

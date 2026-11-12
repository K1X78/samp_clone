/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004819e0
 * Name: FUN_004819e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004819e0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)(param_2 + 4) - 1;
  if ((uVar1 < DAT_004fc408) && (iVar2 = *(int *)(DAT_004fc404 + uVar1 * 4), iVar2 != 0)) {
    return *(undefined4 *)(iVar2 + 4);
  }
  if (DAT_004fc464 != 0) {
    FUN_00491fa0("[Error] db_num_fields(): invalid result handle %u");
  }
  return 0;
}


/* END FUNCTION 0x004819e0 */

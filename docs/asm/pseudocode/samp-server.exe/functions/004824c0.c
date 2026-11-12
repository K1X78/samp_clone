/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004824c0
 * Name: FUN_004824c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004824c0(undefined4 param_1,int param_2)

{
  uint uVar1;
  void *_Memory;
  
  uVar1 = *(int *)(param_2 + 4) - 1;
  if ((uVar1 < DAT_004fc408) &&
     (_Memory = *(void **)(DAT_004fc404 + uVar1 * 4), _Memory != (void *)0x0)) {
    if (*(int *)((int)_Memory + 8) != 0) {
      FUN_00410150(*(int *)((int)_Memory + 8));
    }
    if (*(int *)((int)_Memory + 0xc) != 0) {
      FUN_004080d0(*(int *)((int)_Memory + 0xc));
    }
    FUN_00482160(&DAT_004fc404,uVar1);
    _free(_Memory);
    return 1;
  }
  if (DAT_004fc464 != 0) {
    FUN_00491fa0("[Error] db_free_result(): invalid result handle %u");
  }
  return 0;
}


/* END FUNCTION 0x004824c0 */

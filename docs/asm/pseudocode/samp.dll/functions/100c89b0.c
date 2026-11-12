/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c89b0
 * Name: FUN_100c89b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100c89b0(int param_1)

{
  int iVar1;
  uint unaff_EBX;
  
  if (DAT_102acad0 != 0) {
    DAT_102acad0 = DAT_102acad0 + 1;
    return 0;
  }
  if (param_1 != 0) {
    PTR__malloc_101554b8 = _malloc;
    PTR__free_101554bc = _free;
    PTR__realloc_101554c0 = _realloc;
    PTR___strdup_101554c4 = __strdup;
    PTR__calloc_101554c8 = _calloc;
  }
  DAT_102acad0 = DAT_102acad0 + 1;
  iVar1 = FUN_100ce7d0();
  if (iVar1 != 0) {
    if (((unaff_EBX & 2) != 0) && (iVar1 = FUN_100c8960(), iVar1 != 0)) {
      return 2;
    }
    iVar1 = FUN_100cddf0();
    if (iVar1 == 0) {
      if ((unaff_EBX & 4) != 0) {
        DAT_102acc08 = 1;
      }
      _DAT_102acad4 = unaff_EBX;
      FUN_100cd710();
      return 0;
    }
  }
  return 2;
}


/* END FUNCTION 0x100c89b0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c8b20
 * Name: FUN_100c8b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100c8b20(void)

{
  int iVar1;
  uint local_4;
  
  if (DAT_102acad0 != 0) {
LAB_100c8b90:
    iVar1 = FUN_100d0660(&local_4);
    return ~-(uint)(iVar1 != 0) & local_4;
  }
  DAT_102acad0 = 1;
  PTR__malloc_101554b8 = _malloc;
  PTR__free_101554bc = _free;
  PTR__realloc_101554c0 = _realloc;
  PTR___strdup_101554c4 = __strdup;
  PTR__calloc_101554c8 = _calloc;
  iVar1 = FUN_100ce7d0();
  if (iVar1 != 0) {
    iVar1 = FUN_100c8960();
    if (iVar1 == 0) {
      iVar1 = FUN_100cddf0();
      if (iVar1 == 0) {
        _DAT_102acad4 = 3;
        FUN_100cd710();
        goto LAB_100c8b90;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100c8b20 */

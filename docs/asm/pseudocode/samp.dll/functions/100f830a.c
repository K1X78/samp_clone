/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f830a
 * Name: FUN_100f830a
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f830a(void)

{
  undefined **local_14 [3];
  char *local_8;
  
  if ((_DAT_102acd34 & 1) == 0) {
    _DAT_102acd34 = _DAT_102acd34 | 1;
    local_8 = "bad allocation";
    exception(&local_8);
    _DAT_102acd28 = &PTR_FUN_1012cf54;
    _atexit((_func_4879 *)&LAB_10116bea);
  }
  exception(&DAT_102acd28);
  local_14[0] = &PTR_FUN_1012cf54;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_101392fc);
}


/* END FUNCTION 0x100f830a */

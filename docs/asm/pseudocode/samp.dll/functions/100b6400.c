/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6400
 * Name: FUN_100b6400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_100b6400(undefined4 *param_1,byte param_2)

{
  if ((*(char *)((int)param_1 + 0xd) != '\0') && ((void *)*param_1 != (void *)0x0)) {
    _free((void *)*param_1);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}


/* END FUNCTION 0x100b6400 */

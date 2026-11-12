/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100faf6a
 * Name: _type_info
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __fastcall _type_info(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  __lock(0xe);
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
  }
  FUN_100fafa7();
  return;
}


/* END FUNCTION 0x100faf6a */

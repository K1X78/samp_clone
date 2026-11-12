/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9fb0
 * Name: _eh_vector_constructor_iterator_
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void _eh_vector_constructor_iterator_
               (undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)();
  }
  FUN_100f9ffa();
  return;
}


/* END FUNCTION 0x100f9fb0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9f50
 * Name: _eh_vector_destructor_iterator_
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void _eh_vector_destructor_iterator_
               (undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)();
  }
  FUN_100f9f98();
  return;
}


/* END FUNCTION 0x100f9f50 */

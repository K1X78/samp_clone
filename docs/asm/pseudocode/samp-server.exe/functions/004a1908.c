/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a1908
 * Name: _eh_vector_constructor_iterator_
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void _eh_vector_constructor_iterator_
               (undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*(code *)param_4)();
  }
  FUN_004a1952();
  return;
}


/* END FUNCTION 0x004a1908 */

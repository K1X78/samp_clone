/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049fa47
 * Name: FID_conflict__getc
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

uint __cdecl FID_conflict__getc(FILE *param_1)

{
  int *piVar1;
  uint uVar2;
  
  __lock_file(param_1);
  piVar1 = &param_1->_cnt;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = __filbuf(param_1);
  }
  else {
    uVar2 = (uint)(byte)*param_1->_ptr;
    param_1->_ptr = param_1->_ptr + 1;
  }
  FUN_0049fa8f();
  return uVar2;
}


/* END FUNCTION 0x0049fa47 */

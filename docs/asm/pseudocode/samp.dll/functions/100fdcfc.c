/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fdcfc
 * Name: _strerror
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl _strerror(char *_ErrMsg)

{
  _ptiddata p_Var1;
  char *pcVar2;
  char *pcVar3;
  
  p_Var1 = __getptd();
  if (p_Var1->_errmsg == (char *)0x0) {
    pcVar2 = _malloc(0x86);
    p_Var1->_errmsg = pcVar2;
    if (pcVar2 == (char *)0x0) {
      pcVar2 = &DAT_102acda0;
      goto LAB_100fdd26;
    }
  }
  pcVar2 = p_Var1->_errmsg;
LAB_100fdd26:
  pcVar3 = DAT_10155930;
  if ((-1 < (int)_ErrMsg) && ((int)_ErrMsg < (int)DAT_10155930)) {
    pcVar3 = _ErrMsg;
  }
  FUN_10103c90(pcVar2,(&PTR_s_No_error_10155880)[(int)pcVar3]);
  return pcVar2;
}


/* END FUNCTION 0x100fdcfc */

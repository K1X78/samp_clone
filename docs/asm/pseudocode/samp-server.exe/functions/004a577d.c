/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a577d
 * Name: __getptd
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata p_Var1;
  int iVar2;
  DWORD DVar3;
  
  dwErrCode = GetLastError();
  p_Var1 = (_ptiddata)(*DAT_0051c3b0)(DAT_004ec4d4);
  if (p_Var1 == (_ptiddata)0x0) {
    p_Var1 = _calloc(1,0x8c);
    if (p_Var1 != (_ptiddata)0x0) {
      iVar2 = (*DAT_0051c3b4)(DAT_004ec4d4,p_Var1);
      if (iVar2 != 0) {
        p_Var1->_initaddr = &DAT_004ec7c0;
        p_Var1->_holdrand = 1;
        DVar3 = GetCurrentThreadId();
        p_Var1->_thandle = 0xffffffff;
        p_Var1->_tid = DVar3;
        goto LAB_004a57e2;
      }
    }
    __amsg_exit(0x10);
  }
LAB_004a57e2:
  SetLastError(dwErrCode);
  return p_Var1;
}


/* END FUNCTION 0x004a577d */

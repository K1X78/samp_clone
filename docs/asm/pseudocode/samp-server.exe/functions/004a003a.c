/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a003a
 * Name: _tmpfile
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _tmpfile
   
   Library: Visual Studio 2003 Release */

FILE * __cdecl _tmpfile(void)

{
  int iVar1;
  FILE *pFVar2;
  int *piVar3;
  char *pcVar4;
  FILE *local_28;
  
  local_28 = (FILE *)0x0;
  iVar1 = __mtinitlocknum(2);
  if (iVar1 == 0) {
    return (FILE *)0x0;
  }
  __lock(2);
  if (DAT_0051c1d0 == '\0') {
    init_namebuf(1);
  }
  else {
    iVar1 = genfname((uchar *)&DAT_0051c1d0);
    if (iVar1 != 0) goto LAB_004a0129;
  }
  pFVar2 = __getstream();
  if (pFVar2 == (FILE *)0x0) {
    piVar3 = FUN_004a5f9b();
    *piVar3 = 0x18;
  }
  else {
    while (iVar1 = __sopen(&DAT_0051c1d0,0x8542,0x40,0x180), iVar1 == -1) {
      piVar3 = FUN_004a5f9b();
      if ((*piVar3 != 0x11) || (iVar1 = genfname((uchar *)&DAT_0051c1d0), iVar1 != 0))
      goto LAB_004a0129;
    }
    pcVar4 = __strdup(&DAT_0051c1d0);
    pFVar2->_tmpfname = pcVar4;
    if (pcVar4 == (char *)0x0) {
      __close(iVar1);
    }
    else {
      pFVar2->_cnt = 0;
      pFVar2->_ptr = (char *)0x0;
      pFVar2->_base = (char *)0x0;
      pFVar2->_flag = DAT_0051c3c0 | 0x80;
      pFVar2->_file = iVar1;
      local_28 = pFVar2;
    }
  }
LAB_004a0129:
  FUN_004a013e();
  return local_28;
}


/* END FUNCTION 0x004a003a */

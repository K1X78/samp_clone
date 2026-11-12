/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10103861
 * Name: __getstream
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

FILE * __cdecl __getstream(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  FILE *pFVar4;
  FILE *_File;
  
  pFVar4 = (FILE *)0x0;
  __lock(1);
  iVar3 = 0;
  do {
    _File = pFVar4;
    if (DAT_102ae6a0 <= iVar3) {
LAB_10103950:
      if (_File != (FILE *)0x0) {
        _File->_cnt = 0;
        _File->_flag = 0;
        _File->_base = (char *)0x0;
        _File->_ptr = (char *)0x0;
        _File->_tmpfname = (char *)0x0;
        _File->_file = -1;
      }
      FUN_1010397a();
      return _File;
    }
    iVar1 = *(int *)(DAT_102ad690 + iVar3 * 4);
    if (iVar1 == 0) {
      iVar3 = iVar3 * 4;
      pvVar2 = _malloc(0x38);
      *(void **)(iVar3 + DAT_102ad690) = pvVar2;
      if (*(int *)(iVar3 + DAT_102ad690) != 0) {
        iVar1 = ___crtInitCritSecAndSpinCount(*(int *)(iVar3 + DAT_102ad690) + 0x20,4000);
        if (iVar1 == 0) {
          _free(*(void **)(iVar3 + DAT_102ad690));
          *(undefined4 *)(iVar3 + DAT_102ad690) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_102ad690) + 0x20));
          _File = *(FILE **)(iVar3 + DAT_102ad690);
        }
      }
      goto LAB_10103950;
    }
    if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
      if (((2 < iVar3) && (iVar3 < 0x14)) && (iVar1 = __mtinitlocknum(iVar3 + 0x10), iVar1 == 0))
      goto LAB_10103950;
      __lock_file2(iVar3,*(void **)(DAT_102ad690 + iVar3 * 4));
      _File = *(FILE **)(DAT_102ad690 + iVar3 * 4);
      if ((_File->_flag & 0x83) == 0) goto LAB_10103950;
      __unlock_file2(iVar3,_File);
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


/* END FUNCTION 0x10103861 */

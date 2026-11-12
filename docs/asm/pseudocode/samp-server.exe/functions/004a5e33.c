/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a5e33
 * Name: __openfile
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint _OpenFlag;
  uint uVar6;
  
  cVar1 = *_Mode;
  bVar4 = false;
  bVar3 = false;
  if (cVar1 == 'a') {
    _OpenFlag = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      _OpenFlag = 0;
      uVar6 = DAT_0051c3c0 | 1;
      goto LAB_004a5e74;
    }
    if (cVar1 != 'w') {
      return (FILE *)0x0;
    }
    _OpenFlag = 0x301;
  }
  uVar6 = DAT_0051c3c0 | 2;
LAB_004a5e74:
  bVar2 = true;
LAB_004a5f53:
  _Mode = _Mode + 1;
  cVar1 = *_Mode;
  if ((cVar1 == '\0') || (!bVar2)) {
    iVar5 = __sopen(_Filename,_OpenFlag,_ShFlag,0x1a4);
    if (iVar5 < 0) {
      return (FILE *)0x0;
    }
    _DAT_0051c1bc = _DAT_0051c1bc + 1;
    _File->_flag = uVar6;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = iVar5;
    return _File;
  }
  if (cVar1 < 'U') {
    if (cVar1 == 'T') {
      if ((_OpenFlag & 0x1000) == 0) {
        _OpenFlag = _OpenFlag | 0x1000;
        goto LAB_004a5f53;
      }
    }
    else if (cVar1 == '+') {
      if ((_OpenFlag & 2) == 0) {
        _OpenFlag = _OpenFlag & 0xfffffffe | 2;
        uVar6 = uVar6 & 0xfffffffc | 0x80;
        goto LAB_004a5f53;
      }
    }
    else if (cVar1 == 'D') {
      if ((_OpenFlag & 0x40) == 0) {
        _OpenFlag = _OpenFlag | 0x40;
        goto LAB_004a5f53;
      }
    }
    else if (cVar1 == 'R') {
      if (!bVar3) {
        bVar3 = true;
        _OpenFlag = _OpenFlag | 0x10;
        goto LAB_004a5f53;
      }
    }
    else if ((cVar1 == 'S') && (!bVar3)) {
      bVar3 = true;
      _OpenFlag = _OpenFlag | 0x20;
      goto LAB_004a5f53;
    }
  }
  else {
    if (cVar1 == 'b') {
      if ((_OpenFlag & 0xc000) != 0) goto LAB_004a5f35;
      _OpenFlag = _OpenFlag | 0x8000;
      goto LAB_004a5f53;
    }
    if (cVar1 == 'c') {
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 | 0x4000;
        goto LAB_004a5f53;
      }
    }
    else {
      if (cVar1 != 'n') {
        if ((cVar1 != 't') || ((_OpenFlag & 0xc000) != 0)) goto LAB_004a5f35;
        _OpenFlag = _OpenFlag | 0x4000;
        goto LAB_004a5f53;
      }
      if (!bVar4) {
        bVar4 = true;
        uVar6 = uVar6 & 0xffffbfff;
        goto LAB_004a5f53;
      }
    }
  }
LAB_004a5f35:
  bVar2 = false;
  goto LAB_004a5f53;
}


/* END FUNCTION 0x004a5e33 */

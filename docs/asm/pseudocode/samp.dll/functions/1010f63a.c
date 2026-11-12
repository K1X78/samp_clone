/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010f63a
 * Name: _raise
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  void *local_34;
  void *local_30;
  _ptiddata local_28;
  
  bVar1 = false;
  if (_SigNum == 2) {
    puVar3 = &DAT_102ad29c;
    pcVar4 = DAT_102ad29c;
LAB_1010f6c7:
    bVar1 = true;
  }
  else {
    if (((_SigNum != 4) && (_SigNum != 8)) && (_SigNum != 0xb)) {
      if (_SigNum == 0xf) {
        puVar3 = &DAT_102ad2a8;
        pcVar4 = DAT_102ad2a8;
      }
      else if (_SigNum == 0x15) {
        puVar3 = &DAT_102ad2a0;
        pcVar4 = DAT_102ad2a0;
      }
      else {
        if (_SigNum != 0x16) {
          return -1;
        }
        puVar3 = &DAT_102ad2a4;
        pcVar4 = DAT_102ad2a4;
      }
      goto LAB_1010f6c7;
    }
    local_28 = __getptd();
    iVar2 = siglookup();
    puVar3 = (undefined4 *)(iVar2 + 8);
    pcVar4 = (code *)*puVar3;
  }
  if (pcVar4 == (code *)0x1) {
    return 0;
  }
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = local_28->_initarg;
    local_28->_initarg = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = local_28->_pxcptacttab;
      local_28->_pxcptacttab = (void *)0x8c;
      goto LAB_1010f726;
    }
  }
  else {
LAB_1010f726:
    iVar2 = DAT_10155f80;
    if (_SigNum == 8) {
      for (; iVar2 < DAT_10155f84 + DAT_10155f80; iVar2 = iVar2 + 1) {
        *(undefined4 *)((int)local_28->_initaddr + iVar2 * 0xc + 8) = 0;
      }
      goto LAB_1010f754;
    }
  }
  *puVar3 = 0;
LAB_1010f754:
  FUN_1010f775();
  if (_SigNum == 8) {
    (*pcVar4)(8,local_28->_pxcptacttab);
  }
  else {
    (*pcVar4)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  local_28->_initarg = local_30;
  if (_SigNum == 8) {
    local_28->_pxcptacttab = local_34;
  }
  return 0;
}


/* END FUNCTION 0x1010f63a */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004afd16
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
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  code *pcVar5;
  void *local_34;
  void *local_30;
  _ptiddata local_28;
  
  bVar1 = false;
  if (_SigNum == 2) {
    puVar4 = &DAT_0051c6b0;
    pcVar5 = DAT_0051c6b0;
LAB_004afda3:
    bVar1 = true;
  }
  else {
    if (((_SigNum != 4) && (_SigNum != 8)) && (_SigNum != 0xb)) {
      if (_SigNum == 0xf) {
        puVar4 = &DAT_0051c6bc;
        pcVar5 = DAT_0051c6bc;
      }
      else if (_SigNum == 0x15) {
        puVar4 = &DAT_0051c6b4;
        pcVar5 = DAT_0051c6b4;
      }
      else {
        if (_SigNum != 0x16) {
          return -1;
        }
        puVar4 = &DAT_0051c6b8;
        pcVar5 = DAT_0051c6b8;
      }
      goto LAB_004afda3;
    }
    local_28 = __getptd();
    uVar2 = siglookup(extraout_ECX,(uint)local_28->_initaddr);
    puVar4 = (undefined4 *)(uVar2 + 8);
    pcVar5 = (code *)*puVar4;
  }
  if (pcVar5 == (code *)0x1) {
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
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
      goto LAB_004afe02;
    }
  }
  else {
LAB_004afe02:
    iVar3 = DAT_004ec838;
    if (_SigNum == 8) {
      for (; iVar3 < DAT_004ec83c + DAT_004ec838; iVar3 = iVar3 + 1) {
        *(undefined4 *)((int)local_28->_initaddr + iVar3 * 0xc + 8) = 0;
      }
      goto LAB_004afe30;
    }
  }
  *puVar4 = 0;
LAB_004afe30:
  FUN_004afe51(0);
  if (_SigNum == 8) {
    (*pcVar5)(8,local_28->_pxcptacttab);
  }
  else {
    (*pcVar5)(_SigNum);
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


/* END FUNCTION 0x004afd16 */

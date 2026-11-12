/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ad1cb
 * Name: __setmbcp
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int __cdecl __setmbcp(int _CodePage)

{
  int *_Memory;
  int iVar1;
  int local_24;
  
  local_24 = -1;
  __lock(0xd);
  DAT_0051c684 = 0;
  if (_CodePage == -2) {
    DAT_0051c684 = 1;
    _CodePage = GetOEMCP();
  }
  else if (_CodePage == -3) {
    DAT_0051c684 = 1;
    _CodePage = GetACP();
  }
  else if (_CodePage == -4) {
    DAT_0051c684 = 1;
    _CodePage = DAT_0051c658;
  }
  if (_CodePage == DAT_0051c7e4) {
    local_24 = 0;
  }
  else {
    if ((DAT_0051c6d4 == (int *)0x0) || (_Memory = DAT_0051c6d4, *DAT_0051c6d4 != 0)) {
      _Memory = _malloc(0x220);
    }
    if ((_Memory != (int *)0x0) && (local_24 = __setmbcp_lk(_CodePage), local_24 == 0)) {
      *_Memory = 0;
      _Memory[1] = DAT_0051c7e4;
      _Memory[2] = DAT_0051c6d8;
      _Memory[3] = DAT_0051c6d0;
      for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
        *(undefined2 *)((int)_Memory + iVar1 * 2 + 0x10) =
             *(undefined2 *)((int)&DAT_0051c7f0 + iVar1 * 2);
      }
      for (iVar1 = 0; iVar1 < 0x101; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x1c + (int)_Memory) = *(undefined1 *)((int)&DAT_0051c6e0 + iVar1);
      }
      for (iVar1 = 0; DAT_0051c6d4 = _Memory, iVar1 < 0x100; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x11d + (int)_Memory) = (&DAT_0051c800)[iVar1];
      }
    }
    if ((local_24 == -1) && (_Memory != DAT_0051c6d4)) {
      _free(_Memory);
    }
  }
  FUN_004ad312();
  return local_24;
}


/* END FUNCTION 0x004ad1cb */

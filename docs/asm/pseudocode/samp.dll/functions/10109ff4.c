/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10109ff4
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
  DAT_102ad218 = 0;
  if (_CodePage == -2) {
    DAT_102ad218 = 1;
    _CodePage = GetOEMCP();
  }
  else if (_CodePage == -3) {
    DAT_102ad218 = 1;
    _CodePage = GetACP();
  }
  else if (_CodePage == -4) {
    DAT_102ad218 = 1;
    _CodePage = DAT_102ad0f8;
  }
  if (_CodePage == DAT_102ad424) {
    local_24 = 0;
  }
  else {
    if ((DAT_102ad30c == (int *)0x0) || (_Memory = DAT_102ad30c, *DAT_102ad30c != 0)) {
      _Memory = _malloc(0x220);
    }
    if ((_Memory != (int *)0x0) && (local_24 = __setmbcp_lk(_CodePage), local_24 == 0)) {
      *_Memory = 0;
      _Memory[1] = DAT_102ad424;
      _Memory[2] = DAT_102ad310;
      _Memory[3] = DAT_102ad308;
      for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
        *(undefined2 *)((int)_Memory + iVar1 * 2 + 0x10) = (&DAT_102ad430)[iVar1];
      }
      for (iVar1 = 0; iVar1 < 0x101; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x1c + (int)_Memory) = (&DAT_102ad320)[iVar1];
      }
      for (iVar1 = 0; DAT_102ad30c = _Memory, iVar1 < 0x100; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x11d + (int)_Memory) = (&DAT_102ad440)[iVar1];
      }
    }
    if ((local_24 == -1) && (_Memory != DAT_102ad30c)) {
      _free(_Memory);
    }
  }
  FUN_1010a13b();
  return local_24;
}


/* END FUNCTION 0x10109ff4 */

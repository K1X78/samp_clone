/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f8862
 * Name: _calloc
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  int iVar1;
  uint _Size_00;
  uint dwBytes;
  void *_Dst;
  
  _Size_00 = _Count * _Size;
  dwBytes = _Size_00;
  if (_Size_00 == 0) {
    dwBytes = 1;
  }
  do {
    _Dst = (void *)0x0;
    if (dwBytes < 0xffffffe1) {
      if ((DAT_102ad68c == 3) && (dwBytes = dwBytes + 0xf & 0xfffffff0, _Size_00 <= DAT_102ad678)) {
        __lock(4);
        _Dst = (void *)___sbh_alloc_block(_Size_00);
        FUN_100f890c();
        if (_Dst != (void *)0x0) {
          _memset(_Dst,0,_Size_00);
          goto LAB_100f88d7;
        }
      }
      else {
LAB_100f88d7:
        if (_Dst != (void *)0x0) {
          return _Dst;
        }
      }
      _Dst = HeapAlloc(DAT_102ad688,8,dwBytes);
    }
    if (_Dst != (void *)0x0) {
      return _Dst;
    }
    if (DAT_102acfb8 == 0) {
      return (void *)0x0;
    }
    iVar1 = __callnewh(dwBytes);
    if (iVar1 == 0) {
      return (void *)0x0;
    }
  } while( true );
}


/* END FUNCTION 0x100f8862 */

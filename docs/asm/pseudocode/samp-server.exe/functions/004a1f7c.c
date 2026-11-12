/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a1f7c
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
  uint *_Size_00;
  uint *dwBytes;
  int *_Dst;
  
  _Size_00 = (uint *)(_Count * _Size);
  dwBytes = _Size_00;
  if (_Size_00 == (uint *)0x0) {
    dwBytes = (uint *)0x1;
  }
  do {
    _Dst = (int *)0x0;
    if (dwBytes < (uint *)0xffffffe1) {
      if ((DAT_0051c934 == 3) &&
         (dwBytes = (uint *)((int)dwBytes + 0xfU & 0xfffffff0), _Size_00 <= DAT_0051c920)) {
        __lock(4);
        _Dst = ___sbh_alloc_block(_Size_00);
        FUN_004a2026();
        if (_Dst != (int *)0x0) {
          _memset(_Dst,0,(size_t)_Size_00);
          goto LAB_004a1ff1;
        }
      }
      else {
LAB_004a1ff1:
        if (_Dst != (int *)0x0) {
          return _Dst;
        }
      }
      _Dst = HeapAlloc(DAT_0051c930,8,(SIZE_T)dwBytes);
    }
    if (_Dst != (int *)0x0) {
      return _Dst;
    }
    if (DAT_0051c39c == 0) {
      return (void *)0x0;
    }
    iVar1 = __callnewh((size_t)dwBytes);
    if (iVar1 == 0) {
      return (void *)0x0;
    }
  } while( true );
}


/* END FUNCTION 0x004a1f7c */

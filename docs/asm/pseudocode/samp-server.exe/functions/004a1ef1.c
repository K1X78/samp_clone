/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a1ef1
 * Name: __beginthreadex
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  _StartAddress *p_Var1;
  int *piVar2;
  _ptiddata _Ptd;
  _StartAddress **lpThreadId;
  HANDLE pvVar3;
  DWORD DVar4;
  pthreadlocinfo unaff_ESI;
  
  p_Var1 = _StartAddress;
  DVar4 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    piVar2 = FUN_004a5f9b();
    *piVar2 = 0x16;
  }
  else {
    _Ptd = _calloc(1,0x8c);
    if (_Ptd != (_ptiddata)0x0) {
      __initptd(_Ptd,unaff_ESI);
      _Ptd->_thandle = 0xffffffff;
      *(void **)(_Ptd->_con_ch_buf + 4) = _ArgList;
      *(_StartAddress **)_Ptd->_con_ch_buf = p_Var1;
      lpThreadId = (_StartAddress **)_ThrdAddr;
      if (_ThrdAddr == (uint *)0x0) {
        lpThreadId = &_StartAddress;
      }
      pvVar3 = CreateThread(_Security,_StackSize,FUN_004a1e5c,_Ptd,_InitFlag,(LPDWORD)lpThreadId);
      if (pvVar3 != (HANDLE)0x0) {
        return (uintptr_t)pvVar3;
      }
      DVar4 = GetLastError();
    }
    _free(_Ptd);
    if (DVar4 != 0) {
      __dosmaperr(DVar4);
    }
  }
  return 0;
}


/* END FUNCTION 0x004a1ef1 */

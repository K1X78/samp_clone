/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9dac
 * Name: __beginthread
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uintptr_t __cdecl __beginthread(_StartAddress *_StartAddress,uint _StackSize,void *_ArgList)

{
  undefined4 *puVar1;
  _ptiddata _Ptd;
  HANDLE hThread;
  DWORD DVar2;
  pthreadlocinfo unaff_ESI;
  
  DVar2 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    puVar1 = (undefined4 *)FUN_100fdc77();
    *puVar1 = 0x16;
  }
  else {
    _Ptd = _calloc(1,0x8c);
    if (_Ptd != (_ptiddata)0x0) {
      __initptd(_Ptd,unaff_ESI);
      *(_StartAddress **)_Ptd->_con_ch_buf = _StartAddress;
      *(void **)(_Ptd->_con_ch_buf + 4) = _ArgList;
      hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,_StackSize,FUN_100f9d1a,_Ptd,4,&_Ptd->_tid);
      _Ptd->_thandle = (uintptr_t)hThread;
      if ((hThread != (HANDLE)0x0) && (DVar2 = ResumeThread(hThread), DVar2 != 0xffffffff)) {
        return (uintptr_t)hThread;
      }
      DVar2 = GetLastError();
    }
    _free(_Ptd);
    if (DVar2 != 0) {
      __dosmaperr(DVar2);
    }
  }
  return 0xffffffff;
}


/* END FUNCTION 0x100f9dac */

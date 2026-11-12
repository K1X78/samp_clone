/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046a5d0
 * Name: FUN_0046a5d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046a5d0(void *this,LPCSTR param_1)

{
  char cVar1;
  undefined4 *_Memory;
  HMODULE pHVar2;
  FARPROC pFVar3;
  uint uVar4;
  undefined4 *local_4;
  
  local_4 = this;
  _Memory = operator_new(0x20);
  if (_Memory == (undefined4 *)0x0) {
    _Memory = (undefined4 *)0x0;
  }
  else {
    *_Memory = 0;
    _Memory[1] = 0;
    _Memory[2] = 0;
    _Memory[3] = 0;
    _Memory[4] = 0;
    _Memory[5] = 0;
    _Memory[6] = 0;
    _Memory[7] = 0;
  }
  local_4 = _Memory;
  pHVar2 = LoadLibraryA(param_1);
  *_Memory = pHVar2;
  if (pHVar2 == (HMODULE)0x0) {
    _free(_Memory);
    return 0;
  }
  pFVar3 = GetProcAddress(pHVar2,"Load");
  _Memory[2] = pFVar3;
  pFVar3 = GetProcAddress((HMODULE)*_Memory,"Unload");
  _Memory[3] = pFVar3;
  pFVar3 = GetProcAddress((HMODULE)*_Memory,"Supports");
  _Memory[4] = pFVar3;
  if ((_Memory[2] == 0) || (pFVar3 == (FARPROC)0x0)) {
    FUN_00491fa0("  Plugin does not conform to architecture.");
  }
  else {
    uVar4 = (*pFVar3)();
    _Memory[1] = uVar4;
    if ((uVar4 & 0xffff) < 0x221) {
      if ((_Memory[1] & 0x10000) == 0) {
        _Memory[6] = 0;
        _Memory[7] = 0;
      }
      else {
        pFVar3 = GetProcAddress((HMODULE)*_Memory,"AmxLoad");
        _Memory[6] = pFVar3;
        pFVar3 = GetProcAddress((HMODULE)*_Memory,"AmxUnload");
        _Memory[7] = pFVar3;
      }
      if ((_Memory[1] & 0x20000) == 0) {
        _Memory[5] = 0;
      }
      else {
        pFVar3 = GetProcAddress((HMODULE)*_Memory,"ProcessTick");
        _Memory[5] = pFVar3;
      }
      cVar1 = (*(code *)_Memory[2])(this);
      if (cVar1 != '\0') {
        FUN_0046a580((void *)((int)this + 0x4b0),&local_4);
        return 1;
      }
      pHVar2 = (HMODULE)*_Memory;
      goto LAB_0046a720;
    }
    FUN_00491fa0("  Unsupported version - This plugin requires version %x.");
  }
  pHVar2 = (HMODULE)*_Memory;
LAB_0046a720:
  FreeLibrary(pHVar2);
  _free(_Memory);
  return 0;
}


/* END FUNCTION 0x0046a5d0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10109020
 * Name: __fullpath
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl __fullpath(char *_FullPath,char *_Path,size_t _SizeInBytes)

{
  char *lpBuffer;
  undefined4 *puVar1;
  DWORD DVar2;
  char *pcVar3;
  
  pcVar3 = _Path;
  if ((_Path == (char *)0x0) || (*_Path == '\0')) {
    pcVar3 = __getcwd(_FullPath,_SizeInBytes);
    return pcVar3;
  }
  lpBuffer = _FullPath;
  if (_FullPath == (char *)0x0) {
    lpBuffer = _malloc(0x104);
    if (lpBuffer == (LPSTR)0x0) {
      puVar1 = (undefined4 *)FUN_100fdc77();
      *puVar1 = 0xc;
      return (char *)0x0;
    }
    _SizeInBytes = 0x104;
  }
  DVar2 = GetFullPathNameA(pcVar3,_SizeInBytes,lpBuffer,&_Path);
  if (_SizeInBytes <= DVar2) {
    if (_FullPath == (char *)0x0) {
      _free(lpBuffer);
    }
    puVar1 = (undefined4 *)FUN_100fdc77();
    *puVar1 = 0x22;
    return (char *)0x0;
  }
  if (DVar2 == 0) {
    if (_FullPath == (char *)0x0) {
      _free(lpBuffer);
    }
    DVar2 = GetLastError();
    __dosmaperr(DVar2);
    return (char *)0x0;
  }
  return lpBuffer;
}


/* END FUNCTION 0x10109020 */

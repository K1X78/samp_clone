/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x101043db
 * Name: __lseek_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


DWORD __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  undefined4 *puVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)__get_osfhandle(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    puVar2 = (undefined4 *)FUN_100fdc77();
    *puVar2 = 9;
    return 0xffffffff;
  }
  DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar3 == 0xffffffff) {
    uVar4 = GetLastError();
  }
  else {
    uVar4 = 0;
  }
  if (uVar4 == 0) {
    pbVar1 = (byte *)((&DAT_102ad560)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  else {
    __dosmaperr(uVar4);
    DVar3 = 0xffffffff;
  }
  return DVar3;
}


/* END FUNCTION 0x101043db */

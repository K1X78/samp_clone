/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fca24
 * Name: ___towlower_mt
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint ___towlower_mt(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  
  uVar1 = 0xffff;
  if ((WCHAR)param_2 != L'\xffff') {
    if (((ushort)(WCHAR)param_2 < 0x100) && (iVar2 = ___iswctype_mt(param_1,param_2,1), iVar2 == 0))
    {
      uVar1 = param_2 & 0xffff;
    }
    else {
      iVar2 = ___crtLCMapStringW(*(LPCWSTR *)(param_1 + 0x14),0x100,(LPCWSTR)&param_2,1,
                                 (LPWSTR)&local_8,1);
      uVar1 = param_2 & 0xffff;
      if (iVar2 != 0) {
        uVar1 = local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}


/* END FUNCTION 0x100fca24 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ac7cc
 * Name: ___wctomb_mt
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl ___wctomb_mt(int param_1,LPSTR param_2,WCHAR param_3)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpMultiByteStr = param_2;
  if (param_2 == (LPSTR)0x0) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
      if ((ushort)param_3 < 0x100) {
        *param_2 = (CHAR)param_3;
        return 1;
      }
    }
    else {
      param_2 = (LPSTR)0x0;
      iVar1 = WideCharToMultiByte(*(UINT *)(param_1 + 4),0,&param_3,1,lpMultiByteStr,
                                  *(int *)(param_1 + 0x28),(LPCSTR)0x0,(LPBOOL)&param_2);
      if ((iVar1 != 0) && (param_2 == (LPSTR)0x0)) {
        return iVar1;
      }
    }
    piVar2 = FUN_004a5f9b();
    *piVar2 = 0x2a;
    iVar1 = -1;
  }
  return iVar1;
}


/* END FUNCTION 0x004ac7cc */

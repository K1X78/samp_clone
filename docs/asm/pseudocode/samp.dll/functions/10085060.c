/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085060
 * Name: FUN_10085060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_10085060(LPCWSTR param_1)

{
  int cchWideChar;
  int iVar1;
  undefined4 *puVar2;
  LPSTR pCVar3;
  int iVar4;
  LPCSTR pCVar5;
  LPBOOL pBVar6;
  
  pBVar6 = (LPBOOL)0x0;
  pCVar5 = (LPCSTR)0x0;
  iVar4 = 0;
  pCVar3 = (LPSTR)0x0;
  puVar2 = &DAT_1017fbb8;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_100fca0e(param_1);
  iVar1 = WideCharToMultiByte(0,0,param_1,iVar1,pCVar3,iVar4,pCVar5,pBVar6);
  if (iVar1 < 0x801) {
    pBVar6 = (LPBOOL)0x0;
    pCVar5 = (LPCSTR)0x0;
    pCVar3 = (LPSTR)&DAT_1017fbb8;
    iVar4 = iVar1;
    cchWideChar = FUN_100fca0e(param_1);
    WideCharToMultiByte(0,0,param_1,cchWideChar,pCVar3,iVar4,pCVar5,pBVar6);
    *(undefined1 *)((int)&DAT_1017fbb8 + iVar1) = 0;
  }
  return &DAT_1017fbb8;
}


/* END FUNCTION 0x10085060 */

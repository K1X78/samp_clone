/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b700
 * Name: FUN_1009b700
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009b700(LPCSTR param_1,LPWSTR param_2,uint param_3)

{
  char cVar1;
  LPCSTR pCVar2;
  int cchWideChar;
  uint uVar3;
  LPWSTR pWVar4;
  
  pWVar4 = param_2;
  for (uVar3 = (param_3 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    pWVar4[0] = L'\0';
    pWVar4[1] = L'\0';
    pWVar4 = pWVar4 + 2;
  }
  for (uVar3 = param_3 * 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)pWVar4 = 0;
    pWVar4 = (LPWSTR)((int)pWVar4 + 1);
  }
  pCVar2 = param_1;
  do {
    cVar1 = *pCVar2;
    pCVar2 = pCVar2 + 1;
  } while (cVar1 != '\0');
  cchWideChar = MultiByteToWideChar(0,0,param_1,(int)pCVar2 - (int)(param_1 + 1),(LPWSTR)0x0,0);
  if (cchWideChar < (int)param_3) {
    pCVar2 = param_1;
    do {
      cVar1 = *pCVar2;
      pCVar2 = pCVar2 + 1;
    } while (cVar1 != '\0');
    MultiByteToWideChar(0,0,param_1,(int)pCVar2 - (int)(param_1 + 1),param_2,cchWideChar);
  }
  return;
}


/* END FUNCTION 0x1009b700 */

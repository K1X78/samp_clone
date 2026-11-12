/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c51c0
 * Name: FUN_100c51c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c51c0(void)

{
  LSTATUS LVar1;
  int iVar2;
  undefined4 *puVar3;
  BYTE *pBVar4;
  DWORD local_224;
  HKEY local_220;
  DWORD local_21c;
  BYTE local_218 [264];
  char local_110 [268];
  
  puVar3 = &DAT_102ac8b0;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  pBVar4 = local_218;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    pBVar4[0] = '\0';
    pBVar4[1] = '\0';
    pBVar4[2] = '\0';
    pBVar4[3] = '\0';
    pBVar4 = pBVar4 + 4;
  }
  local_224 = 0x104;
  *pBVar4 = '\0';
  _sprintf((char *)&DAT_102ac8b0,"%s\\cache",&DAT_102ac7a8);
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software\\SAMP",0,0x20019,&local_220);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_220,"model_cache",(LPDWORD)0x0,&local_21c,local_218,&local_224);
    if (LVar1 == 0) {
      _strncpy((char *)&DAT_102ac8b0,(char *)local_218,0x105);
    }
  }
  iVar2 = FUN_100b5900(&DAT_102ac8b0);
  if (iVar2 == 0) {
    CreateDirectoryA((LPCSTR)&DAT_102ac8b0,(LPSECURITY_ATTRIBUTES)0x0);
  }
  _sprintf(local_110,"%s\\local",&DAT_102ac8b0);
  iVar2 = FUN_100b5900(local_110);
  if (iVar2 == 0) {
    CreateDirectoryA(local_110,(LPSECURITY_ATTRIBUTES)0x0);
  }
  return;
}


/* END FUNCTION 0x100c51c0 */

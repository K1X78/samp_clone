/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10076470
 * Name: FUN_10076470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10076470(char *param_1,size_t param_2,LPCSTR param_3,undefined4 param_4)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  LPSTR local_324;
  CHAR local_320;
  undefined4 local_31f;
  char local_218;
  undefined4 local_217;
  undefined1 local_115;
  char local_110;
  undefined4 local_10f;
  undefined1 local_d;
  
  local_320 = '\0';
  puVar3 = &local_31f;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_218 = '\0';
  puVar3 = &local_217;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_110 = '\0';
  puVar3 = &local_10f;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_324 = (LPSTR)0x0;
  GetFullPathNameA(param_3,0x104,&local_320,&local_324);
  while( true ) {
    if (local_324 == (LPSTR)0x0) {
      return 0;
    }
    __snprintf(&local_218,0x104,"%s\\%s",&local_320,param_4);
    local_115 = 0;
    DVar1 = GetFileAttributesA(&local_218);
    if (DVar1 != 0xffffffff) break;
    __snprintf(&local_110,0x104,"%s\\..",&local_320);
    local_d = 0;
    GetFullPathNameA(&local_110,0x104,&local_320,&local_324);
  }
  _strncpy(param_1,&local_218,param_2);
  param_1[param_2 - 1] = '\0';
  return 1;
}


/* END FUNCTION 0x10076470 */

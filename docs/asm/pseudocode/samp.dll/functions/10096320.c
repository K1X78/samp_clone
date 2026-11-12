/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10096320
 * Name: FUN_10096320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10096320(undefined4 param_1,uint param_2,LPCSTR param_3,undefined4 param_4)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  LPSTR local_324;
  CHAR local_320;
  undefined4 local_31f;
  CHAR local_218;
  undefined4 local_217;
  CHAR local_110;
  undefined4 local_10f;
  
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
  local_324 = (char *)0x0;
  GetFullPathNameA(param_3,0x104,&local_320,&local_324);
  while ((local_324 != (char *)0x0 && (*local_324 != '\0'))) {
    FUN_1007bc80(&local_218,0x104,"%s\\%s",&local_320,param_4);
    DVar1 = GetFileAttributesA(&local_218);
    if (DVar1 != 0xffffffff) {
      if (param_2 < 0x80000000) {
        FUN_10077b90(param_1,param_2,&local_218);
      }
      return 1;
    }
    FUN_1007bc80(&local_110,0x104,"%s\\..",&local_320);
    GetFullPathNameA(&local_110,0x104,&local_320,&local_324);
  }
  return 0;
}


/* END FUNCTION 0x10096320 */

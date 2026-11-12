/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c52d0
 * Name: FUN_100c52d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100c52d0(void)

{
  LSTATUS LVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD local_c;
  HKEY local_8;
  DWORD local_4;
  
  puVar3 = &DAT_102ac390;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  local_c = 0x104;
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software\\SAMP",0,0x20019,&local_8);
  if (LVar1 == 0) {
    LVar1 = RegQueryValueExA(local_8,"artwork_proxy",(LPDWORD)0x0,&local_4,(LPBYTE)&DAT_102ac390,
                             &local_c);
    return ~-(uint)(LVar1 != 0) & 0x102ac390;
  }
  return 0;
}


/* END FUNCTION 0x100c52d0 */

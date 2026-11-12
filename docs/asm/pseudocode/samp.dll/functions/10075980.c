/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10075980
 * Name: FUN_10075980
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined * FUN_10075980(void)

{
  LSTATUS LVar1;
  HKEY local_c;
  DWORD local_8;
  DWORD local_4;
  
  local_8 = 0x104;
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,"Software\\Microsoft\\DirectX SDK",0,0x20019,&local_c);
  if (LVar1 != 0) {
    return &DAT_1017edd8;
  }
  LVar1 = RegQueryValueExA(local_c,"DX9S4SDK Samples Path",(LPDWORD)0x0,&local_4,&DAT_1017ecc0,
                           &local_8);
  if (LVar1 != 0) {
    LVar1 = RegQueryValueExA(local_c,"DX81SDK Samples Path",(LPDWORD)0x0,&local_4,&DAT_1017ecc0,
                             &local_8);
    if (LVar1 != 0) {
      LVar1 = RegQueryValueExA(local_c,"DX8SDK Samples Path",(LPDWORD)0x0,&local_4,&DAT_1017ecc0,
                               &local_8);
      if (LVar1 != 0) {
        RegCloseKey(local_c);
        return &DAT_1017edd8;
      }
    }
  }
  RegCloseKey(local_c);
  lstrcatA(&DAT_1017ecc0,"\\D3DIM\\Media\\");
  return &DAT_1017ecc0;
}


/* END FUNCTION 0x10075980 */

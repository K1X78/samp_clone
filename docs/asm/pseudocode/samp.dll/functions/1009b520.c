/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b520
 * Name: FUN_1009b520
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1009b520(int param_1,undefined4 param_2,undefined4 param_3)

{
  BOOL BVar1;
  char local_8;
  BYTE local_7;
  undefined1 local_6;
  undefined4 local_4;
  
  local_8 = *(char *)(param_1 + 8);
  local_4 = 0;
  if (local_8 != '\0') {
    local_7 = (BYTE)param_3;
    local_6 = 0;
    MultiByteToWideChar(0,0,&local_8,2,(LPWSTR)&local_4,1);
    FUN_1009b490(param_2,local_4);
    *(undefined1 *)(param_1 + 8) = 0;
    return 1;
  }
  BVar1 = IsDBCSLeadByteEx(0,(BYTE)param_3);
  if (BVar1 != 0) {
    *(BYTE *)(param_1 + 8) = (BYTE)param_3;
    return 0;
  }
  MultiByteToWideChar(0,0,(LPCSTR)&param_3,1,(LPWSTR)&local_4,1);
  FUN_1009b490(param_2,local_4);
  return 1;
}


/* END FUNCTION 0x1009b520 */

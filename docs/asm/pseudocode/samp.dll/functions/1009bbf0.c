/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009bbf0
 * Name: FUN_1009bbf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1009bbf0(int param_1,int param_2,undefined4 param_3)

{
  BOOL BVar1;
  undefined4 *puVar2;
  char local_1c;
  BYTE local_1b;
  undefined1 local_1a;
  uint local_18;
  undefined4 local_13;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_1c = *(char *)(param_1 + 8);
  local_18 = 0;
  if (local_1c != '\0') {
    local_1b = (BYTE)param_3;
    local_1a = 0;
    MultiByteToWideChar(0,0,&local_1c,2,(LPWSTR)&local_18,1);
    FUN_1009b490(param_2,local_18);
    *(undefined1 *)(param_1 + 8) = 0;
    return 1;
  }
  BVar1 = IsDBCSLeadByteEx(0,(BYTE)param_3);
  if (BVar1 != 0) {
    *(BYTE *)(param_1 + 8) = (BYTE)param_3;
    return 0;
  }
  MultiByteToWideChar(0,0,(LPCSTR)&param_3,1,(LPWSTR)&local_18,1);
  FUN_1009bbb0(local_18 & 0xffff);
  puVar2 = (undefined4 *)(param_2 * 0x13 + param_1);
  *puVar2 = local_13;
  puVar2[1] = local_f;
  puVar2[2] = local_b;
  puVar2[3] = local_7;
  *(undefined2 *)(puVar2 + 4) = local_3;
  *(undefined1 *)((int)puVar2 + 0x12) = local_1;
  FUN_1009b440();
  return 1;
}


/* END FUNCTION 0x1009bbf0 */

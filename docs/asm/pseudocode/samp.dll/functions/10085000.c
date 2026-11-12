/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085000
 * Name: FUN_10085000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10085000(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  FUN_1009ba00(param_2);
  *(undefined4 *)(param_1 + 0x122) = 0;
  iVar1 = lstrlenW(*(LPCWSTR *)(param_1 + 0x4d));
  FUN_10084ef0(iVar1);
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x11e) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x11e) = *(undefined4 *)(param_1 + 0x119);
  return;
}


/* END FUNCTION 0x10085000 */

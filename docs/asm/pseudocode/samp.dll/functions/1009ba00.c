/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009ba00
 * Name: FUN_1009ba00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1009ba00(LPCSTR param_1)

{
  int iVar1;
  undefined1 local_1004 [4096];
  undefined4 uStack_4;
  
  uStack_4 = 0x1009ba0a;
  iVar1 = lstrlenA(param_1);
  if (0x400 < iVar1) {
    return 0;
  }
  FUN_1009b700(param_1,local_1004,0x800);
  FUN_1009b9a0(local_1004);
  return 1;
}


/* END FUNCTION 0x1009ba00 */

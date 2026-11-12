/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100690e0
 * Name: FUN_100690e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100690e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1af0) + -1;
  *(int *)(param_1 + 0x1af0) = iVar1;
  if (-1 < iVar1) {
    FUN_10085000(iVar1 * 0x81 + 0x1565 + param_1,0);
    return;
  }
  if (iVar1 == -1) {
    FUN_10085000(param_1 + 0x1a6f,0);
  }
  *(undefined4 *)(param_1 + 0x1af0) = 0xffffffff;
  return;
}


/* END FUNCTION 0x100690e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a5d0
 * Name: FUN_0040a5d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040a5d0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  while (iVar1 != 0) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 0x1c);
    iVar1 = *(int *)(iVar1 + 0x1c);
  }
  FUN_0040a530();
  return;
}


/* END FUNCTION 0x0040a5d0 */

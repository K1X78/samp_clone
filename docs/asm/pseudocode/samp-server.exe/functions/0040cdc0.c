/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040cdc0
 * Name: FUN_0040cdc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040cdc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
  
  for (iVar1 = *(int *)(*(int *)(unaff_ESI + 4) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (*(int *)(iVar1 + 0x14) == *(int *)(unaff_ESI + 0x14)) {
      *(undefined4 *)(iVar1 + 0x18) = param_1;
      *(undefined4 *)(iVar1 + 0x1c) = param_2;
    }
  }
  return;
}


/* END FUNCTION 0x0040cdc0 */

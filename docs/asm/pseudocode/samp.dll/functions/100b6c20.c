/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6c20
 * Name: FUN_100b6c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_100b6c20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x4c) != 0)) &&
        (iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 0x460), iVar1 != 0)) &&
       (((*(uint *)(iVar1 + 0x46c) & 0x100) != 0 && (*(int *)(iVar1 + 0x598) == 0)))) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100b6c20 */

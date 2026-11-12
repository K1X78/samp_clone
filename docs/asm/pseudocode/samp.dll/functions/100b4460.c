/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4460
 * Name: FUN_100b4460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100b4460(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x4c4), iVar1 != 0)) {
    _DAT_102a9a48 = iVar1;
    if ((*(int *)(iVar1 + 0x460) != 0) &&
       ((*(uint *)(*(int *)(iVar1 + 0x460) + 0x46c) & 0x100) != 0)) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x100b4460 */

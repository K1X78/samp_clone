/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100881b0
 * Name: FUN_100881b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100881b0(int param_1)

{
  LPRECT lprc;
  
  FUN_100848a0();
  lprc = (LPRECT)(param_1 + 0x4e);
  SetRect(lprc,*(int *)(param_1 + 0x3d),*(int *)(param_1 + 0x41),*(int *)(param_1 + 0x45),
          (*(int *)(param_1 + 0x45) - *(int *)(param_1 + 0x3d)) + *(int *)(param_1 + 0x41));
  SetRect((LPRECT)(param_1 + 0x5e),*(int *)(param_1 + 0x3d),
          (*(int *)(param_1 + 0x3d) - *(int *)(param_1 + 0x45)) + *(int *)(param_1 + 0x49),
          *(int *)(param_1 + 0x45),*(int *)(param_1 + 0x49));
  SetRect((LPRECT)(param_1 + 0x6e),lprc->left,*(int *)(param_1 + 0x5a),*(int *)(param_1 + 0x66),
          *(int *)(param_1 + 0x62));
  *(LONG *)(param_1 + 0x7e) = lprc->left;
  *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(param_1 + 0x56);
  FUN_10084da0();
  return;
}


/* END FUNCTION 0x100881b0 */

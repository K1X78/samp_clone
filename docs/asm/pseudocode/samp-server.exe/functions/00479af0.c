/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479af0
 * Name: FUN_00479af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479af0(undefined4 param_1,int param_2)

{
  void *this;
  
  if (*(int *)(DAT_004fc438 + 0x28) != 0) {
    if ((*(ushort *)(param_2 + 4) < 1000) &&
       (this = *(void **)(*(int *)(DAT_004fc438 + 0x28) + 8000 + (uint)*(ushort *)(param_2 + 4) * 4)
       , this != (void *)0x0)) {
      FUN_0048f2f0(this,*(undefined4 *)(param_2 + 8));
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00479af0 */

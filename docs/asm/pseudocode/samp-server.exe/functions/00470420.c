/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470420
 * Name: FUN_00470420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00470420(undefined4 param_1,int param_2)

{
  void *pvVar1;
  
  if (((*(int *)(DAT_004fc438 + 0xc) != 0) && (*(ushort *)(param_2 + 4) < 2000)) &&
     (pvVar1 = *(void **)(*(int *)(DAT_004fc438 + 0xc) + 0x3f54 + (uint)*(ushort *)(param_2 + 4) * 4
                         ), pvVar1 != (void *)0x0)) {
    FUN_00489f80(pvVar1);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00470420 */

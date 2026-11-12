/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470460
 * Name: FUN_00470460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00470460(undefined4 param_1,int param_2)

{
  void *this;
  
  if (*(int *)(DAT_004fc438 + 0xc) != 0) {
    if ((*(ushort *)(param_2 + 4) < 2000) &&
       (this = *(void **)(*(int *)(DAT_004fc438 + 0xc) + 0x3f54 + (uint)*(ushort *)(param_2 + 4) * 4
                         ), this != (void *)0x0)) {
      FUN_00489fc0(this,(void *)0xffff,(void *)(uint)*(ushort *)(param_2 + 8));
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00470460 */

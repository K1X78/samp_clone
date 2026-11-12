/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004704e0
 * Name: FUN_004704e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004704e0(undefined4 param_1,int param_2)

{
  void *this;
  
  if (*(int *)(DAT_004fc438 + 0xc) != 0) {
    if ((*(ushort *)(param_2 + 4) < 2000) &&
       (this = *(void **)(*(int *)(DAT_004fc438 + 0xc) + 0x3f54 + (uint)*(ushort *)(param_2 + 4) * 4
                         ), this != (void *)0x0)) {
      FUN_0048a4c0(this,(void *)0xffff,(uint)*(byte *)(param_2 + 8),(uint)*(byte *)(param_2 + 0xc));
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004704e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477290
 * Name: FUN_00477290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00477290(undefined4 param_1,int param_2)

{
  ushort uVar1;
  void *this;
  
  this = *(void **)(DAT_004fc438 + 0x24);
  if (this != (void *)0x0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (uVar1 < 0x400) {
      if (*(int *)((int)this + (uint)uVar1 * 4 + 0x4000) != 0) {
        FUN_00464bd0(this,CONCAT22((short)((uint)DAT_004fc438 >> 0x10),uVar1),*(uint *)(param_2 + 8)
                    );
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00477290 */

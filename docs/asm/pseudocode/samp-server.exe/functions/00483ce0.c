/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483ce0
 * Name: FUN_00483ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483ce0(void *this,uint param_1)

{
  if (*(void **)(DAT_004fc438 + 0x20) != (void *)0x0) {
    FUN_00464290(*(void **)(DAT_004fc438 + 0x20),param_1,*(ushort *)((int)this + 0x2d53));
    *(undefined1 *)((param_1 & 0xffff) + 0x14dd + (int)this) = 0;
    *(int *)((int)this + 0x2cd1) = *(int *)((int)this + 0x2cd1) + -1;
  }
  return;
}


/* END FUNCTION 0x00483ce0 */

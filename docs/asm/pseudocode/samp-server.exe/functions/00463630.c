/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463630
 * Name: FUN_00463630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00463630(void *this,char param_1)

{
  if (*(uint *)((int)this + 8) != 0) {
    if ((0x200 < *(uint *)((int)this + 8)) && (param_1 == '\0')) {
      _free(*(void **)this);
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


/* END FUNCTION 0x00463630 */

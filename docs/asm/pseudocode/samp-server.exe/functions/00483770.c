/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483770
 * Name: FUN_00483770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483770(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0x2cf1) != 0) {
    *(undefined4 *)((int)this + 0x1f) = *param_1;
    *(undefined4 *)((int)this + 0x23) = param_1[1];
  }
  return;
}


/* END FUNCTION 0x00483770 */

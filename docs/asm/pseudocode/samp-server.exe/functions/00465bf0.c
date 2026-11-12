/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465bf0
 * Name: FUN_00465bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00465bf0(void *this,undefined2 param_1)

{
  *(undefined2 *)((int)this + 0x2d53) = param_1;
  if (*(int *)((int)this + 0x2d4b) != 0) {
    *(undefined2 *)(*(int *)((int)this + 0x2d4b) + 0xd00) = param_1;
  }
  if (*(int *)((int)this + 0x2d4f) != 0) {
    *(undefined2 *)(*(int *)((int)this + 0x2d4f) + 0x9800) = param_1;
  }
  if (*(int *)((int)this + 0x30cf) != 0) {
    *(undefined2 *)(*(int *)((int)this + 0x30cf) + 0x11) = param_1;
  }
  return;
}


/* END FUNCTION 0x00465bf0 */

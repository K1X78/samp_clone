/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049d9d0
 * Name: FUN_0049d9d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0049d9d0(void *this,short param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == -1) {
    *(undefined2 *)((int)this + 0xa4) = 0xffff;
    *(undefined4 *)((int)this + 0xa8) = 0;
    *(undefined4 *)((int)this + 0xac) = 0;
    *(undefined4 *)((int)this + 0xb0) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined4 *)((int)this + 0xbc) = 0;
    return;
  }
  *(short *)((int)this + 0xa4) = param_1;
  *(undefined4 *)((int)this + 0xa8) = *param_2;
  *(undefined4 *)((int)this + 0xac) = param_2[1];
  *(undefined4 *)((int)this + 0xb0) = param_2[2];
  *(undefined4 *)((int)this + 0xb4) = *param_3;
  *(undefined4 *)((int)this + 0xb8) = param_3[1];
  *(undefined4 *)((int)this + 0xbc) = param_3[2];
  return;
}


/* END FUNCTION 0x0049d9d0 */

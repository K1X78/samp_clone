/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049da60
 * Name: FUN_0049da60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_0049da60(void *this,short param_1,undefined4 *param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    *(undefined2 *)((int)this + 0xa6) = 0xffff;
    *(undefined4 *)((int)this + 0xa8) = 0;
    *(undefined4 *)((int)this + 0xac) = 0;
    *(undefined4 *)((int)this + 0xb0) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined1 *)((int)this + 0xc0) = 1;
    *(undefined4 *)((int)this + 0xbc) = 0;
    return;
  }
  *(short *)((int)this + 0xa6) = param_1;
  *(undefined4 *)((int)this + 0xa8) = *param_2;
  *(undefined4 *)((int)this + 0xac) = param_2[1];
  *(undefined4 *)((int)this + 0xb0) = param_2[2];
  *(undefined4 *)((int)this + 0xb4) = *param_3;
  *(undefined4 *)((int)this + 0xb8) = param_3[1];
  uVar1 = param_3[2];
  *(undefined1 *)((int)this + 0xc0) = param_4;
  *(undefined4 *)((int)this + 0xbc) = uVar1;
  return;
}


/* END FUNCTION 0x0049da60 */

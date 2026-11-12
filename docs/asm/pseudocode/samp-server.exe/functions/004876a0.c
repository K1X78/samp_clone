/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004876a0
 * Name: FUN_004876a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004876a0(void *this,undefined4 *param_1)

{
  *(undefined2 *)((int)this + 0x3022) = 0;
  *(undefined4 *)((int)this + 0x105) = *param_1;
  *(undefined4 *)((int)this + 0x109) = param_1[1];
  *(undefined4 *)((int)this + 0x10d) = param_1[2];
  *(undefined4 *)((int)this + 0x111) = param_1[3];
  *(undefined2 *)((int)this + 0x115) = *(undefined2 *)(param_1 + 4);
  FUN_00486620(this,*(undefined4 *)((int)this + 0x10b),*(undefined4 *)((int)this + 0x10f),
               *(undefined4 *)((int)this + 0x113),'\0');
  *(undefined2 *)((int)this + 0x2d31) = *(undefined2 *)((int)this + 0x105);
  *(undefined2 *)((int)this + 0x2d33) = *(undefined2 *)((int)this + 0x107);
  *(uint *)((int)this + 0x2d35) = (uint)*(ushort *)((int)this + 0x109);
  FUN_00484080((int)this);
  FUN_00483630(this,9);
  return;
}


/* END FUNCTION 0x004876a0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489360
 * Name: FUN_00489360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall
FUN_00489360(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  *(undefined4 *)((int)this + 0x82) = param_1;
  *(undefined4 *)((int)this + 0x92) = param_3;
  *(undefined4 *)((int)this + 0x86) = *param_2;
  *(undefined4 *)((int)this + 0x8a) = param_2[1];
  *(undefined4 *)((int)this + 0x8e) = param_2[2];
  *(undefined4 *)((int)this + 0x96) = param_4;
  *(undefined4 *)((int)this + 0x9a) = param_5;
  *(undefined4 *)((int)this + 0x9e) = param_6;
  *(undefined4 *)((int)this + 0xa2) = 0;
  *(undefined4 *)this = *param_2;
  *(undefined4 *)((int)this + 4) = param_2[1];
  *(undefined4 *)((int)this + 8) = param_2[2];
  *(undefined1 *)((int)this + 0x100) = 0;
  uVar3 = thunk_FUN_0044e910();
  *(int *)((int)this + 0x105) = (int)uVar3;
  puVar2 = (undefined4 *)((int)this + 0xc);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x86);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x8a);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x8e);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0xb7) = 0;
  *(undefined4 *)((int)this + 0xbb) = 0;
  *(undefined4 *)((int)this + 0xbf) = 0;
  *(undefined4 *)((int)this + 0xc3) = 0;
  *(undefined4 *)((int)this + 199) = 0;
  *(undefined2 *)((int)this + 0xcb) = 0;
  *(undefined1 *)((int)this + 0xcd) = 0;
  *(undefined4 *)((int)this + 0xc6) = 0xffffffff;
  *(undefined4 *)((int)this + 0xca) = 0xffffffff;
  *(undefined4 *)((int)this + 0xce) = 0;
  *(undefined4 *)((int)this + 0xd2) = 0;
  *(undefined4 *)((int)this + 0xd6) = 0;
  *(undefined4 *)((int)this + 0xda) = 0;
  *(undefined4 *)((int)this + 0xde) = 0;
  *(undefined4 *)((int)this + 0xe2) = 0;
  *(undefined4 *)((int)this + 0xe6) = 0;
  *(undefined4 *)((int)this + 0xea) = 0;
  *(undefined1 *)((int)this + 0xee) = 0;
  *(undefined4 *)((int)this + 0x7a) = 1;
  *(undefined4 *)((int)this + 0x7e) = 0;
  *(undefined2 *)((int)this + 0x6a) = 0xffff;
  *(undefined4 *)((int)this + 0xa6) = 0x447a0000;
  *(undefined4 *)((int)this + 0xaa) = 0;
  *(undefined1 *)((int)this + 0xf1) = 0xff;
  *(undefined1 *)((int)this + 0xf3) = 0xff;
  *(undefined1 *)((int)this + 0xf4) = 0xff;
  *(undefined1 *)((int)this + 0xf2) = 0xff;
  *(undefined1 *)((int)this + 0xef) = 0xff;
  *(undefined1 *)((int)this + 0xf0) = 0xff;
  *(undefined1 *)((int)this + 0xf5) = 0xff;
  *(undefined1 *)((int)this + 0xf6) = 0xff;
  *(undefined1 *)((int)this + 0xf7) = 0xff;
  *(undefined1 *)((int)this + 0xf8) = 0xff;
  *(undefined1 *)((int)this + 0xf9) = 0xff;
  *(undefined1 *)((int)this + 0xfa) = 0xff;
  *(undefined1 *)((int)this + 0xfb) = 0xff;
  *(undefined1 *)((int)this + 0xfc) = 0xff;
  *(undefined1 *)((int)this + 0xfd) = 0xff;
  *(undefined1 *)((int)this + 0xfe) = 0xff;
  *(undefined4 *)((int)this + 0xae) = 0;
  *(undefined1 *)((int)this + 0xb2) = 0;
  *(undefined1 *)((int)this + 0xb3) = 0;
  *(undefined1 *)((int)this + 0xff) = 0;
  *(undefined2 *)((int)this + 0x66) = 0;
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined1 *)((int)this + 0x109) = 0;
  *(undefined1 *)((int)this + 0x10a) = 0;
  *(undefined2 *)((int)this + 0xb5) = 0xffff;
  return this;
}


/* END FUNCTION 0x00489360 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048f1a0
 * Name: FUN_0048f1a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 * __thiscall FUN_0048f1a0(void *this,int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)this = 0;
  *(undefined4 *)((int)this + 0x19) = 0;
  *(undefined4 *)((int)this + 9) = *param_2;
  *(undefined4 *)((int)this + 0xd) = param_2[1];
  *(undefined4 *)((int)this + 0x11) = param_2[2];
  if ((DAT_004fc444 == (void *)0x0) || (param_1 < 0x4e21)) {
    *(int *)((int)this + 1) = param_1;
  }
  else {
    iVar1 = FUN_00497120(DAT_004fc444,param_1);
    if ((-1 < iVar1) && (iVar1 < 20000)) {
      *(int *)((int)this + 1) = iVar1;
      *(int *)((int)this + 5) = param_1;
      goto LAB_0048f1fc;
    }
    *(undefined4 *)((int)this + 1) = 0;
  }
  *(undefined4 *)((int)this + 5) = 0;
LAB_0048f1fc:
  *(undefined4 *)((int)this + 0x15) = param_3;
  *(undefined4 *)((int)this + 0xbc) = *param_2;
  *(undefined4 *)((int)this + 0xc0) = param_2[1];
  *(undefined4 *)((int)this + 0xc4) = param_2[2];
  *(undefined4 *)((int)this + 0xb8) = param_3;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0x1d) = 0;
  *(undefined1 *)((int)this + 0x21) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0x42c80000;
  *(undefined1 *)((int)this + 0xd4) = 1;
  puVar2 = (undefined4 *)((int)this + 0x22);
  for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  return this;
}


/* END FUNCTION 0x0048f1a0 */

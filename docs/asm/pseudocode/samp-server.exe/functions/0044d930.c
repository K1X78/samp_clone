/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044d930
 * Name: FUN_0044d930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __thiscall FUN_0044d930(void *this,undefined4 *param_1,uint param_2,char param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *(uint *)this = param_2 * 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(char *)((int)this + 0x10) = param_3;
  *(uint *)((int)this + 4) = param_2 * 8;
  if (param_3 == '\0') {
    *(undefined4 **)((int)this + 0xc) = param_1;
    return this;
  }
  if (param_2 != 0) {
    if (param_2 < 0x100) {
      puVar1 = (undefined4 *)((int)this + 0x11);
      *(undefined4 *)((int)this + 4) = 0x800;
    }
    else {
      puVar1 = _malloc(param_2);
    }
    uVar2 = param_2 >> 2;
    *(undefined4 **)((int)this + 0xc) = puVar1;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_1;
      param_1 = param_1 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    return this;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return this;
}


/* END FUNCTION 0x0044d930 */

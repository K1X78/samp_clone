/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00488d40
 * Name: FUN_00488d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00488d40(void *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  
  FUN_00488b40(this,param_1);
  uVar2 = param_1 & 0xffff;
  pvVar1 = *(void **)((int)this + uVar2 * 4 + 0x400);
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    *(undefined4 *)((int)this + uVar2 * 4 + 0x400) = 0;
  }
  pvVar1 = *(void **)((int)this + uVar2 * 4 + 0x800);
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    *(undefined4 *)((int)this + uVar2 * 4 + 0x800) = 0;
  }
  *(undefined4 *)((int)this + uVar2 * 4) = 0;
  return;
}


/* END FUNCTION 0x00488d40 */

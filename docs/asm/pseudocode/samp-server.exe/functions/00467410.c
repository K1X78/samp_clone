/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467410
 * Name: FUN_00467410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00467410(void *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  
  FUN_00467200(this,param_1);
  uVar2 = param_1 & 0xffff;
  pvVar1 = *(void **)((int)this + uVar2 * 4 + 0x2000);
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    *(undefined4 *)((int)this + uVar2 * 4 + 0x2000) = 0;
  }
  pvVar1 = *(void **)((int)this + uVar2 * 4 + 0x4000);
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    *(undefined4 *)((int)this + uVar2 * 4 + 0x4000) = 0;
  }
  *(undefined4 *)((int)this + uVar2 * 4) = 0;
  return;
}


/* END FUNCTION 0x00467410 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004818a0
 * Name: FUN_004818a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_004818a0(void *this,uint param_1)

{
  undefined4 extraout_EAX;
  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar1 = 0;
    if (*(void **)this != (void *)0x0) {
      _free(*(void **)this);
      *(undefined4 *)this = 0;
      uVar1 = extraout_EAX;
    }
    *(undefined4 *)((int)this + 4) = 0;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  pvVar2 = _realloc(*(void **)this,param_1 * 4);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  *(void **)this = pvVar2;
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 < param_1) {
    do {
      *(undefined4 *)(*(int *)this + uVar3 * 4) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_1);
  }
  *(uint *)((int)this + 4) = param_1;
  return CONCAT31((int3)(uVar3 >> 8),1);
}


/* END FUNCTION 0x004818a0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004677d0
 * Name: FUN_004677d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_004677d0(void *this,ushort param_1)

{
  int iVar1;
  void *_Memory;
  uint uVar2;
  uint uVar3;
  
  if (((param_1 < 2000) && (uVar3 = (uint)param_1, *(int *)((int)this + uVar3 * 4 + 0x2014) != 0))
     && (iVar1 = *(int *)((int)this + uVar3 * 4 + 0x3f54), iVar1 != 0)) {
    uVar2 = (uint)(byte)(*(char *)(iVar1 + 0x82) + 0x70);
    *(char *)(uVar2 + (int)this) = *(char *)(uVar2 + (int)this) + -1;
    _Memory = *(void **)((int)this + uVar3 * 4 + 0x3f54);
    *(undefined4 *)((int)this + uVar3 * 4 + 0x2014) = 0;
    if (_Memory != (void *)0x0) {
      FUN_00489540((int)_Memory);
      _free(_Memory);
    }
    *(undefined4 *)((int)this + uVar3 * 4 + 0x3f54) = 0;
    FUN_00467490((int)this);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x004677d0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f0a0
 * Name: FUN_0049f0a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0049f0a0(void *this,byte *param_1)

{
  void *_Memory;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0049ed40(this,param_1);
  if (iVar1 < 0) {
    return 0;
  }
  _Memory = *(void **)(iVar1 * 0x3d + 0x39 + (int)this);
  if (_Memory != (void *)0x0) {
    _free(_Memory);
  }
  puVar3 = (undefined4 *)(iVar1 * 0x3d + (int)this);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  *(undefined4 *)((int)this + iVar1 * 4 + 0x1dc90) = 0;
  FUN_0049ece0((int)this);
  return 1;
}


/* END FUNCTION 0x0049f0a0 */

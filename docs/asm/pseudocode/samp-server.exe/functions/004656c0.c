/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004656c0
 * Name: FUN_004656c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_004656c0(void *this,ushort param_1,ushort param_2)

{
  void *_Memory;
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = (uint)param_2;
  if (*(int *)((int)this + uVar3 * 4 + 8000000) != 0) {
    iVar1 = (param_1 + 0x3e9) * 2000 + uVar3;
    _Memory = *(void **)((int)this + iVar1 * 4);
    if (_Memory != (void *)0x0) {
      *(undefined4 *)((int)this + ((uint)param_1 * 2000 + uVar3) * 4) = 0;
      FUN_0049d870((int)_Memory);
      _free(_Memory);
      *(undefined4 *)((int)this + iVar1 * 4) = 0;
      iVar1 = 0;
      piVar2 = (int *)((int)this + uVar3 * 4);
      do {
        if (*piVar2 != 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 2000;
      } while (iVar1 < 1000);
      *(undefined4 *)((int)this + uVar3 * 4 + 8000000) = 0;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004656c0 */

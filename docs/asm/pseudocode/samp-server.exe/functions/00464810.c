/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00464810
 * Name: FUN_00464810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00464810(void *this,ushort param_1)

{
  void *_Memory;
  uint uVar1;
  
  if (((param_1 < 1000) && (uVar1 = (uint)param_1, *(int *)((int)this + uVar1 * 4 + 4000) != 0)) &&
     (_Memory = *(void **)((int)this + uVar1 * 4 + 8000), _Memory != (void *)0x0)) {
    FUN_0048f260((int)_Memory);
    _free(_Memory);
    *(undefined4 *)((int)this + uVar1 * 4 + 4000) = 0;
    *(undefined4 *)((int)this + uVar1 * 4 + 8000) = 0;
    FUN_00464540((int)this);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00464810 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004657b0
 * Name: FUN_004657b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_004657b0(void *this,ushort param_1)

{
  void *_Memory;
  uint uVar1;
  
  if (((param_1 < 2000) && (uVar1 = (uint)param_1, *(int *)((int)this + uVar1 * 4 + 0xf44340) != 0))
     && (_Memory = *(void **)((int)this + uVar1 * 4 + 0xf46280), _Memory != (void *)0x0)) {
    *(undefined4 *)((int)this + uVar1 * 4 + 0xf44340) = 0;
    FUN_0049d870((int)_Memory);
    _free(_Memory);
    *(undefined4 *)((int)this + uVar1 * 4 + 0xf46280) = 0;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x004657b0 */

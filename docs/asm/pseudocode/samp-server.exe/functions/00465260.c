/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465260
 * Name: FUN_00465260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00465260(void *this,byte param_1)

{
  void *_Memory;
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if ((*(int *)((int)this + uVar1 * 4 + 0x200) != 0) &&
     (_Memory = *(void **)((int)this + uVar1 * 4), _Memory != (void *)0x0)) {
    *(undefined4 *)((int)this + uVar1 * 4 + 0x200) = 0;
    _free(_Memory);
    *(undefined4 *)((int)this + uVar1 * 4) = 0;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00465260 */

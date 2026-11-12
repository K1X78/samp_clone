/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451f50
 * Name: FUN_00451f50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00451f50(void *this,int param_1)

{
  int *this_00;
  uint uVar1;
  
  if (param_1 != 0) {
    this_00 = (int *)((int)this + 0x3b8);
    uVar1 = FUN_00450960(this_00,param_1);
    if (uVar1 != 0xffffffff) {
      (**(code **)(**(int **)(*this_00 + uVar1 * 4) + 4))(this);
      *(undefined4 *)(*this_00 + uVar1 * 4) =
           *(undefined4 *)(*this_00 + -4 + *(int *)((int)this + 0x3bc) * 4);
      *(int *)((int)this + 0x3bc) = *(int *)((int)this + 0x3bc) + -1;
    }
  }
  return;
}


/* END FUNCTION 0x00451f50 */

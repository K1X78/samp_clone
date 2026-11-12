/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483ee0
 * Name: FUN_00483ee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483ee0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)((int)this + 0x2cdd) = 1;
  uVar1 = thunk_FUN_0044e910();
  *(int *)((int)this + 0x2ce1) = (int)uVar1;
  *(undefined4 *)((int)this + 0x2ce5) = param_1;
  *(undefined4 *)((int)this + 0x2ce9) = param_2;
  *(undefined4 *)((int)this + 0x2ced) = param_3;
  return;
}


/* END FUNCTION 0x00483ee0 */

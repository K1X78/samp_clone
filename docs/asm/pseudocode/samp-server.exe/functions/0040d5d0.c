/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040d5d0
 * Name: FUN_0040d5d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0040d5d0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint *in_EAX;
  
  uVar1 = *(undefined4 *)((int)this + 0x14);
  FUN_0040d510(in_EAX);
  *param_1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}


/* END FUNCTION 0x0040d5d0 */

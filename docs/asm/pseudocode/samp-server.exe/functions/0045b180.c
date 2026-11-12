/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b180
 * Name: FUN_0045b180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0045b180(void *this,undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  
  *(undefined8 *)((int)this + 0x718) = param_1;
  *(int *)((int)this + 0x720) = param_2;
  *(int *)((int)this + 0x724) = param_3;
  uVar1 = (param_2 + param_3) * 2;
  if (*(uint *)((int)this + 0x2d8) < uVar1) {
    *(uint *)((int)this + 0x2d8) = uVar1;
  }
  return;
}


/* END FUNCTION 0x0045b180 */

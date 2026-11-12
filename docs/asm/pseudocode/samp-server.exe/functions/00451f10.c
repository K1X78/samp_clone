/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451f10
 * Name: FUN_00451f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00451f10(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00450960((void *)((int)this + 0x3b8),(int)param_1);
  if (uVar1 == 0xffffffff) {
    FUN_0045b5f0((void *)((int)this + 0x3b8),param_1);
    (**(code **)*param_1)(this);
  }
  return;
}


/* END FUNCTION 0x00451f10 */

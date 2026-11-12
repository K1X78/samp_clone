/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482160
 * Name: FUN_00482160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00482160(void *this,uint param_1)

{
  undefined4 uVar1;
  
  if (*(uint *)((int)this + 4) <= param_1) {
    return param_1 & 0xffffff00;
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = 0;
  uVar1 = FUN_00481910(this);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


/* END FUNCTION 0x00482160 */

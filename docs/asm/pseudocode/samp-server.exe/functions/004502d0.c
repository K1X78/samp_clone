/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004502d0
 * Name: FUN_004502d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_004502d0(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x28))();
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffff00;
  }
  if (param_1 < 0x200) {
    *(undefined4 *)((int)this + 0xc0c) = 0x200;
    return 0x201;
  }
  if (0x5d4 < param_1) {
    param_1 = 0x5d4;
  }
  *(int *)((int)this + 0xc0c) = param_1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


/* END FUNCTION 0x004502d0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dc0d0
 * Name: FUN_100dc0d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100dc0d0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = thunk_FUN_100e26c0(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_100d85b0(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_100cd750(*(undefined4 *)(param_1 + 0x198 + param_2 * 4),0xffffffff,0xffffffff,0);
      if (((int)uVar2 < 1) || ((uVar2 & 1) == 0)) {
        return 0;
      }
    }
  }
  return 1;
}


/* END FUNCTION 0x100dc0d0 */

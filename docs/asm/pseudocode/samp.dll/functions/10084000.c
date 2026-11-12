/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10084000
 * Name: FUN_10084000
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10084000(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 0x80070057;
  }
  uVar1 = param_2 - 1;
  uVar2 = FID_conflict_vswprintf(param_1,uVar1,param_3,param_4);
  if (((int)uVar2 < 0) || (uVar1 < uVar2)) {
    uVar3 = 0x8007007a;
    *(undefined2 *)(param_1 + uVar1 * 2) = 0;
  }
  else {
    uVar3 = 0;
    if (uVar2 == uVar1) {
      *(undefined2 *)(param_1 + uVar1 * 2) = 0;
      return uVar3;
    }
  }
  return uVar3;
}


/* END FUNCTION 0x10084000 */

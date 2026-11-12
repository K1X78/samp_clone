/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e32a0
 * Name: FUN_100e32a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e32a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100d8500();
  *(undefined4 *)(param_1 + 0x744) = param_3;
  iVar1 = *(int *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x740) = param_2;
  if ((-1 < iVar1) && ((0 < iVar1 || (*(int *)(param_1 + 0x220) != 0)))) {
    iVar1 = FUN_100e3180(param_2,param_3,*(undefined4 *)(param_1 + 0x7b8),
                         *(undefined4 *)(param_1 + 0x7bc),*(int *)(param_1 + 0x220),iVar1,
                         *(undefined4 *)(param_1 + 0x7ac),*(undefined4 *)(param_1 + 0x7b0),uVar2);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x7ac) = uVar2;
      *(undefined4 *)(param_1 + 0x7b8) = param_2;
      *(undefined4 *)(param_1 + 0x7bc) = param_3;
    }
  }
  return;
}


/* END FUNCTION 0x100e32a0 */

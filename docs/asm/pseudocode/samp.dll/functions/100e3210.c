/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e3210
 * Name: FUN_100e3210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e3210(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100d8500();
  *(undefined4 *)(param_1 + 0x73c) = param_3;
  iVar1 = *(int *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x738) = param_2;
  if ((-1 < iVar1) && ((0 < iVar1 || (*(int *)(param_1 + 0x228) != 0)))) {
    iVar1 = FUN_100e3180(param_2,param_3,*(undefined4 *)(param_1 + 0x7c8),
                         *(undefined4 *)(param_1 + 0x7cc),*(int *)(param_1 + 0x228),iVar1,
                         *(undefined4 *)(param_1 + 0x7c0),*(undefined4 *)(param_1 + 0x7c4),uVar2);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x7c0) = uVar2;
      *(undefined4 *)(param_1 + 0x7c8) = param_2;
      *(undefined4 *)(param_1 + 0x7cc) = param_3;
    }
  }
  return;
}


/* END FUNCTION 0x100e3210 */

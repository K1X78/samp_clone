/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e43c0
 * Name: FUN_100e43c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e43c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (*(code *)param_1[1])(param_2,param_3,param_1[4]);
    for (piVar1 = *(int **)(iVar2 * 0x10 + *param_1); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[2]) {
      iVar2 = *piVar1;
      iVar3 = (*(code *)param_1[2])(iVar2 + 0x14,*(undefined4 *)(iVar2 + 0x10),param_2,param_3);
      if (iVar3 != 0) {
        return *(undefined4 *)(iVar2 + 0xc);
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100e43c0 */

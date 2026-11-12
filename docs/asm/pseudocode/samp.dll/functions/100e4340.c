/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4340
 * Name: FUN_100e4340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100e4340(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*(code *)param_1[1])(param_2,param_3,param_1[4]);
  iVar1 = *param_1;
  piVar2 = *(int **)(iVar3 * 0x10 + iVar1);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    iVar4 = (*(code *)param_1[2])(*piVar2 + 0x14,*(undefined4 *)(*piVar2 + 0x10),param_2,param_3);
    if (iVar4 != 0) break;
    piVar2 = (int *)piVar2[2];
  }
  FUN_100e89e0(iVar3 * 0x10 + iVar1,piVar2,param_1);
  param_1[5] = param_1[5] + -1;
  return 0;
}


/* END FUNCTION 0x100e4340 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10059440
 * Name: FUN_10059440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10059440(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_194;
  undefined4 local_190 [100];
  
  if (param_2 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    return 1;
  }
  if (param_2 == 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      return 0;
    }
  }
  else {
    puVar3 = param_1;
    puVar4 = local_190;
    for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_1;
    for (iVar2 = 100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_194 = 0;
    iVar2 = 99;
    piVar1 = (int *)register0x00000010;
    do {
      if (piVar1[-1] != 0) break;
      if (piVar1[-2] != 0) {
        iVar2 = iVar2 + -1;
        break;
      }
      if (piVar1[-3] != 0) {
        iVar2 = iVar2 + -2;
        break;
      }
      iVar2 = iVar2 + -3;
      piVar1 = piVar1 + -3;
    } while (0 < iVar2);
    for (; -1 < iVar2; iVar2 = iVar2 + -1) {
      FUN_10058620(local_194,local_190[iVar2],param_2,param_1 + iVar2,&local_194);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_194;
    }
  }
  return 0;
}


/* END FUNCTION 0x10059440 */

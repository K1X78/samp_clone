/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100293e0
 * Name: FUN_100293e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100293e0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  char local_d;
  undefined1 local_c [8];
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    return 0;
  }
  local_4 = 0;
  local_d = '\0';
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    cVar3 = FUN_10027310(param_2,iVar1,&param_2);
    if (cVar3 == '\0') {
      return 0;
    }
    *param_3 = *(undefined4 *)(iVar1 + 0x45 + param_2 * 4);
    FUN_10027290(param_2,*(undefined4 *)(param_1 + 0x10));
    if (*(int *)(*(int *)(param_1 + 0x10) + 1) == 0) {
      FUN_10028310(*(int *)(param_1 + 0x10));
      **(undefined4 **)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      return 1;
    }
  }
  else {
    cVar3 = FUN_10028ff0(param_2,iVar1,&local_d,*(undefined4 *)(iVar1 + 5),local_c,param_3);
    if (cVar3 == '\0') {
      return 0;
    }
    if ((local_d != '\0') &&
       (puVar2 = *(undefined4 **)(param_1 + 0x10), *(int *)((int)puVar2 + 1) == 0)) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)puVar2 + 0x8d);
      FUN_10028310(puVar2);
      *puVar2 = 0;
    }
  }
  return 1;
}


/* END FUNCTION 0x100293e0 */

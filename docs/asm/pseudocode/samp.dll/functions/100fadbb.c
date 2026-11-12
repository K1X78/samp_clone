/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fadbb
 * Name: exception
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall exception(undefined4 *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_1012d0d8;
  iVar1 = *(int *)(param_2 + 8);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    param_1[1] = *(undefined4 *)(param_2 + 4);
  }
  else {
    sVar2 = _strlen(*(char **)(param_2 + 4));
    pvVar3 = _malloc(sVar2 + 1);
    param_1[1] = pvVar3;
    if (pvVar3 != (void *)0x0) {
      FUN_10103c90(pvVar3,*(undefined4 *)(param_2 + 4));
    }
  }
  return param_1;
}


/* END FUNCTION 0x100fadbb */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004170e0
 * Name: FUN_004170e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ulonglong __thiscall FUN_004170e0(void *this,int *param_1,char *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (*param_2 == -0x68) {
    uVar1 = FUN_004106c0(this,param_1);
    return uVar1;
  }
  uVar1 = FUN_004170e0(this,param_1,*(char **)(param_2 + 0xc));
  uVar2 = FUN_004170e0(*(void **)(param_2 + 8),param_1,*(void **)(param_2 + 8));
  if ((param_2[3] & 8U) != 0) {
    uVar3 = FUN_00410700(param_1);
    return uVar3 | uVar1 | uVar2;
  }
  uVar3 = FUN_00417170(param_1,*(int **)(param_2 + 0x10));
  return uVar1 | uVar2 | uVar3;
}


/* END FUNCTION 0x004170e0 */

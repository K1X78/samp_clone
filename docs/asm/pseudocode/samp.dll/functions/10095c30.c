/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10095c30
 * Name: FUN_10095c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10095c30(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  if (param_2 < 0) {
    return 0x80070057;
  }
  if (param_2 == 0) {
    if ((void *)*param_1 != (void *)0x0) {
      _free((void *)*param_1);
      *param_1 = 0;
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return 0;
  }
  if (((void *)*param_1 == (void *)0x0) || ((int)param_1[2] < param_2)) {
    iVar1 = param_1[2];
    iVar3 = 0x10;
    if (iVar1 != 0) {
      iVar3 = iVar1;
    }
    if (param_2 <= iVar1 + iVar3) {
      param_2 = iVar1 + iVar3;
    }
    pvVar2 = _realloc((void *)*param_1,param_2 * 0x114);
    if (pvVar2 == (void *)0x0) {
      return 0x8007000e;
    }
    *param_1 = pvVar2;
    param_1[2] = param_2;
  }
  return 0;
}


/* END FUNCTION 0x10095c30 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044ec0
 * Name: FUN_10044ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __fastcall FUN_10044ec0(int *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  uVar1 = param_1[1];
  if ((uint)param_1[2] < uVar1) {
    iVar2 = param_1[3] - uVar1;
  }
  else {
    iVar2 = -uVar1;
  }
  if (param_1[2] + iVar2 == 0) {
    pvVar3 = operator_new(0x37);
    return pvVar3;
  }
  param_1[1] = uVar1 + 1;
  if (uVar1 + 1 == param_1[3]) {
    param_1[1] = 0;
  }
  if (param_1[1] == 0) {
    return *(void **)(*param_1 + -4 + param_1[3] * 4);
  }
  return *(void **)(*param_1 + -4 + param_1[1] * 4);
}


/* END FUNCTION 0x10044ec0 */

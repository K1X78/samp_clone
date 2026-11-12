/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000c4e0
 * Name: FUN_1000c4e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1000c4e0(int *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    if ((void *)*param_1 != (void *)0x0) {
      _free((void *)*param_1);
      *param_1 = 0;
    }
    param_1[1] = 0;
    return 1;
  }
  pvVar1 = _realloc((void *)*param_1,param_2 * 4);
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  *param_1 = (int)pvVar1;
  uVar2 = param_1[1];
  if (uVar2 < param_2) {
    do {
      *(undefined4 *)(*param_1 + uVar2 * 4) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
  }
  param_1[1] = param_2;
  return 1;
}


/* END FUNCTION 0x1000c4e0 */

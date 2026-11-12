/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f280
 * Name: FUN_1001f280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int * __thiscall FUN_1001f280(int *param_1,undefined4 *param_2,uint param_3,char param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  *param_1 = param_3 * 8;
  param_1[2] = 0;
  *(char *)(param_1 + 4) = param_4;
  param_1[1] = param_3 * 8;
  if (param_4 == '\0') {
    param_1[3] = (int)param_2;
    return param_1;
  }
  if (param_3 != 0) {
    if (param_3 < 0x100) {
      puVar1 = (undefined4 *)((int)param_1 + 0x11);
      param_1[1] = 0x800;
    }
    else {
      puVar1 = _malloc(param_3);
    }
    uVar2 = param_3 >> 2;
    param_1[3] = (int)puVar1;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}


/* END FUNCTION 0x1001f280 */

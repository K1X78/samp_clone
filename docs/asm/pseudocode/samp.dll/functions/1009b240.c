/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b240
 * Name: FUN_1009b240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1009b240(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar3 = param_1[1];
  if (iVar3 == 0xffff) {
    return 0;
  }
  if (((param_2 == -1) || (param_2 < iVar3 * 2)) && (param_2 = iVar3, iVar3 == 0)) {
    uVar5 = 0x100;
  }
  else {
    uVar5 = param_2 * 2;
    if (0xffff < (int)uVar5) {
      uVar5 = 0xffff;
    }
  }
  puVar1 = operator_new(uVar5 * 2);
  if (puVar1 != (undefined4 *)0x0) {
    if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
      puVar6 = puVar1;
      for (uVar4 = (uVar5 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar5 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = 0;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *param_1 = puVar1;
      param_1[1] = uVar5;
      return 1;
    }
    uVar4 = param_1[1];
    puVar6 = (undefined4 *)*param_1;
    puVar7 = puVar1;
    for (uVar2 = (uVar4 & 0x7fffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar3 = (uVar4 & 1) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    _free((void *)*param_1);
    *param_1 = puVar1;
    param_1[1] = uVar5;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x1009b240 */

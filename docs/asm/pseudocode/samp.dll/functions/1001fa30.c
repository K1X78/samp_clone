/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001fa30
 * Name: FUN_1001fa30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_1001fa30(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint in_EAX;
  uint3 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if ((int)param_3 < 1) {
    return in_EAX & 0xffffff00;
  }
  FUN_1001f440();
  iVar1 = param_3 * 8;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (*param_1 < param_1[2] + iVar1) {
    return (uint)uVar2 << 8;
  }
  puVar4 = (undefined4 *)((param_1[2] >> 3) + param_1[3]);
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  param_1[2] = param_1[2] + iVar1;
  return CONCAT31(uVar2,1);
}


/* END FUNCTION 0x1001fa30 */

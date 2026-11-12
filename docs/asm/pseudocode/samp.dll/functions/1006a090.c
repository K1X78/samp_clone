/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a090
 * Name: FUN_1006a090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1006a090(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)param_1 + 0x137) = 0;
  *(undefined4 *)((int)param_1 + 0x13b) = 0;
  *(undefined4 *)((int)param_1 + 0x13f) = 0;
  *(undefined4 *)((int)param_1 + 0x143) = 0;
  *(undefined4 *)((int)param_1 + 0x14b) = 0;
  *(undefined4 *)((int)param_1 + 0x14f) = 0;
  *(undefined4 *)((int)param_1 + 0x153) = 0;
  *param_1 = 1;
  *(undefined4 *)((int)param_1 + 0x147) = param_2;
  FUN_10069b90();
  puVar1 = param_1;
  for (iVar2 = 0x49; puVar3 = puVar1 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar1 = puVar3;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar1 + 6) = 0;
  return param_1;
}


/* END FUNCTION 0x1006a090 */

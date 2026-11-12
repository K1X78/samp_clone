/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10068e10
 * Name: FUN_10068e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_10068e10(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = param_2;
  param_1[0x538] = 0;
  param_1[0x537] = 0;
  param_1[0x6bd] = 0;
  param_1[2] = 0;
  param_1[0x6bc] = 0xffffffff;
  puVar2 = (undefined4 *)((int)param_1 + 0x1565);
  for (iVar1 = 0x142; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = param_1 + 0x539;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x1a6f);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  return param_1;
}


/* END FUNCTION 0x10068e10 */

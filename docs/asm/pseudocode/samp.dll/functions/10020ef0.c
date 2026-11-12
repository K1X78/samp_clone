/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020ef0
 * Name: FUN_10020ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10020ef0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  if (iVar1 + 1 == param_1[3]) {
    param_1[1] = 0;
  }
  if (param_1[1] == 0) {
    puVar2 = (undefined4 *)(param_1[3] * 7 + -7 + *param_1);
  }
  else {
    puVar2 = (undefined4 *)(param_1[1] * 7 + -7 + *param_1);
  }
  *param_2 = *puVar2;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(puVar2 + 1);
  *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)((int)puVar2 + 6);
  return;
}


/* END FUNCTION 0x10020ef0 */

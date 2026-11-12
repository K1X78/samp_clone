/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100970c0
 * Name: FUN_100970c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100970c0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_10095ba0(param_1[1] + 1);
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(param_1[1] * 0x130 + *param_1);
    for (iVar1 = 0x4c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = param_1[1] + 1;
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x100970c0 */

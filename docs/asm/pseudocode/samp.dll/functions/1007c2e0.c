/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007c2e0
 * Name: FUN_1007c2e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1007c2e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_1007bbd0(param_1[1] + 1);
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(param_1[1] * 0x11 + *param_1);
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_2 + 4);
    param_1[1] = param_1[1] + 1;
    iVar1 = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x1007c2e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100384e0
 * Name: FUN_100384e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100384e0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if ((cVar1 == '\0') && (*(char *)((int)param_1 + 0xc05) != '\0')) {
    puVar3 = (undefined4 *)((int)param_1 + 0x3d1);
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x100384e0 */

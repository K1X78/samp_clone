/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de5a0
 * Name: FUN_100de5a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100de5a0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((code *)param_1[7] != (code *)0x0) {
    (*(code *)param_1[7])(param_1[8]);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_1;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[3] = 0;
  FUN_100d9bb0(param_1[10]);
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    FUN_100d9bb0(param_1[0xb]);
  }
  (*(code *)PTR__free_101554bc)(param_1[0xc]);
  param_1[0xc] = 0;
  (*(code *)PTR__free_101554bc)(param_1[0xe]);
  param_1[0xe] = 0;
  (*(code *)PTR__free_101554bc)(param_1[0xd]);
  uVar1 = *param_1;
  param_1[0xd] = 0;
  puVar3 = param_1;
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_1 = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}


/* END FUNCTION 0x100de5a0 */

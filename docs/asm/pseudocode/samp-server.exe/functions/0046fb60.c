/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046fb60
 * Name: FUN_0046fb60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0046fb60(int *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint local_38;
  short local_34 [10];
  size_t local_20 [8];
  
  puVar1 = param_2;
  puVar4 = &local_38;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00401020(local_34);
  FUN_00401020(&local_38);
  FUN_00401020(local_20);
  if (local_34[0] != -0xe20) {
    return 0x11;
  }
  puVar1 = _malloc(local_20[0]);
  if (puVar1 == (uint *)0x0) {
    return 0x10;
  }
  puVar4 = puVar1;
  for (uVar3 = local_38 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  for (local_38 = local_38 & 3; local_38 != 0; local_38 = local_38 - 1) {
    *(char *)puVar4 = (char)*param_2;
    param_2 = (uint *)((int)param_2 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  piVar5 = param_1;
  for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  iVar2 = FUN_00401320(param_1,(int)puVar1);
  if (iVar2 != 0) {
    _free(puVar1);
    *param_1 = 0;
  }
  return iVar2;
}


/* END FUNCTION 0x0046fb60 */

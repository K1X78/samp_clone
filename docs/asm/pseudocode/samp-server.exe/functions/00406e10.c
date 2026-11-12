/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406e10
 * Name: FUN_00406e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00406e10(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *local_a0;
  uint local_9c [17];
  byte local_58 [88];
  
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_a0);
  FUN_00403350((int)local_58,local_a0,0,0x56);
  uVar1 = FUN_00406c90(local_58);
  FUN_00403100(param_1,*(int *)(param_2 + 4),(int *)&local_a0);
  uVar2 = *(int *)(param_2 + 0xc) << 2;
  uVar3 = uVar1;
  if (uVar2 < uVar1) {
    uVar3 = uVar2;
  }
  puVar4 = local_9c;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *local_a0 = *puVar4;
    puVar4 = puVar4 + 1;
    local_a0 = local_a0 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)local_a0 = (char)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    local_a0 = (uint *)((int)local_a0 + 1);
  }
  return uVar1;
}


/* END FUNCTION 0x00406e10 */

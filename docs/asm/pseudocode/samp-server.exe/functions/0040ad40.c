/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ad40
 * Name: FUN_0040ad40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040ad40(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int local_a0 [40];
  
  piVar4 = local_a0;
  for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 8);
  while (iVar3 != 0) {
    iVar3 = 0;
    puVar1 = *(uint **)(param_1 + 8);
    *(uint *)(param_1 + 8) = puVar1[2];
    puVar1[2] = 0;
    if (local_a0[0] != 0) {
      piVar4 = local_a0;
      do {
        puVar1 = (uint *)FUN_0040acd0(puVar1);
        piVar5 = piVar4 + 1;
        *piVar4 = 0;
        iVar3 = iVar3 + 1;
        piVar4 = piVar5;
      } while (*piVar5 != 0);
    }
    local_a0[iVar3] = (int)puVar1;
    iVar3 = *(int *)(param_1 + 8);
  }
  uVar6 = 0;
  do {
    uVar2 = FUN_0040acd0((uint *)local_a0[uVar6]);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x28);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  return;
}


/* END FUNCTION 0x0040ad40 */

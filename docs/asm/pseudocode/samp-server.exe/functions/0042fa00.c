/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042fa00
 * Name: FUN_0042fa00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0042fa00(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_1 != (int *)0x0) {
    FUN_00407e50(*(int *)(param_1[5] + 0x44));
    FUN_0040c2c0();
    iVar1 = *(int *)(param_1[5] + 0x44);
    if ((*param_1 != 0) && (FUN_00407e50(*(int *)(*param_1 + 0x44)), *param_1 != 0)) {
      *(int *)(param_1[6] + 0x10) = *(int *)(param_1[6] + 0x10) + -1;
    }
    if (param_1[10] != 0) {
      FUN_0040d020();
      piVar4 = (int *)FUN_0040ba50();
      piVar2 = (int *)*piVar4;
      while (piVar2 != param_1) {
        iVar3 = *piVar4;
        piVar4 = (int *)(iVar3 + 0x2c);
        piVar2 = *(int **)(iVar3 + 0x2c);
      }
      *piVar4 = param_1[0xb];
    }
    FUN_0042ad10(param_1[1]);
    uVar5 = (param_1[7] == 0x65) - 1 & param_1[7];
    FUN_0042f990(uVar5,(undefined **)0x0);
    if (*param_1 != 0) {
      FUN_00407e90(*(int *)(*param_1 + 0x44));
    }
    FUN_0040c340();
    if (*param_1 != 0) {
      FUN_004080d0((int)param_1);
    }
    FUN_00407e90(iVar1);
    return uVar5;
  }
  return 0;
}


/* END FUNCTION 0x0042fa00 */

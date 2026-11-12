/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ed9c0
 * Name: FUN_100ed9c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ed9c0(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x700) == 0) {
    FUN_100d8ba0(param_1,"No URL set!");
    return 3;
  }
  if (*(int *)(param_1 + 0x704) != 0) {
    (*(code *)PTR__free_101554bc)(*(int *)(param_1 + 0x700));
    *(undefined4 *)(param_1 + 0x700) = 0;
    *(undefined4 *)(param_1 + 0x704) = 0;
  }
  *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_1 + 0x604);
  iVar3 = FUN_100cf130(param_1,*(undefined4 *)(param_1 + 0x4c4));
  if (iVar3 != 0) {
    return iVar3;
  }
  *(undefined4 *)(param_1 + 0x4ac0) = *(undefined4 *)(param_1 + 0x6a8);
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x4868) = 0;
  *(undefined4 *)(param_1 + 0x48a8) = 0;
  *(undefined4 *)(param_1 + 0x4ac4) = 0;
  *(undefined4 *)(param_1 + 0x498c) = 0;
  *(undefined4 *)(param_1 + 0x495c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x4974) = *(undefined4 *)(param_1 + 0x170);
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x4b7c));
  *(undefined4 *)(param_1 + 0x4b7c) = 0;
  if (*(int *)(param_1 + 1000) == 5) {
    iVar3 = *(int *)(param_1 + 0x210);
    *(undefined4 *)(param_1 + 0x4b04) = *(undefined4 *)(param_1 + 0x214);
  }
  else {
    *(undefined4 *)(param_1 + 0x4b04) = *(undefined4 *)(param_1 + 0x194);
    pcVar4 = *(char **)(param_1 + 0x188);
    *(uint *)(param_1 + 0x4b00) = *(uint *)(param_1 + 400);
    if ((pcVar4 == (char *)0x0) ||
       ((*(uint *)(param_1 + 400) & *(uint *)(param_1 + 0x4b04)) != 0xffffffff)) goto LAB_100edaeb;
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    iVar3 = (int)pcVar4 - (int)pcVar1;
    *(undefined4 *)(param_1 + 0x4b04) = 0;
  }
  *(int *)(param_1 + 0x4b00) = iVar3;
LAB_100edaeb:
  if (*(int *)(param_1 + 0x710) != 0) {
    FUN_100db3b0(param_1);
  }
  iVar3 = 0;
  if ((*(int *)(param_1 + 0x714) == 0) || (iVar3 = FUN_100d0110(param_1), iVar3 == 0)) {
    *(undefined4 *)(param_1 + 0x48b0) = 1;
    FUN_100d9190(param_1);
    FUN_100e3b60(param_1);
    FUN_100e3120(param_1);
    if (*(int *)(param_1 + 0x1f8) != 0) {
      FUN_100d66d0(param_1,*(int *)(param_1 + 0x1f8),8);
    }
    if (*(int *)(param_1 + 0x1fc) != 0) {
      FUN_100d66d0(param_1,*(int *)(param_1 + 0x1fc),2);
    }
    *(uint *)(param_1 + 0x4960) = *(uint *)(param_1 + 0x4960) & *(uint *)(param_1 + 0x495c);
    *(uint *)(param_1 + 0x4978) = *(uint *)(param_1 + 0x4978) & *(uint *)(param_1 + 0x4974);
    if ((*(int *)(param_1 + 0x4ac0) != 0) && (*(int *)(param_1 + 0x4b28) < 1)) {
      iVar5 = FUN_100eb5f0(param_1 + 0x4b28);
      iVar3 = 0;
      if (iVar5 != 0) {
        return 0x1b;
      }
    }
  }
  return iVar3;
}


/* END FUNCTION 0x100ed9c0 */

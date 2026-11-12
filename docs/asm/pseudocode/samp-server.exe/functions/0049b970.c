/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049b970
 * Name: FUN_0049b970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0049b970(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 3;
  piVar1 = (int *)(param_1 + 8);
  do {
    if (*piVar1 != 0) break;
    uVar5 = uVar5 - 1;
    piVar1 = piVar1 + -1;
  } while (uVar5 != 0);
  uVar3 = 3;
  piVar1 = (int *)(param_2 + 8);
  do {
    if (*piVar1 != 0) break;
    uVar3 = uVar3 - 1;
    piVar1 = piVar1 + -1;
  } while (uVar3 != 0);
  uVar4 = 0;
  if (uVar5 != 0) {
    do {
      if (*(int *)(param_1 + uVar4 * 4) != 0) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      if (*(int *)(param_2 + uVar2 * 4) != 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  FUN_0049b7c0(param_1,param_2,param_3,uVar4,uVar5,uVar2,uVar3);
  return;
}


/* END FUNCTION 0x0049b970 */

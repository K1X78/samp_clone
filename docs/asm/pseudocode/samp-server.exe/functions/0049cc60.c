/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049cc60
 * Name: FUN_0049cc60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0049cc60(void *this,int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = (int *)((int)this + 0x18c);
  uVar6 = 100;
  do {
    if (*piVar1 != 0) break;
    uVar6 = uVar6 - 1;
    piVar1 = piVar1 + -1;
  } while (uVar6 != 0);
  uVar4 = 100;
  piVar1 = (int *)(param_1 + 0x18c);
  do {
    if (*piVar1 != 0) break;
    uVar4 = uVar4 - 1;
    piVar1 = piVar1 + -1;
  } while (uVar4 != 0);
  if ((uVar6 == 0) || (uVar4 == 0)) {
    for (iVar3 = 200; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
    return;
  }
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      if (*(int *)((int)this + uVar5 * 4) != 0) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      if (*(int *)(param_1 + uVar2 * 4) != 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  if ((2 < uVar6 - uVar5) && (2 < uVar4 - uVar2)) {
    FUN_0049cc30((int)this,param_1,param_2);
    return;
  }
  FUN_0049b690((int)this,param_1,param_2,uVar5,uVar6,uVar2,uVar4);
  return;
}


/* END FUNCTION 0x0049cc60 */

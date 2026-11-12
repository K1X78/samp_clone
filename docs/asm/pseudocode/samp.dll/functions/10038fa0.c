/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038fa0
 * Name: FUN_10038fa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10038fa0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[2];
  param_1[3] = *(undefined4 *)(iVar1 + 0x2a);
  iVar3 = *(int *)(iVar1 + 0x2a);
  iVar4 = 1;
  if (iVar3 != iVar1) {
    do {
      iVar5 = iVar4;
      iVar3 = *(int *)(iVar3 + 0x2a);
      iVar4 = iVar5 + 1;
    } while (iVar3 != iVar1);
    if (8 < iVar4) {
      iVar5 = iVar5 + -7;
      do {
        uVar2 = *(undefined4 *)((int)param_1[3] + 0x2a);
        _free((void *)param_1[3]);
        iVar5 = iVar5 + -1;
        param_1[3] = uVar2;
      } while (iVar5 != 0);
    }
  }
  *(undefined4 *)(param_1[2] + 0x2a) = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar2;
  *param_1 = uVar2;
  param_1[1] = uVar2;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


/* END FUNCTION 0x10038fa0 */

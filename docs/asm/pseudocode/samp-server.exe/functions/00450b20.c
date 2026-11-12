/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450b20
 * Name: FUN_00450b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00450b20(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[2];
  param_1[3] = *(undefined4 *)(iVar1 + 0x120);
  iVar3 = *(int *)(iVar1 + 0x120);
  iVar4 = 1;
  if (iVar3 != iVar1) {
    do {
      iVar5 = iVar4;
      iVar3 = *(int *)(iVar3 + 0x120);
      iVar4 = iVar5 + 1;
    } while (iVar3 != iVar1);
    if (8 < iVar4) {
      iVar5 = iVar5 + -7;
      do {
        uVar2 = *(undefined4 *)((int)param_1[3] + 0x120);
        _free((void *)param_1[3]);
        iVar5 = iVar5 + -1;
        param_1[3] = uVar2;
      } while (iVar5 != 0);
    }
  }
  *(undefined4 *)(param_1[2] + 0x120) = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar2;
  *param_1 = uVar2;
  param_1[1] = uVar2;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


/* END FUNCTION 0x00450b20 */

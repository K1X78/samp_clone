/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00421970
 * Name: FUN_00421970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_00421970(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_ECX_01;
  byte bVar5;
  
  piVar1 = (int *)FUN_0041c720();
  iVar2 = *(int *)(in_EAX + 0x14);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(iVar2 + 0x20);
      iVar3 = iVar3 + 1;
    } while (iVar2 != 0);
  }
  while (iVar2 = iVar3, iVar3 = iVar2 + -1, -1 < iVar3) {
    if ((*(int *)(param_4 + iVar3 * 4) != 0) && (FUN_00414e70(iVar2 + param_2,0x46), param_7 != 0))
    {
      FUN_0040d660(extraout_ECX,0x10);
    }
  }
  iVar2 = FUN_0040ec00();
  FUN_00414dd0(0x1e,param_3 + 1,*(undefined4 *)(in_EAX + 0xc),iVar2);
  FUN_00416a70(piVar1);
  thunk_FUN_0040ea60(*(int *)(in_EAX + 0xc));
  if (*(char *)(param_1 + 0x13) == '\0') {
    bVar5 = (param_5 != 0) * '\x02' + 2U | 1;
  }
  else {
    bVar5 = 0;
  }
  if (param_6 != 0) {
    bVar5 = bVar5 | 8;
  }
  if (param_7 != 0) {
    bVar5 = bVar5 | 0x10;
  }
  FUN_00414dd0(0x37,param_2,iVar2,param_3);
  uVar4 = CONCAT31((int3)((uint)extraout_ECX_00 >> 8),*(char *)(param_1 + 0x13));
  if (*(char *)(param_1 + 0x13) == '\0') {
    FUN_00415110(-2,*(char **)(in_EAX + 4),piVar1);
    uVar4 = extraout_ECX_01;
  }
  FUN_0040d660(uVar4,bVar5);
  return;
}


/* END FUNCTION 0x00421970 */

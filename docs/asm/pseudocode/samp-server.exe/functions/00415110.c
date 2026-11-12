/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415110
 * Name: FUN_00415110
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00415110(int param_1,char *param_2,int *param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  
  iVar3 = param_3[5];
  iVar4 = *param_3;
  if ((iVar3 == 0) || (*(char *)(iVar4 + 0x1e) != '\0')) {
    if ((param_1 != -6) && (param_1 != -10)) {
      FUN_00414fb0((int)param_2,iVar4);
      return;
    }
  }
  else {
    if (in_EAX < 0) {
      in_EAX = param_3[3] + -1;
    }
    iVar1 = iVar3 + in_EAX * 0x14;
    FUN_00414fb0(*(int *)(iVar3 + 0x10 + in_EAX * 0x14),iVar4);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (param_1 == -0xe) {
      *(char **)(iVar1 + 0x10) = param_2;
      *(undefined1 *)(iVar1 + 1) = 0xf2;
      return;
    }
    if (param_2 == (char *)0x0) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
    if (param_1 != -6) {
      if (param_1 == -0x10) {
        *(char **)(iVar1 + 0x10) = param_2;
        *(undefined1 *)(iVar1 + 1) = 0xfa;
        return;
      }
      if (param_1 == -10) {
        *(char **)(iVar1 + 0x10) = param_2;
        *(undefined1 *)(iVar1 + 1) = 0xf6;
        FUN_004103a0();
        return;
      }
      if (param_1 < 0) {
        *(char **)(iVar1 + 0x10) = param_2;
        *(char *)(iVar1 + 1) = (char)param_1;
        return;
      }
      if (param_1 == 0) {
        FUN_00408380(param_2);
      }
      uVar6 = FUN_00412ab0();
      *(undefined4 *)(iVar1 + 0x10) = uVar6;
      *(undefined1 *)(iVar1 + 1) = 0xff;
      return;
    }
    uVar2 = *(ushort *)(param_2 + 6);
    uVar9 = (uint)uVar2;
    iVar3 = uVar9 * 5 + 0xc;
    pcVar5 = (char *)FUN_004125b0(iVar3);
    *(char **)(iVar1 + 0x10) = pcVar5;
    if (pcVar5 == (char *)0x0) {
      *(undefined1 *)(*param_3 + 0x1e) = 1;
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
    uVar7 = iVar3 - uVar9;
    pcVar10 = pcVar5;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *param_2;
      param_2 = param_2 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar10 = *(char **)(pcVar5 + 8);
    if (pcVar10 != (char *)0x0) {
      *(char **)(pcVar5 + 8) = pcVar5 + uVar9 * 4 + 0xc;
      pcVar5 = pcVar5 + uVar9 * 4 + 0xc;
      for (uVar8 = (uint)(uVar2 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar5 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar5 = pcVar5 + 1;
      }
    }
    *(undefined1 *)(iVar1 + 1) = 0xfa;
  }
  return;
}


/* END FUNCTION 0x00415110 */

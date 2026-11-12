/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00439300
 * Name: FUN_00439300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00439300(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int *in_EAX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar6;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int unaff_ESI;
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == 'L') {
    iVar3 = FUN_00437710(in_EAX,*(char **)(pcVar1 + 0xc),param_2);
    FUN_00410880(extraout_ECX,unaff_ESI);
    return iVar3;
  }
  if (*pcVar1 == 'I') {
    FUN_00414e70(0,10);
    FUN_00410880(extraout_ECX_00,unaff_ESI);
    return param_2;
  }
  iVar3 = FUN_004349d0(pcVar1,(int *)0x0);
  uVar2 = *(undefined4 *)(pcVar1 + 0x18);
  FUN_00414e70(uVar2,0x41);
  uVar6 = extraout_ECX_01;
  if (*(int *)(unaff_ESI + 0x34) == 0) {
    iVar4 = FUN_00414e90(extraout_ECX_01);
    *(int *)(unaff_ESI + 0x1c) = iVar4;
    uVar6 = extraout_ECX_02;
  }
  iVar4 = *(int *)(unaff_ESI + 0x34) + 1;
  *(int *)(unaff_ESI + 0x34) = iVar4;
  puVar5 = FUN_00412a50(uVar6,iVar4 * 8);
  *(undefined4 **)(unaff_ESI + 0x38) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    iVar4 = *(int *)(unaff_ESI + 0x34);
    puVar5[iVar4 * 2 + -2] = uVar2;
    if (iVar3 == 1) {
      iVar3 = FUN_00414e70(uVar2,0x3d);
    }
    else {
      iVar3 = FUN_00414dd0(0x1c,uVar2,0,param_2);
    }
    (puVar5 + iVar4 * 2 + -2)[1] = iVar3;
    FUN_00414e50(0x49);
    FUN_00410880(extraout_ECX_04,unaff_ESI);
    return param_2;
  }
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  FUN_00410880(extraout_ECX_03,unaff_ESI);
  return param_2;
}


/* END FUNCTION 0x00439300 */

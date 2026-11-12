/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406850
 * Name: FUN_00406850
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00406850(int *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 uVar6;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_EDX;
  int iVar7;
  int iVar8;
  int local_4;
  
  puVar3 = param_2;
  FUN_00403100(param_1,param_2[1],(int *)&param_2);
  FUN_004031d0(param_2,&local_4);
  uVar2 = puVar3[2];
  iVar8 = puVar3[3] - uVar2;
  if ((local_4 <= (int)uVar2) || (iVar8 < 1)) {
    return 0;
  }
  if (local_4 < (int)(iVar8 + uVar2)) {
    iVar8 = local_4 - uVar2;
  }
  iVar7 = uVar2 - 1;
  uVar6 = extraout_ECX;
  if (*param_2 < 0x1000000) {
    iVar5 = iVar7 * 4;
    iVar8 = (iVar8 + iVar7) * 4;
    do {
      iVar7 = iVar8 + 4;
      iVar8 = iVar8 + 4;
      iVar5 = iVar5 + 4;
      *(undefined4 *)(iVar5 + (int)param_2) = *(undefined4 *)(iVar7 + (int)param_2);
    } while (*(int *)(iVar5 + (int)param_2) != 0);
  }
  else {
    do {
      iVar7 = iVar7 + 1;
      pcVar4 = (char *)FUN_00406170(uVar6,(int)param_2);
      cVar1 = *pcVar4;
      pcVar4 = (char *)FUN_00406170(extraout_ECX_00,extraout_EDX);
      *pcVar4 = cVar1;
      uVar6 = extraout_ECX_01;
    } while (cVar1 != '\0');
    if (iVar7 == 0) {
      *param_2 = 0;
      return 1;
    }
  }
  return 1;
}


/* END FUNCTION 0x00406850 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004066c0
 * Name: FUN_004066c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004066c0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar6;
  uint uVar7;
  uint *local_8;
  uint *local_4;
  
  uVar2 = param_2;
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_8);
  FUN_00403100(param_1,*(int *)(uVar2 + 4),(int *)&local_4);
  FUN_004031d0(local_8,(int *)&param_2);
  if (*(int *)(uVar2 + 0xc) < 0) {
    *(undefined4 *)(uVar2 + 0xc) = 0;
  }
  else if ((int)param_2 < *(int *)(uVar2 + 0xc)) {
    *(uint *)(uVar2 + 0xc) = param_2;
  }
  iVar5 = *(int *)(uVar2 + 0x10);
  iVar1 = *(int *)(uVar2 + 0xc);
  if (iVar5 < iVar1) {
    *(int *)(uVar2 + 0x10) = iVar1;
  }
  else if ((int)param_2 < iVar5) {
    *(uint *)(uVar2 + 0x10) = param_2;
  }
  else if (iVar5 < iVar1) {
    *(int *)(uVar2 + 0xc) = iVar5;
  }
  param_2 = *(int *)(uVar2 + 0x10) - *(int *)(uVar2 + 0xc);
  if (*local_8 < 0x1000000) {
    uVar7 = *(int *)(uVar2 + 0x14) - 1;
    if ((int)uVar7 < (int)param_2) {
      param_2 = uVar7;
    }
    iVar5 = *(int *)(uVar2 + 4) + 3 + param_2 * 4;
  }
  else {
    iVar5 = *(int *)(uVar2 + 0x14) * 4;
    if (iVar5 - 1U < param_2) {
      param_2 = iVar5 - 1;
    }
    iVar5 = *(int *)(uVar2 + 4) + -1 + (param_2 + 4 & 0xfffffffc);
  }
  iVar5 = FUN_004061c0(iVar5);
  if (iVar5 == 0) {
    if (*local_8 < 0x1000000) {
      iVar5 = FUN_00406100(*(undefined4 *)(uVar2 + 0xc),local_4);
    }
    else {
      uVar2 = *(uint *)(uVar2 + 0xc);
      uVar7 = 0;
      uVar6 = extraout_ECX;
      while (((uVar2 & 3) != 0 && (1 < (int)param_2))) {
        puVar3 = (undefined1 *)FUN_00406170(uVar6,(int)local_8);
        puVar4 = (undefined1 *)FUN_00406170(extraout_ECX_00,(int)local_4);
        *puVar4 = *puVar3;
        uVar2 = uVar2 + 1;
        uVar7 = uVar7 + 1;
        uVar6 = param_2 - 1;
        param_2 = uVar6;
      }
      iVar5 = FUN_00405f60(local_4,uVar7,param_2);
    }
    if (iVar5 != 0) {
      uVar2 = FUN_004030f0((int)param_1,iVar5);
      return uVar2;
    }
    return param_2;
  }
  uVar2 = FUN_004030f0((int)param_1,10);
  return uVar2;
}


/* END FUNCTION 0x004066c0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004063a0
 * Name: FUN_004063a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_004063a0(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  uint *local_c;
  uint local_8;
  uint *local_4;
  
  uVar1 = param_2;
  FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_4);
  FUN_00403100(param_1,*(int *)(uVar1 + 4),(int *)&local_c);
  FUN_004031d0(local_4,(int *)&param_2);
  FUN_004031d0(local_c,(int *)&local_8);
  uVar3 = *local_c;
  if (uVar3 == 0) {
    uVar3 = *local_4;
  }
  iVar2 = *(int *)(uVar1 + 0xc);
  if (uVar3 < 0x1000000) {
    if (iVar2 + -1 < (int)(local_8 + param_2)) {
      param_2 = (iVar2 - local_8) - 1;
    }
    iVar2 = *(int *)(uVar1 + 4) + 3 + (local_8 + param_2) * 4;
  }
  else {
    if (iVar2 * 4 - 1U < local_8 + param_2) {
      param_2 = (iVar2 * 4 - local_8) - 1;
    }
    iVar2 = *(int *)(uVar1 + 4) + -1 + (local_8 + 4 + param_2 & 0xfffffffc);
  }
  iVar2 = FUN_004061c0(iVar2);
  if (iVar2 == 0) {
    if (uVar3 < 0x1000000) {
      iVar2 = FUN_00406100(extraout_ECX,local_c + local_8);
    }
    else {
      iVar2 = FUN_00405f60(local_c,local_8,param_2);
    }
    if (iVar2 == 0) {
      return param_2;
    }
    uVar3 = FUN_004030f0((int)param_1,iVar2);
    return uVar3;
  }
  uVar3 = FUN_004030f0((int)param_1,10);
  return uVar3;
}


/* END FUNCTION 0x004063a0 */

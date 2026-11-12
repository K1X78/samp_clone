/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004530f0
 * Name: FUN_004530f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004530f0(uint *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_10 [4];
  
  local_10[0] = *param_2;
  local_10[1] = param_2[1];
  local_10[2] = param_2[2];
  uVar4 = param_2[3];
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  iVar6 = 1;
  param_3[3] = param_1[3];
  local_10[3] = uVar4;
  if (((int)uVar4 < 0) || (uVar2 = FUN_00450ff0((int)param_3,(int)local_10), (char)uVar2 == '\0')) {
    uVar4 = FUN_00450ff0((int)local_10,(int)param_3);
    if ((char)uVar4 != '\0') {
      return;
    }
  }
  else {
    iVar3 = 3;
    do {
      if (param_3[iVar3] != 0) break;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar5 = iVar3;
    if (-1 < iVar3) {
      do {
        if (local_10[iVar5] != 0) break;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      if (iVar3 != iVar5) {
        uVar4 = (iVar3 - iVar5) * 0x20;
        FUN_00451720(local_10,uVar4);
        iVar6 = uVar4 + 1;
        uVar4 = local_10[3];
      }
    }
    while ((-1 < (int)uVar4 &&
           (uVar4 = FUN_00450ff0((int)param_3,(int)local_10), (char)uVar4 != '\0'))) {
      FUN_004517b0(local_10);
      iVar6 = iVar6 + 1;
      uVar4 = local_10[3];
    }
    uVar4 = FUN_00450ff0((int)local_10,(int)param_3);
    cVar1 = (char)uVar4;
    while (cVar1 != '\0') {
      FUN_00451300(local_10);
      iVar6 = iVar6 + -1;
      uVar4 = FUN_00450ff0((int)local_10,(int)param_3);
      cVar1 = (char)uVar4;
    }
    if (iVar6 == 0) {
      return;
    }
  }
  do {
    uVar4 = FUN_00450ff0((int)local_10,(int)param_3);
    if ((char)uVar4 == '\0') {
      FUN_004510c0(param_3,local_10);
    }
    FUN_00451300(local_10);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


/* END FUNCTION 0x004530f0 */

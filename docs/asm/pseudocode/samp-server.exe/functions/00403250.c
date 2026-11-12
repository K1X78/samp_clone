/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403250
 * Name: FUN_00403250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_00403250(undefined4 *param_1,short *param_2,int param_3,int param_4,uint param_5)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  
  if (param_4 == 0) {
    psVar3 = param_2;
    do {
      sVar1 = *psVar3;
      psVar3 = (short *)((int)psVar3 + 1);
    } while ((char)sVar1 != '\0');
    uVar2 = (int)psVar3 - ((int)param_2 + 1);
  }
  else {
    uVar2 = FUN_0049f1be(param_2);
  }
  if (param_3 != 0) {
    if ((param_5 < 0x1fffffff) && (param_5 * 4 <= uVar2)) {
      uVar2 = param_5 * 4 - 1;
    }
    param_1[uVar2 >> 2] = 0;
    if (param_4 == 0) {
      for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_1 = *(undefined4 *)param_2;
        param_2 = param_2 + 2;
        param_1 = param_1 + 1;
      }
      for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)param_1 = (char)*param_2;
        param_2 = (short *)((int)param_2 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
    }
    else {
      iVar4 = 0;
      if (0 < (int)uVar2) {
        do {
          *(char *)(iVar4 + (int)param_1) = (char)param_2[iVar4];
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar2);
      }
    }
    iVar4 = (uVar2 >> 2) + 1;
    do {
      FUN_00401000();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return 0;
  }
  if ((param_5 < 0x7fffffff) && (param_5 <= uVar2)) {
    uVar2 = param_5 - 1;
  }
  if (param_4 == 0) {
    iVar4 = 0;
    if (0 < (int)uVar2) {
      do {
        param_1[iVar4] = (uint)*(byte *)(iVar4 + (int)param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar2);
    }
  }
  else {
    iVar4 = 0;
    if (0 < (int)uVar2) {
      do {
        param_1[iVar4] = (uint)(ushort)param_2[iVar4];
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar2);
      param_1[uVar2] = 0;
      return 0;
    }
  }
  param_1[uVar2] = 0;
  return 0;
}


/* END FUNCTION 0x00403250 */

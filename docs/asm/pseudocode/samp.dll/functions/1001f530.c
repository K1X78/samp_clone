/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f530
 * Name: FUN_1001f530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_1001f530(int *param_1,int param_2,int param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = param_3 >> 3;
  if (param_4 == '\0') {
    param_4 = -1;
    param_3._0_1_ = 0xf0;
  }
  else {
    param_4 = '\0';
    param_3._0_1_ = 0;
  }
  while( true ) {
    iVar5 = iVar5 + -1;
    if (iVar5 < 1) {
      if ((param_1[2] + 1 <= *param_1) && (cVar3 = FUN_10008110(&param_4), cVar3 != '\0')) {
        pbVar6 = (byte *)(iVar5 + param_2);
        if (param_4 == '\0') {
          cVar3 = FUN_1001f470(pbVar6,8,1);
          if (cVar3 != '\0') {
            return true;
          }
        }
        else {
          cVar3 = FUN_1001f470(pbVar6,4,1);
          if (cVar3 != '\0') {
            *pbVar6 = *pbVar6 | (byte)param_3;
            return true;
          }
        }
      }
      return false;
    }
    uVar2 = param_1[2];
    if (*param_1 < (int)(uVar2 + 1)) {
      return false;
    }
    uVar4 = uVar2 & 0x80000007;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
    }
    bVar1 = *(byte *)(((int)uVar2 >> 3) + param_1[3]);
    param_1[2] = uVar2 + 1;
    if ((bVar1 & (byte)(0x80 >> ((byte)uVar4 & 0x1f))) == 0) break;
    *(char *)(iVar5 + param_2) = param_4;
  }
  cVar3 = FUN_1001f470(param_2,iVar5 * 8 + 8,1);
  return cVar3 != '\0';
}


/* END FUNCTION 0x1001f530 */

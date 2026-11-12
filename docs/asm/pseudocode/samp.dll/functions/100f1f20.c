/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1f20
 * Name: FUN_100f1f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100f1f61) */

int FUN_100f1f20(char *param_1,int param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  pbVar2 = param_3 + 1;
  uVar4 = (uint)*param_3 % 0x28;
  if (0 < param_2) {
    *param_1 = *param_3 / 0x28 + 0x30;
  }
  if (1 < param_2) {
    param_1[1] = '\0';
    param_1[1] = '.';
  }
  iVar7 = param_2 + -2;
  iVar3 = 0;
  if (uVar4 / 10 != 0) {
    iVar3 = FUN_100f1ed0(param_1 + 2,iVar7,uVar4 / 10);
    uVar4 = uVar4 % 10;
  }
  if (iVar3 < iVar7) {
    param_1[iVar3 + 2] = (char)uVar4 + '0';
  }
  if (iVar3 + 1 < iVar7) {
    param_1[iVar3 + 3] = '\0';
  }
  iVar3 = iVar3 + 3;
  do {
    if (param_4 <= pbVar2) {
      if (iVar3 < param_2) {
        param_1[iVar3] = '\0';
      }
      return iVar3;
    }
    if (iVar3 < param_2) {
      param_1[iVar3] = '.';
    }
    iVar3 = iVar3 + 1;
    uVar4 = 0;
    do {
      if ((uVar4 & 0xff000000) != 0) {
        return -1;
      }
      bVar1 = *pbVar2;
      uVar8 = bVar1 & 0x7f;
      uVar6 = uVar4 << 7;
      pbVar2 = pbVar2 + 1;
      uVar4 = uVar6 | uVar8;
    } while ((char)bVar1 < '\0');
    iVar5 = param_2 - iVar3;
    iVar7 = 0;
    if (uVar4 / 10 == 0) {
      bVar1 = (byte)uVar6 | (byte)uVar8;
    }
    else {
      iVar7 = FUN_100f1ed0(param_1 + iVar3,iVar5,uVar4 / 10);
      bVar1 = (byte)(uVar4 % 10);
    }
    if (iVar7 < iVar5) {
      param_1[iVar7 + iVar3] = bVar1 + 0x30;
    }
    iVar7 = iVar7 + 1;
    if (iVar7 < iVar5) {
      param_1[iVar7 + iVar3] = '\0';
    }
    iVar3 = iVar3 + iVar7;
  } while( true );
}


/* END FUNCTION 0x100f1f20 */

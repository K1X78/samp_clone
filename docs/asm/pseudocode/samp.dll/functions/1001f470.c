/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f470
 * Name: FUN_1001f470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1001f470(int *param_1,byte *param_2,int param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  if ((0 < param_3) && (param_1[2] + param_3 <= *param_1)) {
    uVar2 = param_3 + 7 >> 3;
    pbVar5 = param_2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5 = pbVar5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
    }
    uVar3 = param_1[2] & 7;
    do {
      bVar1 = *(char *)((param_1[2] >> 3) + param_1[3]) << (sbyte)uVar3 | *param_2;
      *param_2 = bVar1;
      if ((uVar3 != 0) && ((int)(8 - uVar3) < param_3)) {
        *param_2 = *(byte *)((param_1[2] >> 3) + 1 + param_1[3]) >> ((byte)(8 - uVar3) & 0x1f) |
                   bVar1;
      }
      iVar4 = param_3 + -8;
      if (iVar4 < 0) {
        if (param_4 != '\0') {
          *param_2 = *param_2 >> (-(char)iVar4 & 0x1fU);
        }
        param_1[2] = param_1[2] + param_3;
      }
      else {
        param_1[2] = param_1[2] + 8;
      }
      param_2 = param_2 + 1;
      param_3 = iVar4;
    } while (0 < iVar4);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x1001f470 */

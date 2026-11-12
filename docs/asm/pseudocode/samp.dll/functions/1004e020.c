/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004e020
 * Name: FUN_1004e020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1004e020(char *param_1,char *param_2,int param_3,int param_4,uint *param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) ||
     ((cVar1 = *param_1, cVar1 != '\x03' && (*param_2 == '\0')))) {
    return -5;
  }
  iVar10 = (int)(param_4 * 8 + (param_4 * 8 >> 0x1f & 0x7fU)) >> 7;
  if (cVar1 == '\x01') {
    if (0 < iVar10) {
      iVar9 = iVar10;
      do {
        FUN_1004d740(param_3,param_5,param_2 + 0x2a);
        param_3 = param_3 + 0x10;
        param_5 = param_5 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (cVar1 == '\x02') {
    FUN_1004d740(param_3,&local_10,param_2 + 0x2a);
    *param_5 = *(uint *)(param_1 + 1) ^ local_10;
    param_5[1] = *(uint *)(param_1 + 5) ^ local_c;
    param_5[2] = *(uint *)(param_1 + 9) ^ local_8;
    param_4 = iVar10 + -1;
    param_5[3] = *(uint *)(param_1 + 0xd) ^ local_4;
    if (0 < param_4) {
      param_5 = param_5 + 5;
      do {
        FUN_1004d740(param_3,&local_10,param_2 + 0x2a);
        param_5[-1] = *(uint *)(param_3 + -0x10) ^ local_10;
        *param_5 = *(uint *)(param_3 + -0xc) ^ local_c;
        param_5[1] = *(uint *)(param_3 + -8) ^ local_8;
        param_5[2] = *(uint *)(param_3 + -4) ^ local_4;
        param_3 = param_3 + 0x10;
        param_5 = param_5 + 4;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return iVar10 << 7;
    }
  }
  else {
    if (cVar1 != '\x03') {
      return -5;
    }
    local_20 = *(uint *)(param_1 + 1);
    local_1c = *(undefined4 *)(param_1 + 5);
    local_18 = *(undefined4 *)(param_1 + 9);
    local_14 = *(undefined4 *)(param_1 + 0xd);
    if (0 < iVar10) {
      param_1 = (char *)iVar10;
      do {
        uVar11 = 0;
        do {
          uVar3 = local_20;
          local_10 = local_20;
          local_c = local_1c;
          local_8 = local_18;
          local_4 = local_14;
          FUN_1004d0b0(&local_10,&local_10,param_2 + 0x2a);
          bVar6 = (char)local_20 << 1;
          bVar4 = local_20._1_1_ >> 7;
          bVar5 = local_20._2_1_ >> 7;
          bVar8 = local_20._1_1_ << 1;
          local_20._3_1_ = SUB41(uVar3,3);
          bVar2 = local_20._2_1_ << 1;
          local_20 = CONCAT13((byte)local_1c >> 7 | local_20._3_1_ << 1,
                              CONCAT12(local_20._3_1_ >> 7 | bVar2,
                                       CONCAT11(bVar5 | bVar8,bVar4 | bVar6)));
          bVar6 = local_1c._1_1_ >> 7;
          bVar2 = (byte)local_1c << 1;
          bVar8 = local_1c._2_1_ >> 7;
          bVar5 = local_1c._1_1_ << 1;
          bVar4 = local_1c._2_1_ << 1;
          local_1c = CONCAT13((byte)local_18 >> 7 | local_1c._3_1_ << 1,
                              CONCAT12(local_1c._3_1_ >> 7 | bVar4,
                                       CONCAT11(bVar8 | bVar5,bVar6 | bVar2)));
          bVar6 = local_18._1_1_ >> 7;
          bVar2 = (byte)local_18 << 1;
          bVar8 = local_18._2_1_ >> 7;
          bVar5 = local_18._1_1_ << 1;
          bVar4 = local_18._2_1_ << 1;
          local_18 = CONCAT13((byte)local_14 >> 7 | local_18._3_1_ << 1,
                              CONCAT12(local_18._3_1_ >> 7 | bVar4,
                                       CONCAT11(bVar8 | bVar5,bVar6 | bVar2)));
          bVar6 = local_14._1_1_ >> 7;
          bVar2 = (byte)local_14 << 1;
          bVar5 = local_14._1_1_ << 1;
          bVar8 = local_14._2_1_ >> 7;
          bVar4 = local_14._2_1_ << 1;
          bVar7 = (byte)uVar11 & 7;
          uVar3 = uVar11 >> 3;
          local_14 = CONCAT13(*(byte *)(uVar3 + param_3) >> (7 - bVar7 & 0x1f) & 1 |
                              local_14._3_1_ << 1,
                              CONCAT12(local_14._3_1_ >> 7 | bVar4,
                                       CONCAT11(bVar8 | bVar5,bVar6 | bVar2)));
          uVar11 = uVar11 + 1;
          *(byte *)(uVar3 + (int)param_5) =
               *(byte *)(uVar3 + (int)param_5) ^ ((byte)local_10 & 0x80) >> bVar7;
        } while ((int)uVar11 < 0x80);
        param_1 = (char *)((int)param_1 + -1);
      } while (param_1 != (char *)0x0);
      return iVar10 << 7;
    }
  }
  return iVar10 << 7;
}


/* END FUNCTION 0x1004e020 */

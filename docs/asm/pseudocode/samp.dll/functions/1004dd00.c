/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004dd00
 * Name: FUN_1004dd00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1004dd00(char *param_1,char *param_2,uint *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\x01')) {
    return -5;
  }
  cVar2 = *param_1;
  iVar16 = (int)(param_4 * 8 + (param_4 * 8 >> 0x1f & 0x7fU)) >> 7;
  if (cVar2 == '\x01') {
    if (0 < iVar16) {
      iVar15 = iVar16;
      do {
        FUN_1004d0b0(param_3,param_5,param_2 + 0x2a);
        param_3 = param_3 + 4;
        param_5 = param_5 + 0x10;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
  }
  else {
    param_4 = iVar16;
    if (cVar2 == '\x02') {
      uVar17 = *(uint *)(param_1 + 1);
      uVar13 = *(uint *)(param_1 + 5);
      uVar14 = *(uint *)(param_1 + 9);
      local_4 = *(uint *)(param_1 + 0xd);
      if (0 < iVar16) {
        do {
          uVar13 = uVar13 ^ param_3[1];
          local_4 = local_4 ^ param_3[3];
          uVar17 = uVar17 ^ *param_3;
          uVar14 = uVar14 ^ param_3[2];
          local_10 = uVar17;
          local_c = uVar13;
          local_8 = uVar14;
          FUN_1004d0b0(&local_10,param_5,param_2 + 0x2a);
          param_5 = param_5 + 0x10;
          param_3 = param_3 + 4;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return iVar16 << 7;
      }
    }
    else {
      if (cVar2 != '\x03') {
        return -5;
      }
      local_20 = *(uint *)(param_1 + 1);
      local_1c = *(undefined4 *)(param_1 + 5);
      local_18 = *(undefined4 *)(param_1 + 9);
      local_14 = *(undefined4 *)(param_1 + 0xd);
      if (0 < iVar16) {
        do {
          uVar17 = 0;
          do {
            uVar5 = local_14;
            uVar4 = local_18;
            uVar3 = local_1c;
            uVar13 = local_20;
            local_10 = local_20;
            local_c = local_1c;
            local_8 = local_18;
            local_4 = local_14;
            FUN_1004d0b0(&local_10,&local_10,param_2 + 0x2a);
            pbVar1 = (byte *)((uVar17 >> 3) + param_5);
            bVar10 = (char)local_20 << 1;
            bVar9 = (byte)uVar17 & 7;
            bVar6 = *pbVar1 ^ ((byte)local_10 & 0x80) >> bVar9;
            *pbVar1 = bVar6;
            bVar7 = local_20._1_1_ >> 7;
            bVar8 = local_20._2_1_ >> 7;
            bVar11 = local_20._1_1_ << 1;
            local_20._3_1_ = SUB41(uVar13,3);
            bVar12 = local_20._2_1_ << 1;
            local_20 = CONCAT13((byte)local_1c >> 7 | local_20._3_1_ << 1,
                                CONCAT12(local_20._3_1_ >> 7 | bVar12,
                                         CONCAT11(bVar8 | bVar11,bVar7 | bVar10)));
            bVar7 = local_1c._1_1_ >> 7;
            bVar10 = (byte)local_1c << 1;
            bVar8 = local_1c._2_1_ >> 7;
            bVar11 = local_1c._1_1_ << 1;
            local_1c._3_1_ = SUB41(uVar3,3);
            bVar12 = local_1c._2_1_ << 1;
            local_1c = CONCAT13((byte)local_18 >> 7 | local_1c._3_1_ << 1,
                                CONCAT12(local_1c._3_1_ >> 7 | bVar12,
                                         CONCAT11(bVar8 | bVar11,bVar7 | bVar10)));
            bVar7 = local_18._1_1_ >> 7;
            bVar10 = (byte)local_18 << 1;
            bVar8 = local_18._2_1_ >> 7;
            bVar11 = local_18._1_1_ << 1;
            local_18._3_1_ = SUB41(uVar4,3);
            bVar12 = local_18._2_1_ << 1;
            local_18 = CONCAT13((byte)local_14 >> 7 | local_18._3_1_ << 1,
                                CONCAT12(local_18._3_1_ >> 7 | bVar12,
                                         CONCAT11(bVar8 | bVar11,bVar7 | bVar10)));
            bVar7 = local_14._1_1_ >> 7;
            bVar10 = (byte)local_14 << 1;
            bVar8 = local_14._2_1_ >> 7;
            bVar11 = local_14._1_1_ << 1;
            local_14._3_1_ = SUB41(uVar5,3);
            bVar12 = local_14._2_1_ << 1;
            uVar17 = uVar17 + 1;
            local_14 = CONCAT13(bVar6 >> (7 - bVar9 & 0x1f) & 1 | local_14._3_1_ << 1,
                                CONCAT12(local_14._3_1_ >> 7 | bVar12,
                                         CONCAT11(bVar8 | bVar11,bVar7 | bVar10)));
          } while ((int)uVar17 < 0x80);
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return iVar16 << 7;
      }
    }
  }
  return iVar16 << 7;
}


/* END FUNCTION 0x1004dd00 */

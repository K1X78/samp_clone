/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c42b0
 * Name: FUN_100c42b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c42b0(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  int iStack_4;
  
  puVar3 = param_1;
  if (param_1[0x1d] != 0) {
    (*(code *)param_1[1])(*param_1);
    puVar3[0x1d] = 0;
  }
  if (puVar3[0x1b] != 0) {
    return puVar3[0x24];
  }
  iVar4 = FUN_100c3f00();
  if (iVar4 != 0) {
    return iVar4;
  }
  uStack_14 = puVar3[0x1e];
  uStack_8 = uStack_14;
  if (uStack_14 == 0 && puVar3[0x1f] == 0) {
    iVar4 = (*(code *)puVar3[2])(*puVar3);
    if (iVar4 == 0) goto LAB_100c4816;
    FUN_100c2700(&param_1);
    FUN_100c2130(0);
    puVar3[0x11] = *(undefined4 *)(&DAT_1011f8f4 + puVar3[0x11] * 4);
    (*(code *)puVar3[3])(*puVar3);
    FUN_100c2190(puVar3 + 0x25);
    uStack_14 = uStack_14 + 1;
    puVar3[0xc] = puVar3[0xc] + -1;
  }
  iVar4 = (*(code *)puVar3[2])(*puVar3);
  if (iVar4 != 0) {
    while( true ) {
      do {
        if (puVar3[0x19] == 0) {
          uStack_c = FUN_100c2980(puVar3,uStack_14,&uStack_10);
        }
        else {
          uStack_c = FUN_100c3b50(&uStack_10);
        }
        param_1 = (undefined4 *)(puVar3[0x16] & uStack_14);
        if ((uStack_c == 1) && (uStack_10 == 0xffffffff)) {
          FUN_100c2130(0);
          iVar4 = (*(code *)puVar3[3])(*puVar3);
          puVar5 = (undefined1 *)(iVar4 - puVar3[0xc]);
          param_1 = (undefined4 *)CONCAT31(param_1._1_3_,*puVar5);
          if ((uint)puVar3[0x11] < 7) {
            FUN_100c2190(puVar3 + 0x25);
            puVar3[0x11] = *(undefined4 *)(&DAT_1011f8f4 + puVar3[0x11] * 4);
          }
          else {
            FUN_100c21d0(puVar3 + 0x25,
                         ((uint)((byte)puVar5[-1] >> (8 - (byte)puVar3[0x12] & 0x1f)) +
                         ((puVar3[0x15] & uStack_14) << ((byte)puVar3[0x12] & 0x1f))) * 0x600 +
                         puVar3[0x18],puVar5[-1 - puVar3[0xd]]);
            puVar3[0x11] = *(undefined4 *)(&DAT_1011f8f4 + puVar3[0x11] * 4);
          }
        }
        else {
          puVar1 = puVar3 + 0x25;
          FUN_100c2130(1);
          if (uStack_10 < 4) {
            FUN_100c2130(1);
            if (uStack_10 == 0) {
              FUN_100c2130(0);
              FUN_100c2130(uStack_c != 1);
            }
            else {
              iStack_4 = puVar3[uStack_10 + 0xd];
              FUN_100c2130(1);
              uVar6 = uStack_10;
              if (uStack_10 == 1) {
                FUN_100c2130(0);
              }
              else {
                FUN_100c2130(1);
                FUN_100c2130(uVar6 - 2);
                if (uVar6 == 3) {
                  puVar3[0x10] = puVar3[0xf];
                }
                puVar3[0xf] = puVar3[0xe];
              }
              puVar3[0xe] = puVar3[0xd];
              puVar3[0xd] = iStack_4;
            }
            if (uStack_c == 1) {
              puVar3[0x11] = *(undefined4 *)(&DAT_1011f984 + puVar3[0x11] * 4);
            }
            else {
              FUN_100c26a0(puVar1,puVar3[0x19] == 0,(int)puVar3 + 0x30d29);
              puVar3[0x11] = *(undefined4 *)(&DAT_1011f954 + puVar3[0x11] * 4);
            }
          }
          else {
            FUN_100c2130(0);
            puVar3[0x11] = *(undefined4 *)(&DAT_1011f924 + puVar3[0x11] * 4);
            iStack_4 = uStack_c - 2;
            FUN_100c26a0(puVar1,puVar3[0x19] == 0,(int)puVar3 + 0x30d29);
            uVar6 = uStack_10 - 4;
            if (uVar6 < 0x80) {
              uVar7 = (uint)*(byte *)(uStack_10 + 0x30525 + (int)puVar3);
            }
            else {
              iVar4 = (-(uint)(uVar6 < 0x20000) & 0xfffffff6) + 0x10;
              uVar7 = (uint)*(byte *)((uVar6 >> ((byte)iVar4 & 0x1f)) + 0x30529 + (int)puVar3) +
                      iVar4 * 2;
            }
            iVar4 = iStack_4;
            if (4 < uStack_c) {
              iVar4 = 3;
            }
            uStack_10 = uVar6;
            FUN_100c2320(puVar1,iVar4 * 0x80 + 0x3275d + (int)puVar3,uVar7);
            if (3 < uVar7) {
              iVar4 = (uVar7 & 1 | 2) << ((char)(uVar7 >> 1) - 1U & 0x1f);
              uVar6 = uVar6 - iVar4;
              if (uVar7 < 0xe) {
                FUN_100c2360(puVar1,(int)puVar3 + (iVar4 - uVar7) * 2 + 0x3295b,uVar6);
                uVar6 = uStack_10;
              }
              else {
                FUN_100c20e0();
                FUN_100c2360(puVar1,(int)puVar3 + 0x32a41,uVar6 & 0xf);
                puVar3[0x21] = puVar3[0x21] + 1;
                uVar6 = uStack_10;
              }
            }
            uVar2 = puVar3[0xe];
            puVar3[0xe] = puVar3[0xd];
            puVar3[0x10] = puVar3[0xf];
            puVar3[0xf] = uVar2;
            puVar3[0xd] = uVar6;
            puVar3[0x20] = puVar3[0x20] + 1;
          }
        }
        iVar4 = puVar3[0xc];
        uStack_14 = uStack_14 + uStack_c;
        puVar3[0xc] = iVar4 - uStack_c;
      } while (iVar4 - uStack_c != 0);
      if (puVar3[0x19] == 0) {
        if (0x7f < (uint)puVar3[0x20]) {
          FUN_100c3fe0(puVar3);
        }
        if (0xf < (uint)puVar3[0x21]) {
          FUN_100c3f90(puVar3);
        }
      }
      iVar4 = (*(code *)puVar3[2])(*puVar3);
      if (iVar4 == 0) break;
      if (param_2 == 0) {
        if (0x1ffff < uStack_14 - uStack_8) {
          uVar6 = puVar3[0x1e];
          puVar3[0x1e] = uVar6 + (uStack_14 - uStack_8);
          puVar3[0x1f] = puVar3[0x1f] + (uint)CARRY4(uVar6,uStack_14 - uStack_8);
          iVar4 = FUN_100c3f00();
          return iVar4;
        }
      }
      else {
        if (param_4 <= (uStack_14 - uStack_8) + 0x112c) break;
        uVar6 = *(int *)((int)puVar3 + 0xa9) - *(int *)((int)puVar3 + 0xb1);
        uVar7 = uVar6 + *(uint *)((int)puVar3 + 0xb9);
        uVar8 = uVar7 + *(uint *)((int)puVar3 + 0xa1);
        if ((((int)uVar6 >> 0x1f) + *(int *)((int)puVar3 + 0xbd) +
             (uint)CARRY4(uVar6,*(uint *)((int)puVar3 + 0xb9)) + *(int *)((int)puVar3 + 0xa5) +
             (uint)CARRY4(uVar7,*(uint *)((int)puVar3 + 0xa1)) + (uint)(0xffffdfff < uVar8) != 0) ||
           (param_3 <= uVar8 + 0x2000)) break;
      }
    }
  }
  uVar6 = puVar3[0x1e];
  puVar3[0x1e] = uVar6 + (uStack_14 - uStack_8);
  puVar3[0x1f] = puVar3[0x1f] + (uint)CARRY4(uVar6,uStack_14 - uStack_8);
LAB_100c4816:
  iVar4 = FUN_100c3f50();
  return iVar4;
}


/* END FUNCTION 0x100c42b0 */

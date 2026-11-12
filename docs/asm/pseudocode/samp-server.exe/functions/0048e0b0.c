/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048e0b0
 * Name: FUN_0048e0b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_0048e0b0(int *param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcStack_14;
  uint uStack_10;
  char *pcStack_c;
  char *pcStack_8;
  char *pcStack_4;
  
  piVar2 = param_1;
  if (param_1[0x1d] != 0) {
    (*(code *)param_1[1])(*param_1);
    piVar2[0x1d] = 0;
  }
  if (piVar2[0x1b] != 0) {
    return piVar2[0x24];
  }
  iVar3 = FUN_0048dd00((int)piVar2);
  if (iVar3 != 0) {
    return iVar3;
  }
  pcStack_14 = (char *)piVar2[0x1e];
  pcStack_8 = pcStack_14;
  if (pcStack_14 == (char *)0x0 && piVar2[0x1f] == 0) {
    iVar3 = (*(code *)piVar2[2])(*piVar2);
    if (iVar3 == 0) goto LAB_0048e616;
    FUN_0048c4f0((int *)&param_1);
    FUN_0048bf20(0);
    piVar2[0x11] = *(int *)(&DAT_004bf13c + piVar2[0x11] * 4);
    (*(code *)piVar2[3])(*piVar2);
    FUN_0048bf80();
    pcStack_14 = pcStack_14 + 1;
    piVar2[0xc] = piVar2[0xc] + -1;
  }
  iVar3 = (*(code *)piVar2[2])(*piVar2);
  if (iVar3 != 0) {
    while( true ) {
      do {
        if (piVar2[0x19] == 0) {
          pcStack_c = FUN_0048c780(piVar2,(uint)pcStack_14,(int *)&uStack_10);
        }
        else {
          pcStack_c = (char *)FUN_0048d950(&uStack_10);
        }
        param_1 = (int *)(piVar2[0x16] & (uint)pcStack_14);
        if ((pcStack_c == (char *)0x1) && (uStack_10 == 0xffffffff)) {
          FUN_0048bf20(0);
          iVar3 = (*(code *)piVar2[3])(*piVar2);
          param_1 = (int *)CONCAT31(param_1._1_3_,*(undefined1 *)(iVar3 - piVar2[0xc]));
          if ((uint)piVar2[0x11] < 7) {
            FUN_0048bf80();
            piVar2[0x11] = *(int *)(&DAT_004bf13c + piVar2[0x11] * 4);
          }
          else {
            FUN_0048bfc0();
            piVar2[0x11] = *(int *)(&DAT_004bf13c + piVar2[0x11] * 4);
          }
        }
        else {
          piVar1 = piVar2 + 0x26;
          FUN_0048bf20(1);
          if (uStack_10 < 4) {
            FUN_0048bf20(1);
            if (uStack_10 == 0) {
              FUN_0048bf20(0);
              FUN_0048bf20((uint)(pcStack_c != (char *)0x1));
            }
            else {
              pcStack_4 = (char *)piVar2[uStack_10 + 0xd];
              FUN_0048bf20(1);
              uVar5 = uStack_10;
              if (uStack_10 == 1) {
                FUN_0048bf20(0);
              }
              else {
                FUN_0048bf20(1);
                FUN_0048bf20(uVar5 - 2);
                if (uVar5 == 3) {
                  piVar2[0x10] = piVar2[0xf];
                }
                piVar2[0xf] = piVar2[0xe];
              }
              piVar2[0xe] = piVar2[0xd];
              piVar2[0xd] = (int)pcStack_4;
            }
            if (pcStack_c == (char *)0x1) {
              piVar2[0x11] = *(int *)(&DAT_004bf1cc + piVar2[0x11] * 4);
            }
            else {
              FUN_0048c490(param_1,piVar1,(uint)(piVar2[0x19] == 0));
              piVar2[0x11] = *(int *)(&DAT_004bf19c + piVar2[0x11] * 4);
            }
          }
          else {
            FUN_0048bf20(0);
            piVar2[0x11] = *(int *)(&DAT_004bf16c + piVar2[0x11] * 4);
            pcStack_4 = pcStack_c + -2;
            FUN_0048c490(param_1,piVar1,(uint)(piVar2[0x19] == 0));
            uVar5 = uStack_10 - 4;
            if (uVar5 < 0x80) {
              uVar6 = (uint)*(byte *)(uStack_10 + 0x30530 + (int)piVar2);
            }
            else {
              iVar3 = (-(uint)(uVar5 < 0x20000) & 0xfffffff6) + 0x10;
              uVar6 = (uint)*(byte *)((uVar5 >> ((byte)iVar3 & 0x1f)) + 0x30534 + (int)piVar2) +
                      iVar3 * 2;
            }
            pcVar4 = pcStack_4;
            if ((char *)0x4 < pcStack_c) {
              pcVar4 = (char *)0x3;
            }
            uStack_10 = uVar5;
            FUN_0048c110(piVar1,piVar2 + (int)pcVar4 * 0x20 + 0xc9da,uVar6);
            if (3 < uVar6) {
              iVar3 = (uVar6 & 1 | 2) << ((char)(uVar6 >> 1) - 1U & 0x1f);
              uVar5 = uVar5 - iVar3;
              if (uVar6 < 0xe) {
                FUN_0048c150(piVar1,(int)piVar2 + (iVar3 - uVar6) * 2 + 0x32966,uVar5);
                uVar5 = uStack_10;
              }
              else {
                FUN_0048bed0();
                FUN_0048c150(piVar1,piVar2 + 0xca93,uVar5 & 0xf);
                piVar2[0x21] = piVar2[0x21] + 1;
                uVar5 = uStack_10;
              }
            }
            iVar3 = piVar2[0xe];
            piVar2[0xe] = piVar2[0xd];
            piVar2[0x10] = piVar2[0xf];
            piVar2[0xf] = iVar3;
            piVar2[0xd] = uVar5;
            piVar2[0x20] = piVar2[0x20] + 1;
          }
        }
        iVar3 = piVar2[0xc];
        pcStack_14 = pcStack_14 + (int)pcStack_c;
        piVar2[0xc] = iVar3 - (int)pcStack_c;
      } while (iVar3 - (int)pcStack_c != 0);
      if (piVar2[0x19] == 0) {
        if (0x7f < (uint)piVar2[0x20]) {
          FUN_0048dde0((int)piVar2);
        }
        if (0xf < (uint)piVar2[0x21]) {
          FUN_0048dd90((int)piVar2);
        }
      }
      iVar3 = (*(code *)piVar2[2])(*piVar2);
      if (iVar3 == 0) break;
      if (param_2 == 0) {
        if (0x1ffff < (uint)((int)pcStack_14 - (int)pcStack_8)) {
          uVar5 = piVar2[0x1e];
          piVar2[0x1e] = uVar5 + ((int)pcStack_14 - (int)pcStack_8);
          piVar2[0x1f] = piVar2[0x1f] + (uint)CARRY4(uVar5,(int)pcStack_14 - (int)pcStack_8);
          iVar3 = FUN_0048dd00((int)piVar2);
          return iVar3;
        }
      }
      else {
        if (param_4 <= ((int)pcStack_14 - (int)pcStack_8) + 0x112cU) break;
        uVar5 = piVar2[0x2c] - piVar2[0x2e];
        uVar6 = uVar5 + piVar2[0x30];
        uVar7 = uVar6 + piVar2[0x2a];
        if ((((int)uVar5 >> 0x1f) + piVar2[0x31] + (uint)CARRY4(uVar5,piVar2[0x30]) + piVar2[0x2b] +
             (uint)CARRY4(uVar6,piVar2[0x2a]) + (uint)(0xffffdfff < uVar7) != 0) ||
           (param_3 <= uVar7 + 0x2000)) break;
      }
    }
  }
  uVar5 = piVar2[0x1e];
  piVar2[0x1e] = uVar5 + ((int)pcStack_14 - (int)pcStack_8);
  piVar2[0x1f] = piVar2[0x1f] + (uint)CARRY4(uVar5,(int)pcStack_14 - (int)pcStack_8);
LAB_0048e616:
  iVar3 = FUN_0048dd50((uint)pcStack_14);
  return iVar3;
}


/* END FUNCTION 0x0048e0b0 */

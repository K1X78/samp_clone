/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f5340
 * Name: FUN_100f5340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f5340(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  int *in_EAX;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int local_14;
  int *local_c;
  int local_8;
  
  local_14 = 0;
  local_c = (int *)0x0;
  local_8 = 0;
  bVar4 = false;
  piVar5 = (int *)(*(code *)PTR__calloc_101554c8)(1,0x48);
  iVar11 = local_8;
  piVar13 = piVar5;
  if (piVar5 == (int *)0x0) {
    return 1;
  }
LAB_100f5380:
  while ((bVar4 && (local_c != (int *)0x0))) {
    iVar8 = *local_c;
    iVar11 = local_c[1];
    local_c = local_c + 2;
    local_8 = iVar11;
    if (iVar8 != 0x11) goto LAB_100f53b3;
    bVar4 = false;
  }
  iVar8 = *in_EAX;
  in_EAX = in_EAX + 1;
  if (iVar8 == 0x11) goto LAB_100f57b0;
LAB_100f53b3:
  piVar12 = piVar5;
  switch(iVar8) {
  case 1:
    goto switchD_100f53bd_caseD_1;
  case 2:
    piVar13[10] = piVar13[10] | 4;
switchD_100f53bd_caseD_1:
    if (*piVar13 == 0) {
      iVar8 = iVar11;
      if (!bVar4) {
        iVar8 = *in_EAX;
        in_EAX = in_EAX + 1;
      }
      if (iVar8 == 0) goto LAB_100f5726;
      *piVar13 = iVar8;
      goto LAB_100f5380;
    }
    break;
  case 3:
    if (piVar13[2] == 0) {
      if (bVar4) {
        piVar13[2] = iVar11;
      }
      else {
        iVar8 = *in_EAX;
        in_EAX = in_EAX + 1;
        piVar13[2] = iVar8;
      }
      goto LAB_100f5380;
    }
    break;
  case 4:
    goto switchD_100f53bd_caseD_4;
  case 5:
    piVar13[10] = piVar13[10] | 8;
switchD_100f53bd_caseD_4:
    if (piVar13[3] == 0) {
      iVar8 = iVar11;
      if (!bVar4) {
        iVar8 = *in_EAX;
        in_EAX = in_EAX + 1;
      }
      if (iVar8 == 0) goto LAB_100f5726;
      piVar13[3] = iVar8;
      goto LAB_100f5380;
    }
    break;
  case 6:
    if (bVar4) {
      piVar13[6] = iVar11;
      piVar13[7] = 0;
    }
    else {
      iVar8 = *in_EAX;
      in_EAX = in_EAX + 1;
      piVar13[6] = iVar8;
      piVar13[7] = 0;
    }
    goto LAB_100f5380;
  case 7:
    if ((*(byte *)(piVar13 + 10) & 10) == 0) {
      iVar8 = iVar11;
      if (!bVar4) {
        iVar8 = *in_EAX;
        in_EAX = in_EAX + 1;
      }
      if (iVar8 == 0) goto LAB_100f5726;
      iVar8 = (*(code *)PTR___strdup_101554c4)(iVar8);
      piVar13[3] = iVar8;
      if (iVar8 == 0) goto LAB_100f571f;
      piVar13[10] = piVar13[10] | 2;
      piVar13[4] = 1;
      goto LAB_100f5380;
    }
    break;
  case 8:
    if (bVar4) {
      local_14 = 6;
      goto LAB_100f5743;
    }
    local_c = (int *)*in_EAX;
    in_EAX = in_EAX + 1;
    if (local_c == (int *)0x0) goto LAB_100f5726;
    bVar4 = true;
    goto LAB_100f5380;
  default:
    local_14 = 4;
    goto LAB_100f5743;
  case 10:
    iVar8 = iVar11;
    if (!bVar4) {
      iVar8 = *in_EAX;
      in_EAX = in_EAX + 1;
    }
    if (piVar13[3] == 0) {
      if (iVar8 == 0) goto LAB_100f5726;
      iVar8 = (*(code *)PTR___strdup_101554c4)(iVar8);
      piVar13[3] = iVar8;
      if (iVar8 != 0) {
        piVar13[10] = piVar13[10] | 1;
        piVar13[4] = 1;
        goto LAB_100f5380;
      }
    }
    else {
      if ((*(byte *)(piVar13 + 10) & 1) == 0) break;
      if (iVar8 == 0) goto LAB_100f5726;
      iVar11 = (*(code *)PTR___strdup_101554c4)(iVar8);
      if (iVar11 != 0) {
        piVar6 = (int *)(*(code *)PTR__calloc_101554c8)(1,0x48);
        if (piVar6 == (int *)0x0) {
LAB_100f5715:
          (*(code *)PTR__free_101554bc)(iVar11);
          goto LAB_100f571f;
        }
        piVar6[3] = iVar11;
        piVar6[10] = 1;
        piVar6[0x11] = piVar13[0x11];
        piVar13[0x11] = (int)piVar6;
        piVar6[4] = 1;
        iVar11 = local_8;
        piVar13 = piVar6;
        goto LAB_100f5380;
      }
    }
    goto LAB_100f571f;
  case 0xb:
  case 0x10:
    iVar8 = iVar11;
    if (!bVar4) {
      iVar8 = *in_EAX;
      in_EAX = in_EAX + 1;
    }
    if (piVar13[0xd] == 0) {
      iVar8 = (*(code *)PTR___strdup_101554c4)(iVar8);
      piVar13[0xd] = iVar8;
      if (iVar8 == 0) goto LAB_100f571f;
      piVar13[0xe] = 1;
      goto LAB_100f5380;
    }
    break;
  case 0xc:
    piVar13[10] = piVar13[10] | 0x30;
    if (piVar13[0xb] == 0) {
      iVar8 = iVar11;
      if (!bVar4) {
        iVar8 = *in_EAX;
        in_EAX = in_EAX + 1;
      }
      if (iVar8 == 0) goto LAB_100f5726;
      piVar13[0xb] = iVar8;
      piVar13[3] = iVar8;
      goto LAB_100f5380;
    }
    break;
  case 0xd:
    if (piVar13[0xc] == 0) {
      if (bVar4) {
        piVar13[0xc] = iVar11;
      }
      else {
        iVar8 = *in_EAX;
        in_EAX = in_EAX + 1;
        piVar13[0xc] = iVar8;
      }
      goto LAB_100f5380;
    }
    break;
  case 0xe:
    iVar8 = iVar11;
    if (!bVar4) {
      iVar8 = *in_EAX;
      in_EAX = in_EAX + 1;
    }
    if (piVar13[8] == 0) {
      if (iVar8 == 0) goto LAB_100f5726;
      iVar8 = (*(code *)PTR___strdup_101554c4)(iVar8);
      piVar13[8] = iVar8;
      if (iVar8 != 0) {
        piVar13[9] = 1;
        goto LAB_100f5380;
      }
    }
    else {
      if ((*(byte *)(piVar13 + 10) & 1) == 0) break;
      if (iVar8 == 0) goto LAB_100f5726;
      iVar11 = (*(code *)PTR___strdup_101554c4)(iVar8);
      if (iVar11 != 0) {
        piVar6 = (int *)(*(code *)PTR__calloc_101554c8)(1,0x48);
        if (piVar6 == (int *)0x0) goto LAB_100f5715;
        piVar6[8] = iVar11;
        piVar6[10] = 1;
        piVar6[0x11] = piVar13[0x11];
        piVar13[0x11] = (int)piVar6;
        piVar6[9] = 1;
        iVar11 = local_8;
        piVar13 = piVar6;
        goto LAB_100f5380;
      }
    }
LAB_100f571f:
    local_14 = 1;
    goto LAB_100f5743;
  case 0xf:
    iVar8 = iVar11;
    if (!bVar4) {
      iVar8 = *in_EAX;
      in_EAX = in_EAX + 1;
    }
    if (piVar13[0x10] == 0) {
      piVar13[0x10] = iVar8;
      goto LAB_100f5380;
    }
    break;
  case 0x13:
    piVar13[10] = piVar13[10] | 0x40;
    if (piVar13[0xf] == 0) {
      iVar8 = iVar11;
      if (!bVar4) {
        iVar8 = *in_EAX;
        in_EAX = in_EAX + 1;
      }
      if (iVar8 == 0) goto LAB_100f5726;
      piVar13[0xf] = iVar8;
      piVar13[3] = iVar8;
      goto LAB_100f5380;
    }
    break;
  case 0x14:
    piVar13[10] = piVar13[10] | 0x80;
    if (bVar4) {
      piVar13[6] = iVar11;
      piVar13[7] = 0;
    }
    else {
      iVar8 = *in_EAX;
      iVar2 = in_EAX[1];
      in_EAX = in_EAX + 2;
      piVar13[6] = iVar8;
      piVar13[7] = iVar2;
    }
    goto LAB_100f5380;
  }
  local_14 = 2;
  goto LAB_100f5743;
LAB_100f5726:
  local_14 = 3;
LAB_100f5743:
  do {
    if (piVar12[1] != 0) {
      (*(code *)PTR__free_101554bc)(*piVar12);
      *piVar12 = 0;
      piVar12[1] = 0;
    }
    if (piVar12[4] != 0) {
      (*(code *)PTR__free_101554bc)(piVar12[3]);
      piVar12[3] = 0;
      piVar12[4] = 0;
    }
    if (piVar12[9] != 0) {
      (*(code *)PTR__free_101554bc)(piVar12[8]);
      piVar12[8] = 0;
      piVar12[9] = 0;
    }
    if (piVar12[0xe] != 0) {
      (*(code *)PTR__free_101554bc)(piVar12[0xd]);
      piVar12[0xd] = 0;
      piVar12[0xe] = 0;
    }
    piVar13 = piVar12 + 0x11;
    piVar12 = (int *)*piVar13;
  } while ((int *)*piVar13 != (int *)0x0);
  if (local_14 == 0) {
LAB_100f57b0:
    iVar11 = 0;
    piVar13 = piVar5;
    do {
      if ((((*piVar13 == 0) || (piVar13[3] == 0)) && (iVar11 == 0)) ||
         ((piVar13[6] != 0 || piVar13[7] != 0 && ((*(byte *)(piVar13 + 10) & 1) != 0)))) {
LAB_100f5a00:
        local_14 = 5;
        goto joined_r0x100f597c;
      }
      uVar9 = piVar13[10];
      if (((((uVar9 & 1) != 0) && ((uVar9 & 8) != 0)) ||
          (((piVar13[0xb] == 0 && ((uVar9 & 0x10) != 0)) && ((uVar9 & 0x20) != 0)))) ||
         (((uVar9 & 2) != 0 && ((uVar9 & 8) != 0)))) goto LAB_100f5a00;
      if ((((uVar9 & 1) != 0) || ((uVar9 & 0x10) != 0)) && (piVar13[8] == 0)) {
        uVar7 = FUN_100f52a0();
        iVar8 = (*(code *)PTR___strdup_101554c4)(uVar7);
        piVar13[8] = iVar8;
        if (iVar8 != 0) {
          piVar13[9] = 1;
          goto LAB_100f5852;
        }
LAB_100f59f3:
        local_14 = 1;
        goto joined_r0x100f597c;
      }
LAB_100f5852:
      pcVar3 = (char *)*piVar13;
      if ((pcVar3 != (char *)0x0) && (piVar13[2] != 0)) {
        uVar9 = 0;
        if (piVar13[2] != 0) {
          do {
            if (pcVar3[uVar9] == '\0') {
              local_14 = 3;
              goto joined_r0x100f597c;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < (uint)piVar13[2]);
        }
        if (local_14 != 0) goto joined_r0x100f597c;
      }
      if (((*(byte *)(piVar13 + 10) & 4) == 0) && (piVar13 == piVar5)) {
        if (pcVar3 != (char *)0x0) {
          pcVar10 = (char *)piVar13[2];
          if (pcVar10 == (char *)0x0) {
            pcVar10 = pcVar3;
            do {
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            pcVar10 = pcVar10 + (1 - (int)(pcVar3 + 1));
          }
          iVar8 = FUN_100d9960(pcVar3,pcVar10);
          *piVar13 = iVar8;
          if (iVar8 != 0) {
            piVar13[1] = 1;
            goto LAB_100f58cb;
          }
        }
        goto LAB_100f59f3;
      }
LAB_100f58cb:
      if (((*(byte *)(piVar13 + 10) & 0x6b) == 0) &&
         (pcVar3 = (char *)piVar13[3], pcVar3 != (char *)0x0)) {
        pcVar10 = (char *)piVar13[6];
        if (pcVar10 == (char *)0x0) {
          pcVar10 = pcVar3;
          do {
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          pcVar10 = pcVar10 + (1 - (int)(pcVar3 + 1));
        }
        iVar8 = FUN_100d9960(pcVar3,pcVar10);
        piVar13[3] = iVar8;
        if (iVar8 == 0) goto LAB_100f59f3;
        piVar13[4] = 1;
      }
      iVar11 = FUN_100f5190(piVar13[2],piVar13[3],piVar13[6],piVar13[7],piVar13[0xb],piVar13[0xc],
                            piVar13[8],piVar13[0x10],piVar13[0xd],piVar13[0xf],iVar11,param_1,
                            param_2);
      if (iVar11 == 0) goto LAB_100f59f3;
      piVar13 = (int *)piVar13[0x11];
    } while (piVar13 != (int *)0x0);
    if (local_14 != 0) {
joined_r0x100f597c:
      for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[0x11]) {
        if (piVar13[1] != 0) {
          (*(code *)PTR__free_101554bc)(*piVar13);
          *piVar13 = 0;
          piVar13[1] = 0;
        }
        if (piVar13[4] != 0) {
          (*(code *)PTR__free_101554bc)(piVar13[3]);
          piVar13[3] = 0;
          piVar13[4] = 0;
        }
        if (piVar13[9] != 0) {
          (*(code *)PTR__free_101554bc)(piVar13[8]);
          piVar13[8] = 0;
          piVar13[9] = 0;
        }
        if (piVar13[0xe] != 0) {
          (*(code *)PTR__free_101554bc)(piVar13[0xd]);
          piVar13[0xd] = 0;
          piVar13[0xe] = 0;
        }
      }
    }
  }
  do {
    piVar13 = (int *)piVar5[0x11];
    (*(code *)PTR__free_101554bc)(piVar5);
    piVar5 = piVar13;
  } while (piVar13 != (int *)0x0);
  return local_14;
}


/* END FUNCTION 0x100f5340 */

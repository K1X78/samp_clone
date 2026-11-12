/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007ea70
 * Name: FUN_1007ea70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007ea70(int param_1,byte param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char local_200 [511];
  undefined1 local_1;
  
  FUN_1007cbc0();
  pcVar2 = (char *)FUN_1007b400();
  pcVar3 = pcVar2;
  if (param_1 == 2) {
    iVar7 = 0x100;
    do {
      if (pcVar3[(int)&DAT_1011cf90 - (int)pcVar2] == '\0') goto LAB_1007eaf3;
      *pcVar3 = pcVar3[(int)&DAT_1011cf90 - (int)pcVar2];
      pcVar3 = pcVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
LAB_1007eaf7:
    pcVar3 = pcVar3 + -1;
    goto LAB_1007eaf8;
  }
  if (param_1 == 1) {
    iVar7 = 0x100;
    do {
      if (pcVar3[(int)&DAT_1011cf8c - (int)pcVar2] == '\0') goto LAB_1007eaf3;
      *pcVar3 = pcVar3[(int)&DAT_1011cf8c - (int)pcVar2];
      pcVar3 = pcVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    goto LAB_1007eaf7;
  }
  if (param_1 == 3) {
    iVar7 = 0x100;
    do {
      if (pcVar3[(int)&DAT_1011cf88 - (int)pcVar2] == '\0') goto LAB_1007eaf3;
      *pcVar3 = pcVar3[(int)&DAT_1011cf88 - (int)pcVar2];
      pcVar3 = pcVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    goto LAB_1007eaf7;
  }
  goto LAB_1007eafb;
LAB_1007eaf3:
  if (iVar7 == 0) goto LAB_1007eaf7;
LAB_1007eaf8:
  *pcVar3 = '\0';
LAB_1007eafb:
  if (((param_2 & 0x40) == 0) || ((param_2 & 0x10) == 0)) {
    if ((param_2 & 0x40) == 0) {
      if ((char)param_2 < '\0') {
        iVar7 = 0x100;
        pcVar3 = pcVar2;
        if (param_1 == 1) {
          do {
            if (*pcVar3 == '\0') {
              if (iVar7 != 0) {
                pcVar3 = " (mixed vp)";
                goto LAB_1007ebfb;
              }
              break;
            }
            pcVar3 = pcVar3 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          goto LAB_1007ec79;
        }
        do {
          if (*pcVar3 == '\0') {
            if (iVar7 != 0) {
              iVar7 = 0x100 - iVar7;
              pcVar3 = " (simulated mixed vp)";
              iVar6 = 0x100 - iVar7;
              goto LAB_1007ec68;
            }
            break;
          }
          pcVar3 = pcVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      else if ((param_2 & 0x20) != 0) {
        iVar7 = 0x100;
        pcVar3 = pcVar2;
        do {
          if (*pcVar3 == '\0') {
            if (iVar7 != 0) {
              iVar7 = 0x100 - iVar7;
              pcVar3 = " (sw vp)";
              iVar6 = 0x100 - iVar7;
              goto LAB_1007ec68;
            }
            break;
          }
          pcVar3 = pcVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      iVar7 = 0x100;
      pcVar3 = pcVar2;
      if (param_1 == 1) {
        do {
          if (*pcVar3 == '\0') {
            if (iVar7 != 0) {
              pcVar3 = " (hw vp)";
              goto LAB_1007ebfb;
            }
            break;
          }
          pcVar3 = pcVar3 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        goto LAB_1007ec79;
      }
      do {
        if (*pcVar3 == '\0') {
          if (iVar7 != 0) {
            iVar7 = 0x100 - iVar7;
            pcVar3 = " (simulated hw vp)";
            iVar6 = 0x100 - iVar7;
            goto LAB_1007ec68;
          }
          break;
        }
        pcVar3 = pcVar3 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else {
    iVar7 = 0x100;
    pcVar3 = pcVar2;
    if (param_1 == 1) {
      do {
        if (*pcVar3 == '\0') {
          if (iVar7 != 0) {
            pcVar3 = " (pure hw vp)";
LAB_1007ebfb:
            FUN_10077b90(pcVar2 + (0x100 - iVar7),0x100 - (0x100 - iVar7),pcVar3);
          }
          break;
        }
        iVar7 = iVar7 + -1;
        pcVar3 = pcVar3 + 1;
      } while (iVar7 != 0);
      goto LAB_1007ec79;
    }
    do {
      if (*pcVar3 == '\0') {
        if (iVar7 != 0) {
          iVar7 = 0x100 - iVar7;
          pcVar3 = " (simulated pure hw vp)";
          iVar6 = 0x100 - iVar7;
LAB_1007ec68:
          FUN_10077b90(pcVar2 + iVar7,iVar6,pcVar3);
        }
        break;
      }
      pcVar3 = pcVar3 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (param_1 != 1) {
    return;
  }
LAB_1007ec79:
  iVar7 = 0x100;
  pcVar3 = pcVar2;
  do {
    if (*pcVar3 == '\0') {
      if (iVar7 != 0) {
        FUN_10077b90(pcVar2 + (0x100 - iVar7),0x100 - (0x100 - iVar7),&DAT_1011cf0c);
      }
      break;
    }
    pcVar3 = pcVar3 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_1007cbc0();
  puVar4 = (undefined4 *)FUN_10078460();
  FUN_1007e000(0);
  iVar7 = FUN_10082a60(*puVar4,puVar4[1],puVar4[2],puVar4[6],puVar4[0xc]);
  if (iVar7 == 0) {
    pcVar3 = (char *)(param_3 + 0x200);
    iVar7 = -(int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)(local_200 + iVar7)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar7 = 0x100;
    pcVar3 = pcVar2;
    while (*pcVar3 != '\0') {
      pcVar3 = pcVar3 + 1;
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        return;
      }
    }
    if (iVar7 == 0) {
      return;
    }
    pcVar3 = local_200;
    local_1 = 0;
  }
  else {
    pcVar3 = (char *)(*(int *)(iVar7 + 0x50) + 0x450);
    iVar7 = 0x100;
    pcVar5 = pcVar2;
    while (*pcVar5 != '\0') {
      pcVar5 = pcVar5 + 1;
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        return;
      }
    }
    if (iVar7 == 0) {
      return;
    }
  }
  FUN_10077b90(pcVar2 + (0x100 - iVar7),0x100 - (0x100 - iVar7),pcVar3);
  return;
}


/* END FUNCTION 0x1007ea70 */

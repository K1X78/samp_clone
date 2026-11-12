/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b28d0
 * Name: FUN_100b28d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b28d0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  char local_e0 [4];
  undefined4 local_dc;
  char local_d8 [64];
  char local_98 [72];
  char local_50 [76];
  
  pcVar2 = local_98;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  pcVar2 = local_50;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  pcVar2 = local_e0;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  pcVar2 = _strchr(param_1,0x3a);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (0x3f < (uint)((int)pcVar3 - (int)(param_1 + 1))) {
    return;
  }
  pcVar3 = _strchr(param_1,0x5c);
  if (pcVar3 != (char *)0x0) {
    return;
  }
  pcVar3 = _strchr(param_1,0x2f);
  if (pcVar3 != (char *)0x0) {
    return;
  }
  _strncpy(local_98,param_1,(int)pcVar2 - (int)param_1);
  pcVar2 = pcVar2 + 1;
  iVar6 = -(int)pcVar2;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_50 + iVar6)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 0x9a3) == -1) {
    return;
  }
  iVar6 = 4;
  bVar7 = true;
  pcVar2 = local_98;
  pcVar3 = "hud";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar7 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar7);
  if (bVar7) {
    builtin_strncpy(local_e0,"hud",4);
  }
  else {
    iVar6 = 7;
    bVar7 = true;
    pcVar2 = local_98;
    pcVar3 = "samaps";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar7 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar7);
    if (bVar7) {
      builtin_strncpy(local_e0,"sama",4);
      local_dc._0_1_ = 'p';
      local_dc._1_1_ = 's';
      local_dc._2_1_ = '\0';
      iVar6 = FUN_100b2790(local_e0,"samaps",1);
    }
    else {
      iVar6 = 0xc;
      bVar7 = true;
      pcVar2 = local_98;
      pcVar3 = "vehicleprev";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar7 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar7);
      if (bVar7) {
        builtin_strncpy(local_e0,"vehi",4);
        local_dc._0_1_ = 'c';
        local_dc._1_1_ = 'l';
        local_dc._2_1_ = 'e';
        local_dc._3_1_ = 'p';
        builtin_strncpy(local_d8,"rev",4);
        iVar6 = FUN_100b2790(local_e0,"vehicles128",1);
      }
      else {
        if (DAT_102aca28 != 0) {
          pcVar2 = local_98;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          if (((uint)((int)pcVar2 - (int)(local_98 + 1)) < 10) &&
             (iVar6 = _strncmp(local_98,"mdl",3), iVar6 == 0)) {
            lVar4 = _atol(local_98 + 3);
            cVar1 = FUN_1000ccc0(lVar4);
            if (cVar1 == '\0') {
              return;
            }
            cVar1 = FUN_1000cd00(lVar4);
            if ((cVar1 == '\0') && (iVar6 = FUN_1000ce90(lVar4), iVar6 == 0)) {
              return;
            }
            iVar6 = FUN_1000cdf0(lVar4);
            if (iVar6 == 0) {
              return;
            }
            _sprintf(local_e0,"%X",iVar6);
            goto LAB_100b2b1d;
          }
        }
        _strncpy(local_e0,local_98,10);
        iVar6 = FUN_100b2790(local_e0,local_98,0);
      }
    }
    if (iVar6 == 0) {
      return;
    }
  }
LAB_100b2b1d:
  uVar5 = FUN_100b2860(local_e0,local_50);
  (&DAT_102a9400)[*(int *)(param_1 + 0x9a3)] = uVar5;
  return;
}


/* END FUNCTION 0x100b28d0 */

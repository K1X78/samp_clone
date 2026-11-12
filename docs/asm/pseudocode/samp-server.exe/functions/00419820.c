/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419820
 * Name: FUN_00419820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __cdecl FUN_00419820(char *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  int local_c;
  undefined4 *local_8;
  
  switch(*(undefined1 *)(in_EAX + 1)) {
  case 0xee:
    FUN_004189f0(param_2,param_1,(undefined **)"program");
    return param_1;
  case 0xef:
  case 0xfa:
    break;
  default:
    pcVar7 = *(char **)(in_EAX + 0x10);
    if (*(char **)(in_EAX + 0x10) == (char *)0x0) {
      *param_1 = '\0';
      pcVar7 = param_1;
    }
    param_1 = pcVar7;
    return param_1;
  case 0xf1:
    FUN_004189f0(param_2,param_1,(undefined **)"intarray");
    return param_1;
  case 0xf2:
    FUN_004189f0(param_2,param_1,(undefined **)&DAT_004b6da4);
    return param_1;
  case 0xf3:
    FUN_004189f0(param_2,param_1,(undefined **)&DAT_004b6da8);
    return param_1;
  case 0xf4:
    FUN_004189f0(param_2,param_1,(undefined **)"%.16g");
    return param_1;
  case 0xf6:
    FUN_004189f0(param_2,param_1,(undefined **)"vtab:%p:%p");
    return param_1;
  case 0xf8:
    uVar1 = *(ushort *)(*(int *)(in_EAX + 0x10) + 0x1c);
    if ((uVar1 & 2) != 0) {
      return *(char **)(*(int *)(in_EAX + 0x10) + 0x14);
    }
    if ((uVar1 & 4) != 0) {
      FUN_004189f0(param_2,param_1,(undefined **)&DAT_004b6da8);
      return param_1;
    }
    if ((uVar1 & 8) != 0) {
      FUN_004189f0(param_2,param_1,(undefined **)"%.16g");
      return param_1;
    }
    return "(blob)";
  case 0xfb:
    FUN_004189f0(param_2,param_1,(undefined **)"%s(%d)");
    return param_1;
  case 0xfc:
    FUN_004189f0(param_2,param_1,(undefined **)"collseq(%.20s)");
    return param_1;
  }
  iVar2 = *(int *)(in_EAX + 0x10);
  FUN_004189f0(param_2,param_1,(undefined **)"keyinfo(%d");
  uVar4 = FUN_00408380(param_1);
  local_c = 0;
  if (*(short *)(iVar2 + 6) == 0) {
LAB_00419938:
    param_1[uVar4] = ')';
    param_1[uVar4 + 1] = '\0';
    return param_1;
  }
  local_8 = (undefined4 *)(iVar2 + 0xc);
  do {
    puVar3 = (undefined4 *)*local_8;
    if (puVar3 == (undefined4 *)0x0) {
      if ((int)(uVar4 + 4) < param_2 + -6) {
        builtin_strncpy(param_1 + uVar4,",nil",4);
        uVar4 = uVar4 + 4;
      }
    }
    else {
      uVar5 = FUN_00408380((char *)*puVar3);
      if (param_2 + -6 < (int)(uVar5 + uVar4)) {
        builtin_strncpy(param_1 + uVar4,",...",4);
        goto LAB_00419938;
      }
      param_1[uVar4] = ',';
      iVar6 = uVar4 + 1;
      if ((*(int *)(iVar2 + 8) != 0) && (*(char *)(*(int *)(iVar2 + 8) + local_c) != '\0')) {
        param_1[iVar6] = '-';
        iVar6 = uVar4 + 2;
      }
      pcVar7 = (char *)*puVar3;
      pcVar8 = param_1 + iVar6;
      for (uVar4 = uVar5 + 1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar5 + 1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = iVar6 + uVar5;
    }
    local_8 = local_8 + 1;
    local_c = local_c + 1;
    if ((int)(uint)*(ushort *)(iVar2 + 6) <= local_c) {
      param_1[uVar4] = ')';
      param_1[uVar4 + 1] = '\0';
      return param_1;
    }
  } while( true );
}


/* END FUNCTION 0x00419820 */

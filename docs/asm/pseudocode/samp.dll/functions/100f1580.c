/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f1580
 * Name: FUN_100f1580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100f1580(int *param_1,char *param_2,uint param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_c;
  uint local_8;
  int local_4;
  
  uVar3 = param_3;
  iVar6 = (int)param_3 >> 0x1f;
  iVar5 = *param_1;
  local_8 = param_3;
  *param_4 = 0;
  local_c = 0;
  piVar1 = param_1 + 4;
  if (((*(int *)(iVar5 + 0x58c) != 0) && (*(int *)(iVar5 + 0x118) == 0)) &&
     (local_c = FUN_100d8fc0(param_1,1,param_2,param_3), local_c != 0)) {
    return 4;
  }
  local_4 = iVar6;
  if (uVar3 != 0) {
    do {
      switch(param_1[10]) {
      case 0:
        cVar2 = *param_2;
        if ((((cVar2 < '0') || ('9' < cVar2)) && ((cVar2 < 'A' || ('F' < cVar2)))) &&
           ((cVar2 < 'a' || ('f' < cVar2)))) {
          if (param_1[9] == 0) {
            return 2;
          }
          *(undefined1 *)(param_1[9] + (int)piVar1) = 0;
          local_c = 0;
          iVar4 = FUN_100eef50(piVar1,&param_3,0x10,param_1 + 0xc);
          if (iVar4 != 0) {
            return 2;
          }
          param_1[10] = 1;
        }
        else {
          if (0xf < param_1[9]) {
            return 1;
          }
          *(char *)(param_1[9] + (int)piVar1) = cVar2;
          param_2 = param_2 + 1;
          bVar7 = local_8 != 0;
          local_8 = local_8 - 1;
          iVar6 = iVar6 + -1 + (uint)bVar7;
          param_1[9] = param_1[9] + 1;
          local_4 = iVar6;
        }
        break;
      case 1:
        if (*param_2 == '\n') {
          if ((param_1[0xc] == 0) && (param_1[0xd] == 0)) {
            param_1[10] = 5;
            param_1[0x159] = 0;
          }
          else {
            param_1[10] = 2;
          }
        }
        goto LAB_100f1904;
      case 2:
        iVar4 = param_1[0xd];
        uVar3 = param_1[0xc];
        if ((iVar6 <= iVar4) && ((iVar6 < iVar4 || (local_8 <= uVar3)))) {
          uVar3 = local_8;
          iVar4 = iVar6;
        }
        uVar3 = FUN_100d9a70(uVar3,iVar4);
        if ((*(int *)(*param_1 + 0x590) == 0) && (*(int *)(iVar5 + 0xfc) != 0)) {
          local_c = FUN_100df260(param_1,*(int *)(iVar5 + 0xfc),param_2,uVar3);
        }
        else if (*(int *)(iVar5 + 0x118) == 0) {
          local_c = FUN_100d8fc0(param_1,1,param_2,uVar3);
        }
        if (local_c != 0) {
          return 4;
        }
        *param_4 = *param_4 + uVar3;
        param_1[0xd] = param_1[0xd] - (uint)((uint)param_1[0xc] < uVar3);
        param_1[0xc] = param_1[0xc] - uVar3;
        param_2 = param_2 + uVar3;
        bVar7 = local_8 < uVar3;
        local_8 = local_8 - uVar3;
        iVar6 = local_4 - (uint)bVar7;
        local_4 = iVar6;
        if ((param_1[0xc] == 0) && (param_1[0xd] == 0)) {
          param_1[10] = 3;
        }
        break;
      case 3:
        if (*param_2 == '\n') {
          param_1[9] = 0;
          param_1[0xe] = 0;
          param_1[10] = 0;
        }
        else if (*param_2 != '\r') {
          return 3;
        }
        goto LAB_100f1904;
      case 4:
        if (*param_2 != '\n') {
          return 3;
        }
        iVar5 = FUN_100d9a70(local_8 - 1,iVar6 - (uint)(local_8 == 0));
        param_1[0xe] = iVar5;
        return 0xffffffff;
      case 5:
        if ((*param_2 != '\r') && (*param_2 != '\n')) {
          iVar4 = param_1[0x158];
          if (iVar4 <= param_1[0x159]) {
            if (iVar4 == 0) {
              param_1[0x158] = 0x80;
              iVar4 = (*(code *)PTR__malloc_101554b8)(0x83);
            }
            else {
              param_1[0x158] = iVar4 * 2;
              iVar4 = (*(code *)PTR__realloc_101554c0)(param_1[0x157],iVar4 * 2 + 3);
            }
            if (iVar4 == 0) {
              return 6;
            }
            param_1[0x157] = iVar4;
          }
          *(char *)(param_1[0x157] + param_1[0x159]) = *param_2;
          param_1[0x159] = param_1[0x159] + 1;
          goto LAB_100f1904;
        }
        if (param_1[0x159] == 0) {
          param_1[10] = 7;
        }
        else {
          *(undefined1 *)(param_1[0x159] + param_1[0x157]) = 0xd;
          iVar4 = param_1[0x159];
          param_1[0x159] = iVar4 + 1;
          *(undefined1 *)(iVar4 + 1 + param_1[0x157]) = 10;
          iVar4 = param_1[0x159];
          param_1[0x159] = iVar4 + 1;
          *(undefined1 *)(iVar4 + 1 + param_1[0x157]) = 0;
          local_c = 0;
          if ((*(int *)(iVar5 + 0x58c) == 0) &&
             (local_c = FUN_100d8fc0(param_1,2,param_1[0x157],param_1[0x159]), local_c != 0)) {
            return 4;
          }
          param_1[0x159] = 0;
          param_1[10] = 6;
          if (*param_2 != '\n') goto LAB_100f1904;
        }
        break;
      case 6:
        if (*param_2 != '\n') {
          return 3;
        }
        param_1[10] = 7;
LAB_100f1904:
        param_2 = param_2 + 1;
        bVar7 = local_8 != 0;
        local_8 = local_8 - 1;
        iVar6 = iVar6 + -1 + (uint)bVar7;
        local_4 = iVar6;
        break;
      case 7:
        if (*param_2 == '\r') {
          param_2 = param_2 + 1;
          bVar7 = local_8 != 0;
          local_8 = local_8 - 1;
          iVar6 = iVar6 + -1 + (uint)bVar7;
          local_4 = iVar6;
        }
        else if (*param_2 != '\n') {
          param_1[10] = 5;
          break;
        }
        param_1[10] = 4;
      }
    } while (local_8 != 0 || iVar6 != 0);
  }
  return 0;
}


/* END FUNCTION 0x100f1580 */

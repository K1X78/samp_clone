/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de240
 * Name: FUN_100de240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100de240(undefined1 *param_1,char *param_2,char *param_3,int param_4)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int local_c;
  undefined1 *local_8;
  undefined1 *local_4;
  
  iVar5 = (int)param_1;
  local_c = 0;
  local_4 = (undefined1 *)0x0;
  FUN_100d9bb0(*(undefined4 *)((int)param_1 + 0x28));
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  if (*(int *)((int)param_1 + 0x4c) == 1) {
    *(undefined4 *)((int)param_1 + 0x4c) = 1;
    *(undefined4 *)((int)param_1 + 0x50) = 0;
    *(undefined4 *)((int)param_1 + 0x54) = 0;
  }
  pcVar2 = *(char **)((int)param_1 + 0x30);
  if ((pcVar2 != (char *)0x0) ||
     (pcVar2 = (char *)FUN_100dcb10("Content-Type"), pcVar2 != (char *)0x0)) {
    param_2 = pcVar2;
  }
  if (param_2 == (char *)0x0) {
    if (*(int *)((int)param_1 + 0xc) == 2) {
      param_2 = (char *)FUN_100de1d0();
      if (((param_2 == (char *)0x0) && (param_2 = (char *)FUN_100de1d0(), param_2 == (char *)0x0))
         && (*(int *)((int)param_1 + 0x34) != 0)) {
        param_2 = "application/octet-stream";
      }
    }
    else if (*(int *)((int)param_1 + 0xc) == 4) {
      param_2 = "multipart/mixed";
    }
    else {
      param_2 = (char *)FUN_100de1d0();
    }
  }
  if (*(int *)((int)param_1 + 0xc) == 4) {
    local_c = *(int *)((int)param_1 + 0x20);
    if (local_c != 0) {
      local_4 = *(undefined1 **)(local_c + 0x10);
    }
  }
  else if (((param_2 != (char *)0x0) && (pcVar2 == (char *)0x0)) &&
          ((iVar3 = FUN_100de830(param_2,"text/plain"), iVar3 != 0 &&
           ((param_4 == 0 || (*(int *)((int)param_1 + 0x34) == 0)))))) {
    param_2 = (char *)0x0;
  }
  iVar3 = FUN_100dcb10("Content-Disposition");
  if (iVar3 == 0) {
    if (param_3 != (char *)0x0) {
LAB_100de3a5:
      iVar3 = thunk_FUN_100de830(param_3,"attachment");
      if ((((iVar3 == 0) || (*(int *)((int)param_1 + 0x38) != 0)) ||
          (*(int *)((int)param_1 + 0x34) != 0)) && (param_3 != (char *)0x0)) {
        piVar1 = (int *)((int)param_1 + 0x38);
        param_1 = (undefined1 *)0x0;
        local_8 = (undefined1 *)0x0;
        if ((*piVar1 == 0) || (param_1 = (undefined1 *)FUN_100dca60(), param_1 != (undefined1 *)0x0)
           ) {
          if (*(int *)(iVar5 + 0x34) == 0) {
            puVar10 = &DAT_10117a39;
            puVar9 = &DAT_10117a39;
            pcVar2 = "";
          }
          else {
            local_8 = (undefined1 *)FUN_100dca60();
            if (local_8 == (undefined1 *)0x0) {
              iVar3 = 0x1b;
              goto LAB_100de467;
            }
            puVar10 = &DAT_10117f8c;
            pcVar2 = "; filename=\"";
            puVar9 = local_8;
          }
          if (param_1 == (undefined1 *)0x0) {
            puVar8 = &DAT_10117a39;
            puVar7 = &DAT_10117a39;
            pcVar4 = "";
          }
          else {
            puVar8 = &DAT_10117f8c;
            pcVar4 = "; name=\"";
            puVar7 = param_1;
          }
          iVar3 = FUN_100de140(iVar5 + 0x28,"Content-Disposition: %s%s%s%s%s%s%s",param_3,pcVar4,
                               puVar7,puVar8,pcVar2,puVar9,puVar10);
        }
        else {
          iVar3 = 0x1b;
          local_8 = (undefined1 *)0x0;
        }
LAB_100de467:
        (*(code *)PTR__free_101554bc)(param_1);
        (*(code *)PTR__free_101554bc)(local_8);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      goto LAB_100de484;
    }
    if ((*(int *)((int)param_1 + 0x34) != 0) || (*(int *)((int)param_1 + 0x38) != 0)) {
LAB_100de39c:
      param_3 = "attachment";
      goto LAB_100de3a5;
    }
    if (param_2 != (char *)0x0) {
      iVar3 = FUN_100de8c0(param_2,"multipart/",10);
      if (iVar3 != 0) goto LAB_100de484;
      goto LAB_100de39c;
    }
  }
  else {
LAB_100de484:
    if (param_2 != (char *)0x0) {
      if (local_4 == (undefined1 *)0x0) {
        local_4 = &DAT_10117a39;
        pcVar2 = "";
      }
      else {
        pcVar2 = "; boundary=";
      }
      iVar3 = FUN_100de140(iVar5 + 0x28,"Content-Type: %s%s%s",param_2,pcVar2,local_4);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  iVar3 = FUN_100dcb10("Content-Transfer-Encoding");
  if (iVar3 == 0) {
    if (*(undefined4 **)(iVar5 + 0x58) == (undefined4 *)0x0) {
      if (((param_2 == (char *)0x0) || (param_4 != 0)) || (*(int *)(iVar5 + 0xc) == 4))
      goto LAB_100de4ff;
      puVar6 = &DAT_101258a8;
    }
    else {
      puVar6 = (undefined *)**(undefined4 **)(iVar5 + 0x58);
      if (puVar6 == (undefined *)0x0) goto LAB_100de4ff;
    }
    iVar3 = FUN_100de140((undefined4 *)(iVar5 + 0x28),"Content-Transfer-Encoding: %s",puVar6);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
LAB_100de4ff:
  iVar3 = 0;
  if (*(int *)(iVar5 + 0x4c) == 1) {
    *(undefined4 *)(iVar5 + 0x4c) = 1;
    *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar5 + 0x28);
    *(undefined4 *)(iVar5 + 0x54) = 0;
  }
  if ((*(int *)(iVar5 + 0xc) == 4) && (local_c != 0)) {
    pcVar2 = (char *)0x0;
    iVar5 = FUN_100de830(param_2,"multipart/form-data");
    if (iVar5 != 0) {
      pcVar2 = "form-data";
    }
    iVar5 = *(int *)(local_c + 8);
    while ((iVar5 != 0 && (iVar3 = FUN_100de240(iVar5,0,pcVar2,param_4), iVar3 == 0))) {
      iVar5 = *(int *)(iVar5 + 8);
    }
  }
  return iVar3;
}


/* END FUNCTION 0x100de240 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ec010
 * Name: FUN_100ec010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ec010(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int local_10;
  int *local_c;
  int *local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_4 = 0;
  if (param_2 == 0) {
    puVar4 = (undefined1 *)param_1[0x5c];
    puVar5 = (undefined1 *)param_1[0x5d];
    local_c = param_1 + 0xd0;
    local_8 = param_1 + 0xf3;
    iVar6 = *param_1 + 0x495c;
  }
  else {
    puVar4 = (undefined1 *)param_1[0x3d];
    puVar5 = (undefined1 *)param_1[0x3e];
    local_c = param_1 + 0xcd;
    local_8 = param_1 + 0x102;
    iVar6 = *param_1 + 0x4974;
  }
  *(undefined4 *)(iVar6 + 0xc) = 0;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_10117a39;
  }
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_10117a39;
  }
  if ((DAT_102acad8 != 0) || (iVar2 = FUN_100cd420(), DAT_102acad8 != 0)) {
    iVar2 = *local_8;
    if (iVar2 == 2) {
      iVar2 = FUN_100f4cc0(*param_1,puVar4,puVar5,local_8,&local_10,&local_4);
      piVar1 = local_c;
      if (iVar2 != 0) {
        return iVar2;
      }
      if (local_10 != 0) {
        (*(code *)PTR__free_101554bc)(*local_c);
        pcVar3 = "Proxy-";
        if (param_2 == 0) {
          pcVar3 = "";
        }
        iVar2 = FUN_100cd220("%sAuthorization: NTLM %s\r\n",pcVar3,local_10);
        *piVar1 = iVar2;
        (*(code *)PTR__free_101554bc)(local_10);
        if (*piVar1 == 0) {
          return 0x1b;
        }
        *local_8 = 3;
        *(undefined4 *)(iVar6 + 0xc) = 1;
      }
    }
    else {
      if (iVar2 == 3) {
        *local_8 = 4;
LAB_100ec155:
        (*(code *)PTR__free_101554bc)(*local_c);
        *local_c = 0;
        *(undefined4 *)(iVar6 + 0xc) = 1;
        return 0;
      }
      if (iVar2 == 4) goto LAB_100ec155;
      iVar6 = FUN_100f4af0(*param_1,puVar4,puVar5,local_8,&local_10,&local_4);
      piVar1 = local_c;
      if (iVar6 != 0) {
        return iVar6;
      }
      if (local_10 != 0) {
        (*(code *)PTR__free_101554bc)(*local_c);
        pcVar3 = "Proxy-";
        if (param_2 == 0) {
          pcVar3 = "";
        }
        iVar6 = FUN_100cd220("%sAuthorization: NTLM %s\r\n",pcVar3,local_10);
        *piVar1 = iVar6;
        (*(code *)PTR__free_101554bc)(local_10);
        if (*piVar1 == 0) {
          return 0x1b;
        }
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}


/* END FUNCTION 0x100ec010 */

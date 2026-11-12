/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eb6e0
 * Name: FUN_100eb6e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100eb6e0(int *param_1,int param_2,undefined4 param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 uStack_8;
  undefined1 auStack_4 [4];
  
  iVar3 = *param_1;
  if (param_2 == 0) {
    puVar5 = (undefined1 *)param_1[0x5c];
    puVar6 = (undefined1 *)param_1[0x5d];
    piVar7 = param_1 + 0xd0;
    param_1 = (int *)(iVar3 + 0x495c);
    piVar4 = (int *)(iVar3 + 0x48b4);
  }
  else {
    puVar5 = (undefined1 *)param_1[0x3d];
    puVar6 = (undefined1 *)param_1[0x3e];
    piVar7 = param_1 + 0xcd;
    param_1 = (int *)(iVar3 + 0x4974);
    piVar4 = (int *)(iVar3 + 0x48c8);
  }
  (*(code *)PTR__free_101554bc)(*piVar7);
  *piVar7 = 0;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_10117a39;
  }
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &DAT_10117a39;
  }
  if (*piVar4 == 0) {
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    return 0;
  }
  if (*(int *)((int)param_1 + 0x14) != 0) {
    pcVar1 = _strchr(param_4,0x3f);
    if (pcVar1 != (char *)0x0) {
      iVar2 = FUN_100cd220(&DAT_10128780,(int)pcVar1 - (int)param_4,param_4);
      goto LAB_100eb7c6;
    }
  }
  iVar2 = (*(code *)PTR___strdup_101554c4)(param_4);
LAB_100eb7c6:
  if (iVar2 != 0) {
    iVar3 = FUN_100f41f0(iVar3,puVar5,puVar6,param_3,iVar2,piVar4,&uStack_8,auStack_4);
    (*(code *)PTR__free_101554bc)(iVar2);
    if (iVar3 != 0) {
      return iVar3;
    }
    pcVar1 = "Proxy-";
    if (param_2 == 0) {
      pcVar1 = "";
    }
    iVar3 = FUN_100cd220("%sAuthorization: Digest %s\r\n",pcVar1,uStack_8);
    *piVar7 = iVar3;
    (*(code *)PTR__free_101554bc)(uStack_8);
    if (*piVar7 != 0) {
      *(undefined4 *)((int)param_1 + 0xc) = 1;
      return 0;
    }
  }
  return 0x1b;
}


/* END FUNCTION 0x100eb6e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100edf50
 * Name: FUN_100edf50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100edf50(int param_1,char *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 local_15;
  int local_14;
  undefined1 local_10 [16];
  
  bVar2 = false;
  local_14 = 0;
  if (param_3 == 3) {
    if ((*(int *)(param_1 + 0x17c) == -1) || (*(int *)(param_1 + 0x178) < *(int *)(param_1 + 0x17c))
       ) {
      *(undefined4 *)(param_1 + 0x4868) = 1;
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      if (*(int *)(param_1 + 0x538) != 0) {
        if (*(int *)(param_1 + 0x70c) != 0) {
          (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x708));
          *(undefined4 *)(param_1 + 0x708) = 0;
          *(undefined4 *)(param_1 + 0x70c) = 0;
        }
        iVar3 = (*(code *)PTR___strdup_101554c4)(*(undefined4 *)(param_1 + 0x700));
        *(int *)(param_1 + 0x708) = iVar3;
        if (iVar3 == 0) {
          return 0x1b;
        }
        *(undefined4 *)(param_1 + 0x70c) = 1;
      }
    }
    else {
      local_14 = 1;
      param_3 = 1;
    }
  }
  iVar3 = _sscanf(param_2,"%15[^?&/:]://%c",local_10,&local_15);
  if (iVar3 == 2) {
    iVar3 = FUN_100edc40();
    bVar2 = true;
    iVar3 = (*(code *)PTR__malloc_101554b8)(iVar3 + 1);
    if (iVar3 == 0) {
      return 0x1b;
    }
    FUN_100edc90();
  }
  else {
    iVar3 = FUN_100edd40(param_2);
    if (iVar3 == 0) {
      return 0x1b;
    }
  }
  if (param_3 == 1) {
    *(int *)(param_1 + 0x4b7c) = iVar3;
    if (local_14 == 0) {
      return 0;
    }
    FUN_100d8ba0(param_1,"Maximum (%ld) redirects followed",*(undefined4 *)(param_1 + 0x17c));
    return 0x2f;
  }
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x48b0) = 0;
  }
  if (*(int *)(param_1 + 0x704) != 0) {
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x700));
    *(undefined4 *)(param_1 + 0x700) = 0;
    *(undefined4 *)(param_1 + 0x704) = 0;
  }
  *(int *)(param_1 + 0x700) = iVar3;
  *(undefined4 *)(param_1 + 0x704) = 1;
  FUN_100d8ae0(param_1,"Issue another request to this URL: \'%s\'\n",iVar3);
  iVar3 = *(int *)(param_1 + 0x4b50);
  if (iVar3 == 0x12d) {
    iVar3 = *(int *)(param_1 + 1000);
    if (((iVar3 != 2) && (iVar3 != 3)) && (iVar3 != 4)) goto LAB_100ee1ad;
    bVar1 = *(byte *)(param_1 + 0x180) & 1;
  }
  else {
    if (iVar3 != 0x12e) {
      if (((iVar3 == 0x12f) && (*(int *)(param_1 + 1000) != 1)) &&
         ((*(byte *)(param_1 + 0x180) & 4) == 0)) {
        *(undefined4 *)(param_1 + 1000) = 1;
        puVar4 = &DAT_101276b8;
        if (*(int *)(param_1 + 0x53c) == 0) {
          puVar4 = &DAT_101276a0;
        }
        FUN_100d8ae0(param_1,"Disables POST, goes with %s\n",puVar4);
      }
      goto LAB_100ee1ad;
    }
    iVar3 = *(int *)(param_1 + 1000);
    if (((iVar3 != 2) && (iVar3 != 3)) && (iVar3 != 4)) goto LAB_100ee1ad;
    bVar1 = *(byte *)(param_1 + 0x180) & 2;
  }
  if (bVar1 == 0) {
    FUN_100d8ae0(param_1,"Switch from POST to GET\n");
    *(undefined4 *)(param_1 + 1000) = 1;
  }
LAB_100ee1ad:
  FUN_100e2ff0(param_1,10);
  FUN_100e3b60(param_1);
  return 0;
}


/* END FUNCTION 0x100edf50 */

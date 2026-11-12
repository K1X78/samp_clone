/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100db030
 * Name: FUN_100db030
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100db030(undefined4 param_1,char *param_2,undefined4 *param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined **_File;
  bool bVar8;
  
  _File = (undefined **)0x0;
  bVar3 = true;
  puVar4 = param_3;
  if (param_3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(*(code *)PTR__calloc_101554c8)(1,0x14);
    if (puVar4 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    pcVar5 = param_2;
    if (param_2 == (char *)0x0) {
      pcVar5 = "none";
    }
    iVar6 = (*(code *)PTR___strdup_101554c4)(pcVar5);
    puVar4[1] = iVar6;
    if (iVar6 == 0) goto LAB_100db0e2;
  }
  puVar4[2] = 0;
  if (param_2 == (char *)0x0) {
LAB_100db0bd:
    _File = (undefined **)0x0;
  }
  else {
    iVar6 = 2;
    bVar8 = true;
    pcVar5 = param_2;
    pcVar7 = "-";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar8 = *pcVar5 == *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (bVar8) {
      _File = &PTR_DAT_10155938;
      bVar3 = false;
    }
    else {
      if (*param_2 == '\0') goto LAB_100db0bd;
      _File = (undefined **)FUN_100f9cc9(param_2,&DAT_10125254);
    }
  }
  puVar4[4] = param_4;
  if ((FILE *)_File != (FILE *)0x0) {
    pcVar5 = (char *)(*(code *)PTR__malloc_101554b8)(5000);
    if (pcVar5 == (char *)0x0) {
LAB_100db0e2:
      (*(code *)PTR__free_101554bc)(0);
      if (param_3 == (undefined4 *)0x0) {
        (*(code *)PTR__free_101554bc)(puVar4[1]);
        FUN_100dacd0(*puVar4);
        (*(code *)PTR__free_101554bc)(puVar4);
      }
      if ((bVar3) && ((FILE *)_File != (FILE *)0x0)) {
        _fclose((FILE *)_File);
      }
      return (undefined4 *)0x0;
    }
    iVar6 = FUN_100daa60(pcVar5,_File);
    while (iVar6 != 0) {
      iVar6 = thunk_FUN_100de8c0("Set-Cookie:",pcVar5,0xb);
      pcVar7 = pcVar5;
      if (iVar6 != 0) {
        pcVar7 = pcVar5 + 0xb;
      }
      cVar2 = *pcVar7;
      while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
        cVar2 = *pcVar1;
      }
      FUN_100d9fe0(param_1,puVar4,iVar6 != 0,pcVar7,0,0);
      iVar6 = FUN_100daa60(pcVar5,_File);
    }
    (*(code *)PTR__free_101554bc)(pcVar5);
    if (bVar3) {
      _fclose((FILE *)_File);
    }
  }
  puVar4[2] = 1;
  return puVar4;
}


/* END FUNCTION 0x100db030 */

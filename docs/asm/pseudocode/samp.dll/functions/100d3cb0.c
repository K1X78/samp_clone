/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d3cb0
 * Name: FUN_100d3cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d3cb0(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *unaff_EDI;
  int local_8;
  int local_4;
  
  pcVar3 = (char *)0x0;
  pcVar4 = (char *)0x0;
  iVar2 = *unaff_EDI;
  local_4 = 0;
  local_8 = 0;
  if ((unaff_EDI[0xa9] != 0) && (local_8 = FUN_100d17f0(), local_8 != 0)) goto LAB_100d3f7a;
  if (((*(int *)(iVar2 + 0x5f4) != 0) &&
      (pcVar4 = (char *)(*(code *)PTR___strdup_101554c4)(*(int *)(iVar2 + 0x5f4)),
      pcVar4 == (char *)0x0)) ||
     ((*(int *)(iVar2 + 0x5f8) != 0 &&
      (pcVar3 = (char *)(*(code *)PTR___strdup_101554c4)(*(int *)(iVar2 + 0x5f8)),
      pcVar3 == (char *)0x0)))) {
    FUN_100d8ba0(iVar2,"memory shortage");
    local_8 = 0x1b;
    goto LAB_100d3f7a;
  }
  if ((*(int *)(iVar2 + 0x658) == 0) && (local_4 = FUN_100eae90("no_proxy"), local_4 == 0)) {
    local_4 = FUN_100eae90("NO_PROXY");
  }
  iVar1 = *(int *)(iVar2 + 0x658);
  if (*(int *)(iVar2 + 0x658) == 0) {
    iVar1 = local_4;
  }
  iVar1 = FUN_100d15e0(unaff_EDI[0x28],iVar1);
  if (iVar1 == 0) {
    if ((pcVar4 == (char *)0x0) && (pcVar3 == (char *)0x0)) {
      pcVar4 = (char *)FUN_100d1720();
    }
  }
  else {
    (*(code *)PTR__free_101554bc)(pcVar4);
    pcVar4 = (char *)0x0;
    (*(code *)PTR__free_101554bc)(pcVar3);
    pcVar3 = (char *)0x0;
  }
  (*(code *)PTR__free_101554bc)(local_4);
  if ((pcVar4 != (char *)0x0) &&
     ((*pcVar4 == '\0' || ((*(byte *)(unaff_EDI[200] + 0x44) & 0x10) != 0)))) {
    (*(code *)PTR__free_101554bc)(pcVar4);
    pcVar4 = (char *)0x0;
  }
  if ((pcVar3 != (char *)0x0) &&
     ((*pcVar3 == '\0' || ((*(byte *)(unaff_EDI[200] + 0x44) & 0x10) != 0)))) {
    (*(code *)PTR__free_101554bc)(pcVar3);
    pcVar3 = (char *)0x0;
  }
  if (pcVar4 == (char *)0x0) {
    if (pcVar3 != (char *)0x0) {
LAB_100d3e4b:
      pcVar4 = (char *)0x0;
      local_8 = FUN_100d3800(iVar2);
      (*(code *)PTR__free_101554bc)(pcVar3);
      pcVar3 = (char *)0x0;
      if (local_8 != 0) goto LAB_100d3f7a;
      goto LAB_100d3e7a;
    }
    unaff_EDI[0xa7] = 0;
    unaff_EDI[0xa6] = 0;
  }
  else {
    local_8 = FUN_100d3800(iVar2);
    (*(code *)PTR__free_101554bc)(pcVar4);
    pcVar4 = (char *)0x0;
    if (local_8 != 0) goto LAB_100d3f7a;
    if (pcVar3 != (char *)0x0) goto LAB_100d3e4b;
LAB_100d3e7a:
    if (unaff_EDI[0x37] == 0) {
      unaff_EDI[0xa6] = 0;
      unaff_EDI[0xb1] = 0;
    }
    else {
      if ((*(byte *)(unaff_EDI[200] + 0x40) & 3) == 0) {
        if (((*(uint *)(unaff_EDI[200] + 0x44) & 0x800) != 0) && (unaff_EDI[0xb1] == 0)) {
          unaff_EDI[200] = (int)&PTR_DAT_10126f20;
          unaff_EDI[0xa6] = 1;
          goto LAB_100d3ed9;
        }
        unaff_EDI[0xb1] = 1;
      }
      unaff_EDI[0xa6] = 1;
    }
LAB_100d3ed9:
    if (unaff_EDI[0x2f] == 0) {
      unaff_EDI[0xa7] = 0;
    }
    else {
      if ((unaff_EDI[0x37] == 0) && (unaff_EDI[0x35] == 0)) {
        iVar2 = unaff_EDI[0x3d];
        unaff_EDI[0x3d] = 0;
        unaff_EDI[0x35] = iVar2;
        (*(code *)PTR__free_101554bc)(unaff_EDI[0x36]);
        unaff_EDI[0x36] = unaff_EDI[0x3e];
        unaff_EDI[0x3e] = 0;
      }
      unaff_EDI[0xa7] = 1;
    }
  }
  pcVar4 = (char *)0x0;
  if ((unaff_EDI[0xa6] == 0) && (unaff_EDI[0xa7] == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  unaff_EDI[0xa5] = iVar2;
  if (iVar2 == 0) {
    unaff_EDI[0xa5] = 0;
    unaff_EDI[0xa6] = 0;
    unaff_EDI[0xa7] = 0;
    unaff_EDI[0xa9] = 0;
    unaff_EDI[0xb1] = 0;
  }
LAB_100d3f7a:
  (*(code *)PTR__free_101554bc)(pcVar3);
  (*(code *)PTR__free_101554bc)(pcVar4);
  return local_8;
}


/* END FUNCTION 0x100d3cb0 */

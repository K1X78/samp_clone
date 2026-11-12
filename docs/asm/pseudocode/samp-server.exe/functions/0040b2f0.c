/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b2f0
 * Name: FUN_0040b2f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0040b2f0(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char *in_EAX;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  longlong lVar6;
  uint local_8;
  int local_4;
  
  if ((((in_EAX != (char *)0x0) && (*(char *)(unaff_ESI + 0x13) == '\0')) &&
      (*(char *)(unaff_ESI + 5) != '\x04')) && (*(char *)(unaff_ESI + 5) != '\x02')) {
    *(undefined1 *)(unaff_ESI + 0x13) = 1;
    iVar5 = 0;
    cVar2 = *in_EAX;
    while (cVar2 != '\0') {
      iVar4 = iVar5 + 1;
      iVar5 = iVar5 + 1;
      cVar2 = in_EAX[iVar4];
    }
    if (*(char *)(unaff_ESI + 9) != '\0') {
      lVar6 = FUN_0040b200();
      *(longlong *)(unaff_ESI + 0x48) = lVar6;
    }
    iVar4 = FUN_0040b0a0();
    if (((iVar4 == 0) && (iVar4 = FUN_00407af0(), iVar4 == 0)) &&
       ((iVar4 = FUN_0040b0a0(), iVar4 == 0 &&
        ((iVar4 = FUN_0040b0a0(), iVar4 == 0 && (iVar4 = FUN_00407af0(), iVar4 == 0)))))) {
      uVar3 = *(uint *)(unaff_ESI + 0x48);
      uVar1 = iVar5 + 0x14;
      *(uint *)(unaff_ESI + 0x48) = uVar3 + uVar1;
      *(uint *)(unaff_ESI + 0x4c) =
           *(int *)(unaff_ESI + 0x4c) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar3,uVar1);
      *(bool *)(unaff_ESI + 0x10) = *(char *)(unaff_ESI + 8) == '\0';
      iVar4 = FUN_00407b40();
      if (iVar4 == 0) {
        if ((*(int *)(unaff_ESI + 0x4c) <= local_4) &&
           ((*(int *)(unaff_ESI + 0x4c) < local_4 || (*(uint *)(unaff_ESI + 0x48) < local_8)))) {
          iVar4 = FUN_00407b10();
        }
      }
    }
    return iVar4;
  }
  return 0;
}


/* END FUNCTION 0x0040b2f0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c93b0
 * Name: FUN_100c93b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c93b0(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *unaff_EBX;
  char *unaff_EDI;
  int local_8;
  
  local_8 = 0;
  pcVar2 = unaff_EDI;
  if (unaff_EDI != (char *)0x0) {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_100d18c0();
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  iVar3 = 0;
  if (param_1 != (int *)0x0) {
    if (((unaff_EDI != (char *)0x0) && (*unaff_EDI == ':')) &&
       (local_8 = (*(code *)PTR___strdup_101554c4)(&DAT_10117a39), local_8 == 0)) {
      iVar3 = 0x1b;
    }
    (*(code *)PTR__free_101554bc)(*param_1);
    *param_1 = local_8;
  }
  if (unaff_EBX != (undefined4 *)0x0) {
    (*(code *)PTR__free_101554bc)(*unaff_EBX);
    *unaff_EBX = 0;
  }
  return iVar3;
}


/* END FUNCTION 0x100c93b0 */

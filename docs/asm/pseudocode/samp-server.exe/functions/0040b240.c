/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b240
 * Name: FUN_0040b240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040b240(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  uint local_8;
  int local_4;
  
  iVar3 = 0;
  if (*(int *)(unaff_ESI + 0x48) != 0 || *(int *)(unaff_ESI + 0x4c) != 0) {
    iVar1 = *(int *)(unaff_ESI + 0x5c);
    uVar2 = *(uint *)(unaff_ESI + 0x58);
    if ((param_1 == 0) && (uVar2 != 0 || iVar1 != 0)) {
      iVar3 = FUN_00407af0();
    }
    else {
      iVar3 = FUN_00407b10();
    }
    if ((((iVar3 == 0) &&
         ((((*(char *)(unaff_ESI + 8) != '\0' || (iVar3 = FUN_00407b30(), iVar3 == 0)) &&
           (-1 < iVar1)) && ((0 < iVar1 || (uVar2 != 0)))))) && (iVar3 = FUN_00407b40(), iVar3 == 0)
        ) && ((iVar1 <= local_4 && ((iVar1 < local_4 || (uVar2 < local_8)))))) {
      iVar3 = FUN_00407b10();
    }
  }
  return iVar3;
}


/* END FUNCTION 0x0040b240 */

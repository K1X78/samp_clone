/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426540
 * Name: FUN_00426540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x00426590) */

int FUN_00426540(void)

{
  int iVar1;
  uint uVar2;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0xac) != 0) ||
     (((iVar1 = FUN_00407b50(), iVar1 == 0 && (iVar1 = FUN_00407c50(), iVar1 == 0)) &&
      (*(int *)(unaff_ESI + 0xac) != 0)))) {
    iVar1 = FUN_00407b50();
    if (iVar1 == 0) {
      if (*(char *)(unaff_ESI + 8) == '\0') {
        uVar2 = (uint)*(byte *)(unaff_ESI + 10);
      }
      else {
        uVar2 = 0;
      }
      iVar1 = FUN_00423850(uVar2,*(uint *)(unaff_ESI + 0x84));
      *(int *)(unaff_ESI + 0xac) = 0;
      return iVar1;
    }
    FUN_00407b60();
  }
  return iVar1;
}


/* END FUNCTION 0x00426540 */

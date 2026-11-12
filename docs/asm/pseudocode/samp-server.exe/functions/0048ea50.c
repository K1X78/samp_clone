/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048ea50
 * Name: FUN_0048ea50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0048ea50(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  
  iVar1 = FUN_0048e0b0(unaff_ESI,0,0,0);
  if (iVar1 == 0) {
    while (unaff_ESI[0x1b] == 0) {
      if ((unaff_EDI != (undefined4 *)0x0) && (iVar1 = (*(code *)*unaff_EDI)(), iVar1 != 0)) {
        return 10;
      }
      iVar2 = FUN_0048e0b0(unaff_ESI,0,0,0);
      iVar1 = 0;
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  return iVar1;
}


/* END FUNCTION 0x0048ea50 */

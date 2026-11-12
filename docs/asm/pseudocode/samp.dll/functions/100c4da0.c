/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c4da0
 * Name: FUN_100c4da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c4da0(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  
  iVar1 = FUN_100c42b0();
  if (iVar1 == 0) {
    while (*(int *)(unaff_ESI + 0x6c) == 0) {
      if ((unaff_EDI != (undefined4 *)0x0) && (iVar1 = (*(code *)*unaff_EDI)(), iVar1 != 0)) {
        return 10;
      }
      iVar2 = FUN_100c42b0();
      iVar1 = 0;
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  return iVar1;
}


/* END FUNCTION 0x100c4da0 */

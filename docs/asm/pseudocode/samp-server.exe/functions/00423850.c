/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00423850
 * Name: FUN_00423850
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00423850(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 0;
  if (unaff_EDI != 0) {
    bVar1 = false;
    iVar2 = FUN_00407b50();
    if (iVar2 == 0) {
      *(undefined1 *)(unaff_EDI + 0x1c) = 1;
      iVar2 = FUN_0041f130(param_1,param_2);
      if (iVar2 == 0) {
        bVar1 = true;
      }
    }
    FUN_0040bdd0();
    FUN_00407ab0();
    if (bVar1) {
      FUN_00407c40();
    }
    FUN_004080d0(*(int *)(unaff_EDI + 0x14));
    FUN_004080d0(unaff_EDI);
  }
  return iVar2;
}


/* END FUNCTION 0x00423850 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004039b0
 * Name: FUN_004039b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004039b0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar3 = 0;
  iVar2 = param_1 + -1;
  if (0 < iVar2) {
    do {
      uVar1 = *(undefined1 *)(iVar3 + unaff_ESI);
      *(undefined1 *)(iVar3 + unaff_ESI) = *(undefined1 *)(unaff_ESI + iVar2);
      *(undefined1 *)(unaff_ESI + iVar2) = uVar1;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != iVar3 && -1 < iVar2 - iVar3);
  }
  return;
}


/* END FUNCTION 0x004039b0 */

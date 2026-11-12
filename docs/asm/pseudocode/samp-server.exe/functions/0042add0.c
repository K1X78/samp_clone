/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042add0
 * Name: FUN_0042add0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_0042add0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = (int)*(short *)(unaff_EDI + 0x5c);
  if (0x12 < *(short *)(unaff_EDI + 0x5c)) {
    iVar2 = FUN_0041d790();
    return iVar2;
  }
  iVar1 = FUN_0042a810();
  if (iVar1 == 0) {
    *(int *)(unaff_EDI + 100 + iVar2 * 4) = param_1;
    *(undefined2 *)(unaff_EDI + 0xb2 + iVar2 * 2) = 0;
    *(short *)(unaff_EDI + 0x5c) = *(short *)(unaff_EDI + 0x5c) + 1;
    *(undefined2 *)(unaff_EDI + 0x3e) = 0;
    *(undefined1 *)(unaff_EDI + 0x42) = 0;
    if ((*(short *)(param_1 + 0x10) != 0) &&
       (*(char *)(param_1 + 2) == *(char *)(*(int *)(unaff_EDI + 0x60 + iVar2 * 4) + 2))) {
      return 0;
    }
    iVar1 = FUN_0041d790();
  }
  return iVar1;
}


/* END FUNCTION 0x0042add0 */

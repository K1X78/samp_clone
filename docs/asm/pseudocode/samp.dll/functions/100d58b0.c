/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d58b0
 * Name: FUN_100d58b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100d58b0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int unaff_ESI;
  int *unaff_EDI;
  bool bVar2;
  
  uVar1 = 0;
  if (param_2 == 0) {
    return uVar1;
  }
  if ((*(int *)(unaff_ESI + 0xf0) == 2) && (*(int *)(unaff_ESI + 0x304) == 0)) {
    uVar1 = FUN_100cf040();
    return uVar1;
  }
  bVar2 = *(int *)(unaff_ESI + 0x1a0) != -1;
  if (bVar2) {
    *unaff_EDI = *(int *)(unaff_ESI + 0x1a0);
    uVar1 = 0x10000;
  }
  if (*(int *)(unaff_ESI + 0x1a4) != -1) {
    unaff_EDI[bVar2] = *(int *)(unaff_ESI + 0x1a4);
    uVar1 = uVar1 | 1 << bVar2 + 0x10;
  }
  return uVar1;
}


/* END FUNCTION 0x100d58b0 */

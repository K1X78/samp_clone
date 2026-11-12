/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ce80
 * Name: FUN_0040ce80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040ce80(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *unaff_EBX;
  int unaff_ESI;
  
  iVar3 = *(int *)(unaff_ESI + 0x60 + *(short *)(unaff_ESI + 0x5c) * 4);
  if (*(short *)(unaff_ESI + 0x3e) == 0) {
    FUN_0040c910((uint)*(ushort *)(unaff_ESI + 0xb0 + *(short *)(unaff_ESI + 0x5c) * 2),
                 (int *)(unaff_ESI + 0x20));
  }
  iVar1 = (uint)*(ushort *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0x20);
  if (*(char *)(iVar3 + 2) == '\0') {
    iVar3 = *(int *)(unaff_ESI + 0x28);
  }
  else {
    iVar3 = 0;
  }
  uVar2 = (uint)*(ushort *)(unaff_ESI + 0x3a);
  if (param_1 != 0) {
    iVar1 = iVar1 + iVar3;
    uVar2 = uVar2 - iVar3;
  }
  *unaff_EBX = uVar2;
  return iVar1;
}


/* END FUNCTION 0x0040ce80 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c740
 * Name: FUN_0040c740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0040c740(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  uVar1 = *(ushort *)(unaff_EDI + 0x18) / 5 + 1;
  iVar2 = ((param_1 - 2U) / uVar1) * uVar1;
  iVar3 = iVar2 + 2;
  if (iVar3 == DAT_004ca204 / (int)(uint)*(ushort *)(unaff_EDI + 0x16) + 1) {
    iVar3 = iVar2 + 3;
  }
  return iVar3;
}


/* END FUNCTION 0x0040c740 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041a040
 * Name: FUN_0041a040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0041a040(int param_1)

{
  int in_EAX;
  int unaff_EBX;
  int unaff_EDI;
  
  if (param_1 == 0) {
    FUN_004158d0(unaff_EBX,in_EAX);
    FUN_004158d0(unaff_EBX,unaff_EDI);
    return;
  }
  if ((unaff_EDI != 0) &&
     (*(int *)(param_1 + 0xc) = unaff_EDI, (*(ushort *)(unaff_EDI + 2) & 0x100) != 0)) {
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 0x100;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(unaff_EDI + 0x14);
  }
  if ((in_EAX != 0) && (*(int *)(param_1 + 8) = in_EAX, (*(ushort *)(in_EAX + 2) & 0x100) != 0)) {
    *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 0x100;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_EAX + 0x14);
  }
  FUN_0040e420();
  return;
}


/* END FUNCTION 0x0041a040 */

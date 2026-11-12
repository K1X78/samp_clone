/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040bbb0
 * Name: FUN_0040bbb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040bbb0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_EBX;
  undefined1 *unaff_ESI;
  
  piVar1 = (int *)(unaff_EBX + 0x38);
  FUN_00408fa0(unaff_ESI);
  FUN_00408fa0(unaff_ESI + 4);
  *(undefined4 *)(unaff_ESI + 8) = *(undefined4 *)(unaff_EBX + 0x40);
  *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(unaff_EBX + 0x44);
  uVar2 = (uint)(*(char *)(unaff_EBX + 0x2d) == '\0');
  FUN_0040baa0(piVar1,8,uVar2,piVar1);
  FUN_0040baa0(piVar1,(uint)*(ushort *)(unaff_EBX + 0x18),uVar2,piVar1);
  FUN_00408fa0(unaff_ESI + 0x10);
  FUN_00408fa0(unaff_ESI + 0x14);
  return;
}


/* END FUNCTION 0x0040bbb0 */

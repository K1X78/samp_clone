/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040dc60
 * Name: FUN_0040dc60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040dc60(void)

{
  undefined4 *unaff_EBX;
  int iVar1;
  int iVar2;
  
  iVar1 = unaff_EBX[4];
  iVar2 = 0;
  if (*(short *)(unaff_EBX + 1) != 0) {
    do {
      if (*(int *)(iVar1 + 0x24) != 0) {
        FUN_0040d250(iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < (int)(uint)*(ushort *)(unaff_EBX + 1));
  }
  if ((*(byte *)((int)unaff_EBX + 6) & 1) != 0) {
    FUN_00408130(*(int *)*unaff_EBX);
  }
  return;
}


/* END FUNCTION 0x0040dc60 */

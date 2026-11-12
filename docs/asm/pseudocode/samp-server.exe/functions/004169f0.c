/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004169f0
 * Name: FUN_004169f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_004169f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x1c) == 0) {
    iVar1 = *(int *)(unaff_ESI + 0x10);
    iVar2 = FUN_0040b9a0();
    iVar3 = FUN_004125b0(*(int *)(unaff_ESI + 4) + 2);
    *(int *)(unaff_ESI + 0x1c) = iVar3;
    if (iVar3 == 0) {
      *(undefined1 *)(iVar2 + 0x1e) = 1;
      return 0;
    }
    iVar2 = 0;
    if (0 < *(int *)(unaff_ESI + 4)) {
      do {
        *(undefined1 *)(iVar2 + *(int *)(unaff_ESI + 0x1c)) =
             *(undefined1 *)
              (*(int *)(iVar1 + 0x10) + 0x16 + *(int *)(*(int *)(unaff_ESI + 8) + iVar2 * 4) * 0x18)
        ;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_ESI + 4));
    }
    *(undefined1 *)(iVar2 + *(int *)(unaff_ESI + 0x1c)) = 0x62;
    *(undefined1 *)(iVar2 + 1 + *(int *)(unaff_ESI + 0x1c)) = 0;
  }
  return *(undefined4 *)(unaff_ESI + 0x1c);
}


/* END FUNCTION 0x004169f0 */

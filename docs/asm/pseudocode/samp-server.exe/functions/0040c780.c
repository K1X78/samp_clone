/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c780
 * Name: FUN_0040c780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0040c780(void)

{
  undefined1 *puVar1;
  uint in_EAX;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar2 = *(byte *)(unaff_EDI + 1) - 1;
  if (-1 < iVar2) {
    piVar3 = (int *)(unaff_EDI + 0x14 + iVar2 * 8);
    do {
      if ((int)(uint)*(ushort *)(piVar3 + 1) <= (int)in_EAX) {
        if (*(ushort *)(piVar3 + 1) == in_EAX) {
          return *piVar3;
        }
        in_EAX = in_EAX - 1;
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -2;
    } while (-1 < iVar2);
  }
  puVar1 = (undefined1 *)
           ((uint)*(ushort *)(unaff_EDI + 0xc) + *(int *)(unaff_EDI + 0x40) + in_EAX * 2);
  return *(int *)(unaff_EDI + 0x40) +
         (uint)(CONCAT11(*puVar1,puVar1[1]) & *(ushort *)(unaff_EDI + 0x12));
}


/* END FUNCTION 0x0040c780 */

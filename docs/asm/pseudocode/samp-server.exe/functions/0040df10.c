/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040df10
 * Name: FUN_0040df10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0040df10(void)

{
  char *pcVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (*(char *)((int)unaff_ESI + 0x39) == '\0') {
    FUN_00407e50(*(int *)(*unaff_ESI + 0x44));
    pcVar1 = (char *)unaff_ESI[5];
    iVar2 = 0;
    if (0 < unaff_ESI[3]) {
      do {
        if (*pcVar1 == '\f') {
          *(undefined4 *)(unaff_ESI[0x10] + -4 + *(int *)(pcVar1 + 4) * 4) =
               *(undefined4 *)(pcVar1 + 0x10);
        }
        iVar2 = iVar2 + 1;
        pcVar1 = pcVar1 + 0x14;
      } while (iVar2 < unaff_ESI[3]);
    }
    *(undefined1 *)((int)unaff_ESI + 0x39) = 1;
    FUN_00407e90(*(int *)(*unaff_ESI + 0x44));
  }
  return;
}


/* END FUNCTION 0x0040df10 */

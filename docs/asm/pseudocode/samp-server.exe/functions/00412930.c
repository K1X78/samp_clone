/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412930
 * Name: FUN_00412930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_00412930(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  
  if (unaff_ESI != 0) {
    if (*(char *)(unaff_ESI + 0x1e) != '\0') {
      return (undefined4 *)0x0;
    }
    if ((*(char *)(unaff_ESI + 0xea) != '\0') &&
       (param_1 <= (int)(uint)*(ushort *)(unaff_ESI + 0xe8))) {
      puVar1 = *(undefined4 **)(unaff_ESI + 0xf4);
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined4 *)(unaff_ESI + 0xf4) = *puVar1;
        iVar2 = *(int *)(unaff_ESI + 0xec) + 1;
        *(int *)(unaff_ESI + 0xec) = iVar2;
        if (iVar2 <= *(int *)(unaff_ESI + 0xf0)) {
          return puVar1;
        }
        *(int *)(unaff_ESI + 0xf0) = iVar2;
        return puVar1;
      }
    }
  }
  puVar1 = (undefined4 *)FUN_004125b0(param_1);
  if ((puVar1 == (undefined4 *)0x0) && (unaff_ESI != 0)) {
    *(undefined1 *)(unaff_ESI + 0x1e) = 1;
  }
  return puVar1;
}


/* END FUNCTION 0x00412930 */

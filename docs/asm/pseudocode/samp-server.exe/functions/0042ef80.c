/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042ef80
 * Name: FUN_0042ef80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0042ef80(void)

{
  int in_EAX;
  int *piVar1;
  undefined4 *unaff_ESI;
  
  if (in_EAX != 0) {
    piVar1 = FUN_0042ef10(*(byte *)(*(int *)(*(int *)((int)*unaff_ESI + 8) + 0xc) + 0x49),
                          (void *)*unaff_ESI);
    if (piVar1 == (int *)0x0) {
      FUN_00418b00((undefined **)"no such collation sequence: %s");
      unaff_ESI[0x10] = unaff_ESI[0x10] + 1;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x0042ef80 */

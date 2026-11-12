/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041cc20
 * Name: FUN_0041cc20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_0041cc20(void)

{
  undefined4 *puVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  puVar1 = FUN_00417b70();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0040fce0(unaff_ESI,unaff_EDI);
    return (undefined4 *)0x0;
  }
  *(undefined1 *)puVar1 = 0x74;
  puVar1[2] = unaff_EDI;
  *(undefined1 *)((int)puVar1 + 1) = 99;
  return puVar1;
}


/* END FUNCTION 0x0041cc20 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404480
 * Name: FUN_00404480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_00404480(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  
  puVar1 = _malloc(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  *puVar1 = *unaff_ESI;
  *unaff_ESI = puVar1;
  return puVar1;
}


/* END FUNCTION 0x00404480 */

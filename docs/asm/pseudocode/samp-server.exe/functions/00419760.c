/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419760
 * Name: FUN_00419760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00419760(void)

{
  undefined4 *puVar1;
  undefined4 unaff_ESI;
  
  puVar1 = FUN_00417b70();
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 7) = 1;
    *(undefined1 *)((int)puVar1 + 0x1e) = 5;
    puVar1[4] = unaff_ESI;
  }
  return;
}


/* END FUNCTION 0x00419760 */

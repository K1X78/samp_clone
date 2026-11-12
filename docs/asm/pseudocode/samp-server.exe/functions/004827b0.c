/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004827b0
 * Name: FUN_004827b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004827b0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  return;
}


/* END FUNCTION 0x004827b0 */

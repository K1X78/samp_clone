/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004904e0
 * Name: FUN_004904e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004904e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(undefined1 *)((int)puVar1 + 0x2d) = 0;
  return;
}


/* END FUNCTION 0x004904e0 */

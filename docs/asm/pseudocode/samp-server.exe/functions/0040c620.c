/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c620
 * Name: FUN_0040c620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040c620(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x48) == param_1) {
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined1 *)(iVar1 + 0x4c) = 0;
    *(undefined1 *)(iVar1 + 0x4d) = 0;
    for (iVar1 = *(int *)(iVar1 + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      *(undefined1 *)(iVar1 + 8) = 1;
    }
  }
  return;
}


/* END FUNCTION 0x0040c620 */

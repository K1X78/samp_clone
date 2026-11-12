/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000bd10
 * Name: FUN_1000bd10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1000bd10(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)(param_1 + 0x134c);
  iVar2 = 6;
  do {
    *puVar1 = 1;
    puVar1 = puVar1 + 0x230;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)(param_1 + 0x1344) = 0;
  return;
}


/* END FUNCTION 0x1000bd10 */

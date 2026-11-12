/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100016c0
 * Name: FUN_100016c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100016c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 1000;
  puVar1 = param_1;
  do {
    puVar1[0x3e9] = 0;
    puVar1[1] = 0;
    puVar1[0x7d1] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  *param_1 = 0;
  return;
}


/* END FUNCTION 0x100016c0 */

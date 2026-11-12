/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac340
 * Name: FUN_100ac340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ac340(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x2a4) != 0)) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x2a4) + 0x46c);
    *puVar1 = *puVar1 & 0xfbffffff;
  }
  return;
}


/* END FUNCTION 0x100ac340 */

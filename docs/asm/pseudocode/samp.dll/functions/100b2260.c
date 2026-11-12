/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2260
 * Name: FUN_100b2260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b2260(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 8) = param_2;
  uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x2a4) + 0x47c);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *DAT_10151960 = *(undefined1 *)(param_2 + 0x2b0);
  (*(code *)0x681af0)(uVar2,3,0,uVar2,uVar1);
  *DAT_10151960 = 0;
  return;
}


/* END FUNCTION 0x100b2260 */

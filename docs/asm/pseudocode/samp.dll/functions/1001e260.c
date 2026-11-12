/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e260
 * Name: FUN_1001e260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_1001e260(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x2400 + iVar1 * 4) = 0;
    *(undefined4 *)(param_1 + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x900);
  FUN_100b26f0();
  return param_1;
}


/* END FUNCTION 0x1001e260 */

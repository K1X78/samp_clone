/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003a00
 * Name: FUN_10003a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_10003a00(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    return 1000;
  }
  if (*(int *)(DAT_102aca24 + 0x239) != 0) {
    return 0xf;
  }
  uVar1 = FUN_1009ff30();
  return (uVar1 & 0xff) + DAT_1013c0a8;
}


/* END FUNCTION 0x10003a00 */

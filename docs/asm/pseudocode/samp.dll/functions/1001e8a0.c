/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001e8a0
 * Name: FUN_1001e8a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001e8a0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (-1 < *param_1) {
    uVar1 = 0;
    uVar2 = 0;
    do {
      if (param_1[uVar1 + 0xc1d] != 0) {
        FUN_100b7d20();
      }
      uVar2 = uVar2 + 1;
      uVar1 = uVar2 & 0xffff;
    } while ((int)uVar1 <= *param_1);
  }
  return;
}


/* END FUNCTION 0x1001e8a0 */

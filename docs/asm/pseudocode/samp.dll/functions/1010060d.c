/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010060d
 * Name: ___sbh_find_block
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint ___sbh_find_block(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_102ad674;
  while( true ) {
    if (DAT_102ad674 + DAT_102ad670 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


/* END FUNCTION 0x1010060d */

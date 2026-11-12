/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10056410
 * Name: FUN_10056410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_10056410(int param_1)

{
  uint uVar1;
  
  FUN_10025080();
  uVar1 = DAT_10140220 ^ 0x5e94a3cf;
  *(uint *)(param_1 + 0x25e) = uVar1;
  *(uint *)(param_1 + 0x25a) = uVar1 << 5;
  *(undefined1 *)(param_1 + 0x249) = 0;
  return param_1;
}


/* END FUNCTION 0x10056410 */

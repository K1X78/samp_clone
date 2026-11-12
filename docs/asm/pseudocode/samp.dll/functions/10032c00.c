/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032c00
 * Name: FUN_10032c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10032c00(int param_1)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = FUN_10032be0(*(undefined4 *)(param_1 + 8));
  uVar2 = FUN_10032be0(*(undefined4 *)(param_1 + 4));
  return (uint)(uVar2 < uVar1);
}


/* END FUNCTION 0x10032c00 */

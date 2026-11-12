/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dde80
 * Name: FUN_100dde80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100dde80(int param_1,int param_2,int param_3)

{
  if (param_1 == 0) {
    return 0x2b;
  }
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    if (*(int *)(param_1 + 0x2c) != param_2) {
      FUN_100d9bb0(*(int *)(param_1 + 0x2c));
    }
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffffe;
  }
  *(int *)(param_1 + 0x2c) = param_2;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 1;
  }
  return 0;
}


/* END FUNCTION 0x100dde80 */

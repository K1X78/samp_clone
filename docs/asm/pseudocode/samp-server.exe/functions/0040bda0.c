/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040bda0
 * Name: FUN_0040bda0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_0040bda0(void)

{
  uint uVar1;
  int extraout_ECX;
  int extraout_EDX;
  
  uVar1 = FUN_0040bd90();
  if (uVar1 == 0) {
    return *(undefined4 *)(**(int **)(extraout_EDX + 0x14) + 0x84 + extraout_ECX * 4);
  }
  return *(undefined4 *)
          (*(int *)(*(int *)(extraout_EDX + 0x14) + uVar1 * 4) + (extraout_ECX + 0x21U & 0xfff) * 4)
  ;
}


/* END FUNCTION 0x0040bda0 */

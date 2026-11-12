/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d8c0
 * Name: FUN_0041d8c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint * __cdecl FUN_0041d8c0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = param_2 + 7U & 0xfffffff8;
  puVar1 = _realloc((void *)(param_1 + -8),uVar2 + 8);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = uVar2;
    puVar1[1] = (int)(param_2 + 7U) >> 0x1f;
    return puVar1 + 2;
  }
  FUN_00407dc0(param_1);
  FUN_00418ab0(7,(undefined **)"failed memory resize %u to %u bytes");
  return (uint *)0x0;
}


/* END FUNCTION 0x0041d8c0 */

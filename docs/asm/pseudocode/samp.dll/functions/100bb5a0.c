/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bb5a0
 * Name: FUN_100bb5a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x100bb617) */
/* WARNING: Removing unreachable block (ram,0x100bb61f) */

undefined4 FUN_100bb5a0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116868;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_100bc150(param_1,0xc);
  FUN_100bc150(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  uVar1 = FUN_100bc0c0(param_2);
  ExceptionList = local_c;
  return uVar1;
}


/* END FUNCTION 0x100bb5a0 */

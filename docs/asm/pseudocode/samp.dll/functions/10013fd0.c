/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10013fd0
 * Name: FUN_10013fd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10013fd0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1011335b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(void **)(param_1 + 0x1e) != (void *)0x0) {
    ExceptionList = &local_c;
    _free(*(void **)(param_1 + 0x1e));
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  iVar1 = 0;
  do {
    FUN_10013f40(iVar1,0);
    iVar1 = iVar1 + 1;
  } while ((ushort)iVar1 < 0x3ec);
  if (0xf < *(uint *)(param_1 + 0x1a)) {
    _free(*(void **)(param_1 + 6));
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10013fd0 */

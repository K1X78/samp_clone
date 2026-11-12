/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10037370
 * Name: FUN_10037370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10037370(void)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114c8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x3247);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_10034660(pvVar1);
    if (iVar2 != 0) {
      ExceptionList = local_c;
      return iVar2 + 0xdde;
    }
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x10037370 */

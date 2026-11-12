/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ba7d0
 * Name: FUN_100ba7d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100ba7d0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101167f8;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_1000b490("vector<T> too long",0x12);
  local_4 = 0;
  FUN_100580a0(local_50);
  local_34[0] = &PTR_FUN_1012cf14;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_10138f50);
}


/* END FUNCTION 0x100ba7d0 */

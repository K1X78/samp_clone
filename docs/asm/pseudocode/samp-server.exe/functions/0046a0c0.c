/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046a0c0
 * Name: FUN_0046a0c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0046a0c0(void)

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
  puStack_8 = &LAB_004b1598;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00469e30(local_50,(undefined4 *)"vector<T> too long",0x12);
  local_4 = 0;
  FUN_0046a000(local_34,local_50);
  local_34[0] = &PTR_FUN_004c5358;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_004c6a94);
}


/* END FUNCTION 0x0046a0c0 */

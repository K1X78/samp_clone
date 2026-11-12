/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022f50
 * Name: FUN_10022f50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10022f50(undefined4 param_1)

{
  undefined4 uVar1;
  void *_Memory;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_2a [7];
  undefined1 local_23 [11];
  uint local_18;
  uint local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10020c90();
  local_4 = 0;
  FUN_10020d40(param_1);
  while( true ) {
    if (local_14 < local_18) {
      iVar2 = local_10 - local_18;
    }
    else {
      iVar2 = -local_18;
    }
    if (local_14 + iVar2 == 0) break;
    uVar1 = FUN_10020ef0(local_2a);
    _Memory = (void *)FUN_100229f0(uVar1);
    if (_Memory != (void *)0x0) {
      FUN_10022880();
      _free(_Memory);
    }
    uVar4 = 0;
    iVar2 = thunk_FUN_100218b0();
    if (iVar2 != 0) {
      do {
        FUN_10022420(uVar4);
        FUN_10022990(param_1);
        FUN_10022420(uVar4);
        iVar2 = thunk_FUN_10021970();
        if (iVar2 == 0) {
          uVar1 = FUN_10022430(local_23,uVar4);
          FUN_10020d40(uVar1);
        }
        uVar4 = uVar4 + 1;
        uVar3 = thunk_FUN_100218b0();
      } while (uVar4 < uVar3);
    }
  }
  FUN_10022340();
  local_4 = 0xffffffff;
  FUN_10020d10();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10022f50 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004f060
 * Name: FUN_1004f060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1004f060(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1004ea00();
  uVar2 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0xb) != 0) {
    do {
      FUN_1004ea50(*(int *)(param_1 + 7) + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0xb));
  }
  while( true ) {
    if (local_14 < local_18) {
      iVar1 = local_10 - local_18;
    }
    else {
      iVar1 = -local_18;
    }
    if (local_14 + iVar1 == 0) break;
    local_18 = local_18 + 1;
    if (local_18 == local_10) {
      iVar1 = *(int *)(local_1c + -4 + local_10 * 4);
      local_18 = 0;
    }
    else if (local_18 == 0) {
      iVar1 = *(int *)(local_1c + -4 + local_10 * 4);
    }
    else {
      iVar1 = *(int *)(local_1c + -4 + local_18 * 4);
    }
    FUN_1004e6f0(iVar1);
    if (*(int *)(iVar1 + 0xb) != 0) {
      uVar2 = 0;
      do {
        FUN_1004ea50(*(int *)(iVar1 + 7) + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(iVar1 + 0xb));
    }
  }
  local_4 = 0xffffffff;
  FUN_1004ea30();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1004f060 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10023320
 * Name: FUN_10023320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10023320(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_10022390(param_2);
  FUN_10022990(param_1);
  FUN_10022390(param_1);
  FUN_10022990(param_2);
  FUN_10022390(param_1);
  iVar2 = thunk_FUN_10021970();
  if (iVar2 == 0) {
    FUN_10022f50(param_1);
  }
  cVar1 = FUN_100223e0(param_2);
  if (cVar1 != '\0') {
    FUN_10022390(param_2);
    iVar2 = thunk_FUN_10021970();
    if (iVar2 == 0) {
      FUN_10022f50(param_2);
    }
  }
  FUN_10022340();
  return;
}


/* END FUNCTION 0x10023320 */

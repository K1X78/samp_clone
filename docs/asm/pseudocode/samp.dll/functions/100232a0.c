/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100232a0
 * Name: FUN_100232a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100232a0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = thunk_FUN_100331a0(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_100223e0(param_1);
    if (cVar1 == '\0') {
      FUN_10022f10(param_1);
    }
    FUN_10022390(param_1);
    FUN_100228d0(param_2,&stack0x0000000c);
    cVar1 = FUN_100223e0(param_2);
    if (cVar1 == '\0') {
      FUN_10022f10(param_2);
    }
    FUN_10022390(param_2);
    FUN_100228d0(param_1,&stack0x0000000c);
  }
  return;
}


/* END FUNCTION 0x100232a0 */

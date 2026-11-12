/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100997d0
 * Name: FUN_100997d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100997d0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_10086cf0(0xe,4);
  uVar3 = 0;
  uVar2 = FUN_10094cc0(param_1,1,0);
  cVar1 = FUN_1008a250(uVar2,uVar3);
  if (cVar1 == '\0') {
    uVar2 = FUN_10094cc0(param_1,1,param_1);
    FUN_1008a120(uVar2,param_1);
  }
  return;
}


/* END FUNCTION 0x100997d0 */

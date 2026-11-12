/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10032c80
 * Name: FUN_10032c80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10032c80(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  
  cVar1 = FUN_10033320(&DAT_1013c720);
  if (cVar1 == '\0') {
    uVar2 = FUN_100324a0(param_1,param_2,0);
    piVar3 = (int *)FUN_10032860(uVar2);
    if (*piVar3 != 0) {
      return *(undefined4 *)(*piVar3 + 8);
    }
  }
  return 0;
}


/* END FUNCTION 0x10032c80 */

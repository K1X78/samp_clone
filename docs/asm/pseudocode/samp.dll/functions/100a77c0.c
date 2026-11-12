/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a77c0
 * Name: FUN_100a77c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100a77c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_100a7670(param_1,param_2);
  if (iVar2 != 0) {
    cVar1 = FUN_100a7750(param_2,param_3,param_5);
    if (cVar1 != '\0') {
      iVar2 = FUN_100b1b10(param_4);
      if (iVar2 != 0) {
        FUN_100b41d0(param_2,iVar2);
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100a77c0 */

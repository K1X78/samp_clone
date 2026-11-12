/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a07e0
 * Name: FUN_100a07e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a07e0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_1 < 0) {
    if (DAT_102aca28 != 0) {
      cVar1 = FUN_1000ccc0(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_100b3930(param_1);
        if (cVar1 == '\0') {
          FUN_1000cd40(param_1);
        }
      }
    }
  }
  else if (param_1 < 20000) {
    if (param_2 == '\0') {
      iVar2 = FUN_100b1f10(&DAT_1011e6a0,param_1);
      if (iVar2 != 0) {
        FUN_100b1f10(&DAT_1011e7a4,param_1);
        return;
      }
    }
    else {
      iVar2 = FUN_100b1f10(&DAT_1011e6a0,param_1);
      if (iVar2 != 0) {
        (*(code *)0x4089a0)(param_1);
        return;
      }
    }
  }
  return;
}


/* END FUNCTION 0x100a07e0 */

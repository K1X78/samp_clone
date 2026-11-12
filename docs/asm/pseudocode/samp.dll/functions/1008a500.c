/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008a500
 * Name: FUN_1008a500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1008a500(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x3c) != '\0') && (*(char *)(param_1 + 4) != '\0')) {
    cVar1 = (**(code **)(*(int *)(param_1 + 0x5d) + 0x14))(param_2,param_3,param_4);
    if (cVar1 != '\0') {
      return 1;
    }
    if (param_2 == 0x100) {
      switch(param_3) {
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x26:
      case 0x28:
        if (*(int *)(param_1 + 0x150) == 0) {
          return 1;
        }
                    /* WARNING: Could not recover jumptable at 0x1008a57a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&PTR_DAT_1008a6c0)[param_3 + -0x21])();
        return uVar2;
      }
    }
    return 0;
  }
  return 0;
}


/* END FUNCTION 0x1008a500 */

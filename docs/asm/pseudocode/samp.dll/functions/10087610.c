/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10087610
 * Name: FUN_10087610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10087610(int param_1,int param_2,int param_3)

{
  if ((*(char *)(param_1 + 0x3c) != '\0') && (*(char *)(param_1 + 4) != '\0')) {
    if (param_2 == 0x100) {
      if (param_3 == 0x20) {
        *(undefined1 *)(param_1 + 0x151) = 1;
        return 1;
      }
    }
    else if ((param_2 == 0x101) && (param_3 == 0x20)) {
      if (*(char *)(param_1 + 0x151) == '\x01') {
        *(undefined1 *)(param_1 + 0x151) = 0;
        FUN_10086dc0(*(undefined4 *)(param_1 + 0x173));
        *(bool *)(param_1 + 0x152) = *(char *)(param_1 + 0x152) == '\0';
        FUN_10084460(0x301,1,param_1);
      }
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x10087610 */

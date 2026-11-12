/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100888f0
 * Name: FUN_100888f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100888f0(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 < -1) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0x13f) & 1) != 0) {
    param_2 = param_2 + 1;
    if (param_2 < *(int *)(param_1 + 0x150)) {
      piVar1 = (int *)(*(int *)(param_1 + 0x14c) + param_2 * 4);
      do {
        if (*(char *)(*piVar1 + 0x298) != '\0') {
          return param_2;
        }
        param_2 = param_2 + 1;
        piVar1 = piVar1 + 1;
      } while (param_2 < *(int *)(param_1 + 0x150));
    }
    return -1;
  }
  return *(int *)(param_1 + 0x143);
}


/* END FUNCTION 0x100888f0 */

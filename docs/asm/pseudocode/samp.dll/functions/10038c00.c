/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038c00
 * Name: FUN_10038c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_10038c00(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    piVar2 = (int *)*param_1;
    do {
      if (*piVar2 == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < (uint)param_1[1]);
  }
  return 0xffffffff;
}


/* END FUNCTION 0x10038c00 */

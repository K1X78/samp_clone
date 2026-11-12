/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000cff0
 * Name: FUN_1000cff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __thiscall FUN_1000cff0(int *param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  
  if ((uint)param_1[1] <= param_2) {
    cVar1 = FUN_1000c4e0(param_2 + 1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  *(undefined4 *)(*param_1 + param_2 * 4) = param_3;
  return 1;
}


/* END FUNCTION 0x1000cff0 */

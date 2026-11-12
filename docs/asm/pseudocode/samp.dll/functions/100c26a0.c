/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c26a0
 * Name: FUN_100c26a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100c26a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int unaff_EBX;
  
  FUN_100c2480();
  if (param_3 != 0) {
    piVar1 = (int *)(unaff_EBX + 0x4808 + param_1 * 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_100c2640(param_4);
    }
  }
  return;
}


/* END FUNCTION 0x100c26a0 */

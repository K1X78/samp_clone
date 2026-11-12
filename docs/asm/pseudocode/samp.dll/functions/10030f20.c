/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10030f20
 * Name: FUN_10030f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10030f20(int param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  
  FUN_10030c70(param_2);
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x1c);
  do {
    if (*piVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1c + uVar1 * 4) = param_2;
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 0x20);
  return;
}


/* END FUNCTION 0x10030f20 */

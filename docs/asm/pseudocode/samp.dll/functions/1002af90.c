/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002af90
 * Name: FUN_1002af90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1002af90(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1[1] != 0) {
    iVar2 = 0;
    do {
      _free(*(void **)(iVar2 + 4 + *param_1));
      _free(*(void **)(iVar2 + *param_1));
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x11;
    } while (uVar1 < (uint)param_1[1]);
  }
  FUN_1002ad60(0);
  return;
}


/* END FUNCTION 0x1002af90 */

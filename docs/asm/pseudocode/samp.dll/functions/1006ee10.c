/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006ee10
 * Name: FUN_1006ee10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006ee10(int *param_1)

{
  if ((*param_1 == 0) && (param_1[0xd] != 0)) {
    *(undefined1 *)(param_1[0xd] + 0x13) = 1;
    (**(code **)(*(int *)param_1[0xe] + 0x38))(1);
    (**(code **)(*(int *)param_1[0xe] + 0x4c))();
    (**(code **)(*(int *)param_1[0xe] + 0x40))(1);
    FUN_1006e760();
    FUN_100a0530(3,0);
    *param_1 = 1;
  }
  return;
}


/* END FUNCTION 0x1006ee10 */

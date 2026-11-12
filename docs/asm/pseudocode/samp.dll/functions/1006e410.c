/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006e410
 * Name: FUN_1006e410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006e410(int *param_1)

{
  char unaff_SI;
  
  if ((*param_1 != 0) && (param_1[0xd] != 0)) {
    *(undefined1 *)(param_1[0xd] + 0x13) = 0;
    (**(code **)(*(int *)param_1[0xe] + 0x38))(0);
    (**(code **)(*(int *)param_1[0xe] + 0x40))(0);
    if (unaff_SI != '\0') {
      FUN_100a0530(0,0);
    }
    *param_1 = 0;
  }
  return;
}


/* END FUNCTION 0x1006e410 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10084460
 * Name: FUN_10084460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10084460(char *param_1,undefined4 param_2,char param_3,int param_4)

{
  if ((*(code **)(param_1 + 0x13e) != (code *)0x0) && ((param_3 != '\0' || (*param_1 != '\0')))) {
    (**(code **)(param_1 + 0x13e))
              (param_2,*(undefined4 *)(param_4 + 0x2c),param_4,*(undefined4 *)(param_1 + 0x142));
  }
  return;
}


/* END FUNCTION 0x10084460 */

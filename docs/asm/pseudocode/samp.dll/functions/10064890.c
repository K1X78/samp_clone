/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064890
 * Name: FUN_10064890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10064890(int param_1)

{
  if (*(char *)(param_1 + 0x13) != '\0') {
    if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}


/* END FUNCTION 0x10064890 */

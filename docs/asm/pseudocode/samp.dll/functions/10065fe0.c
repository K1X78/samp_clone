/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065fe0
 * Name: FUN_10065fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10065fe0(char *param_1,char param_2)

{
  if ((*param_1 != '\0') && (DAT_1016c7d0 != '\0')) {
    DAT_101407ba = 1;
    if (param_2 != '\0') {
      while (DAT_1016c7d0 != '\0') {
        Sleep(2);
      }
    }
    BASS_StreamFree(DAT_1016c7cc);
    DAT_1016c7cc = 0;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10065fe0 */

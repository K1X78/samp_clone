/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00417090
 * Name: FUN_00417090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00417090(undefined4 *param_1,byte *param_2,uint param_3)

{
  *(char *)(param_1 + 4) = (char)param_3;
  if (param_2 != (byte *)0x0) {
    while (*param_2 == param_3) {
      FUN_00417090(param_1,*(byte **)(param_2 + 8),param_3);
      param_2 = *(byte **)(param_2 + 0xc);
      *(char *)(param_1 + 4) = (char)param_3;
      if (param_2 == (byte *)0x0) {
        return;
      }
    }
    FUN_00416fc0(param_1,(int)param_2,0);
  }
  return;
}


/* END FUNCTION 0x00417090 */

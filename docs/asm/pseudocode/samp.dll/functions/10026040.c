/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10026040
 * Name: FUN_10026040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10026040(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 != param_1[2]) {
    do {
      _printf("%i ",(int)*(char *)(*param_1 + iVar1));
      iVar1 = iVar1 + 1;
    } while (iVar1 != param_1[2]);
  }
  _printf("\n");
  return;
}


/* END FUNCTION 0x10026040 */

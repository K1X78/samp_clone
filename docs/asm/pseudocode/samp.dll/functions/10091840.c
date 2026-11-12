/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10091840
 * Name: FUN_10091840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10091840(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1011d6f0;
  if ((undefined4 *)param_1[0x93] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x93])(1);
    param_1[0x93] = 0;
  }
  if ((undefined4 *)param_1[0x92] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x92])(1);
    param_1[0x92] = 0;
  }
  return;
}


/* END FUNCTION 0x10091840 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040a620
 * Name: FUN_0040a620
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040a620(undefined4 param_1)

{
  int in_EAX;
  
  *(undefined4 *)(in_EAX + 0x10) = param_1;
  if (*(int *)(in_EAX + 0x28) != 0) {
    (*DAT_004ca194)(*(int *)(in_EAX + 0x28),param_1);
  }
  return;
}


/* END FUNCTION 0x0040a620 */

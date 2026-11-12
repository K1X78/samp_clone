/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008b80
 * Name: FUN_10008b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10008b80(int param_1)

{
  if (*(char *)(param_1 + 0x234) == '\0') {
    FUN_10067ae0(DAT_102aca10,"NameTag Player Status: ON");
    if (DAT_102aca0c != 0) {
      FUN_10065b00("nonametagstatus",0,0);
    }
    *(undefined1 *)(param_1 + 0x234) = 1;
    return;
  }
  FUN_10067ae0(DAT_102aca10,"NameTag Player Status: OFF");
  if (DAT_102aca0c != 0) {
    FUN_10065b00("nonametagstatus",1,0);
  }
  *(undefined1 *)(param_1 + 0x234) = 0;
  return;
}


/* END FUNCTION 0x10008b80 */

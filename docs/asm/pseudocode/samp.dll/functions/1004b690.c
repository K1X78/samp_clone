/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004b690
 * Name: FUN_1004b690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004b690(undefined4 param_1)

{
  char cVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  cVar1 = FUN_1004b2a0(&param_1);
  if (cVar1 == '\0') {
    local_c = param_1;
    local_8 = 0;
    local_4 = 0xff;
    FUN_1004ac00(&param_1,&local_c);
  }
  return;
}


/* END FUNCTION 0x1004b690 */

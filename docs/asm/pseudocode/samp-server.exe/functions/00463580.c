/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463580
 * Name: FUN_00463580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00463580(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b128b;
  local_c = ExceptionList;
  DAT_004f6338 = DAT_004f6338 + 1;
  if (DAT_004f6338 == 1) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x18);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      DAT_004f6334 = FUN_00463450(puVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_004f6334 = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00463580 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412a50
 * Name: FUN_00412a50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_00412a50(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *unaff_EDI;
  
  puVar1 = FUN_004129a0(param_1,param_2,unaff_EBX,unaff_EDI);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00408130(unaff_EBX);
  }
  return puVar1;
}


/* END FUNCTION 0x00412a50 */

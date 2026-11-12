/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004061c0
 * Name: FUN_004061c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_004061c0(int param_1)

{
  int iVar1;
  int *unaff_EDI;
  int local_4;
  
  local_4 = param_1;
  iVar1 = FUN_00403100(unaff_EDI,param_1,&local_4);
  if (iVar1 != 0) {
    FUN_004030f0((int)unaff_EDI,iVar1);
  }
  return iVar1;
}


/* END FUNCTION 0x004061c0 */

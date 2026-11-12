/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004047d0
 * Name: FUN_004047d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * FUN_004047d0(void)

{
  void *pvVar1;
  uint *unaff_EDI;
  int local_4;
  
  FUN_004031d0(unaff_EDI,&local_4);
  pvVar1 = _malloc(local_4 + 4);
  FUN_00403350((int)pvVar1,unaff_EDI,0,0x7fffffff);
  return pvVar1;
}


/* END FUNCTION 0x004047d0 */

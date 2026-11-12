/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d630
 * Name: FUN_0041d630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0041d630(void)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *unaff_EBX;
  int *unaff_ESI;
  
  puVar1 = FUN_0041a0a0(in_EAX);
  *unaff_EBX = puVar1;
  unaff_EBX[1] = *unaff_ESI;
  unaff_EBX[2] = unaff_ESI[1] + *unaff_ESI;
  return;
}


/* END FUNCTION 0x0041d630 */

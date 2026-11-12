/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041d690
 * Name: FUN_0041d690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0041d690(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *unaff_EBX;
  undefined4 *unaff_ESI;
  
  puVar1 = FUN_0041a0a0(this);
  *unaff_ESI = puVar1;
  unaff_ESI[1] = *(undefined4 *)(param_2 + 4);
  unaff_ESI[2] = unaff_EBX[1] + *unaff_EBX;
  return;
}


/* END FUNCTION 0x0041d690 */

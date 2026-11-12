/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006b650
 * Name: FUN_1006b650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1006b650(float param_1,float param_2,float param_3)

{
  int iVar1;
  
  iVar1 = FUN_1009c400();
  if (iVar1 != 0) {
    iVar1 = FUN_100b1f10(&DAT_1011c640,(double)param_1,(double)param_2,(double)param_3,
                         (double)*(float *)(iVar1 + 0xc),(double)*(float *)(iVar1 + 0x10),
                         (double)*(float *)(iVar1 + 0x14),1,0,0,1,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x1006b650 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f730
 * Name: FUN_1009f730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1009f730(int param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    if (iVar1 != 0) {
      (*(code *)0x59a840)(param_2,param_3,param_4,0x15,iVar1);
    }
    *param_2 = *param_2 * 57.295776 * -1.0;
    *param_3 = *param_3 * 57.295776 * -1.0;
    *param_4 = *param_4 * 57.295776 * -1.0;
  }
  return;
}


/* END FUNCTION 0x1009f730 */

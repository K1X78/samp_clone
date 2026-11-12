/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7f30
 * Name: FUN_100a7f30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a7f30(int param_1,int param_2,undefined4 *param_3,float *param_4)

{
  if ((*(int *)(param_1 + 0x40) != 0) && (param_2 != 0)) {
    (*(code *)0x54d570)(param_2,*param_3,param_3[1],param_3[2],*param_4 * 0.017453292,
                        param_4[1] * 0.017453292,param_4[2] * 0.017453292);
  }
  return;
}


/* END FUNCTION 0x100a7f30 */

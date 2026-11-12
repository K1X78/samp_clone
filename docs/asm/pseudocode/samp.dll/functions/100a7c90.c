/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7c90
 * Name: FUN_100a7c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a7c90(int param_1,float *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = FUN_100b3830(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      FUN_100b1f10(&DAT_1011edfc,*(undefined4 *)(param_1 + 0x44),(double)*param_2,(double)param_2[1]
                   ,(double)param_2[2]);
      *(float *)(param_1 + 0xad) = *param_2;
      *(float *)(param_1 + 0xb1) = param_2[1];
      *(float *)(param_1 + 0xb5) = param_2[2];
    }
  }
  return;
}


/* END FUNCTION 0x100a7c90 */

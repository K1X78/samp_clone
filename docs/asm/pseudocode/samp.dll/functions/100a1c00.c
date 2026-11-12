/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1c00
 * Name: FUN_100a1c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a1c00(int param_1,float *param_2,undefined4 *param_3)

{
  *(float *)(param_1 + 0x35) = *param_2;
  *(float *)(param_1 + 0x39) = param_2[1];
  *(float *)(param_1 + 0x3d) = param_2[2];
  *(undefined4 *)(param_1 + 0x41) = *param_3;
  *(undefined4 *)(param_1 + 0x45) = param_3[1];
  *(undefined4 *)(param_1 + 0x49) = param_3[2];
  if (*(int *)(param_1 + 0x51) != 0) {
    FUN_100b1f10(&DAT_1011e6b4,*(int *)(param_1 + 0x51));
    *(undefined4 *)(param_1 + 0x51) = 0;
    param_2 = (float *)0x0;
    FUN_100b1f10(&DAT_1011e6dc,(double)*(float *)(param_1 + 0x35),(double)*(float *)(param_1 + 0x39)
                 ,(double)*(float *)(param_1 + 0x3d),0,&param_2);
    FUN_100b1f10(&DAT_1011e6c8,param_2,0x3ed);
    FUN_100b1f10(&DAT_1011e6f0,param_2,3);
    *(float **)(param_1 + 0x51) = param_2;
  }
  return;
}


/* END FUNCTION 0x100a1c00 */

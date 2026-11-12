/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a1f20
 * Name: FUN_100a1f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100a1f20(int param_1,undefined4 param_2,float *param_3,undefined4 *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  *(float *)(param_1 + 0xc) = *param_3;
  *(float *)(param_1 + 0x10) = param_3[1];
  *(float *)(param_1 + 0x14) = param_3[2];
  *(undefined4 *)(param_1 + 0x18) = *param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_4[1];
  uVar1 = param_4[2];
  *(undefined4 *)(param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = (undefined1)param_2;
  if (*(int *)(param_1 + 0x2d) != 0) {
    FUN_100b1f10(&DAT_1011e6b4,*(int *)(param_1 + 0x2d));
    *(undefined4 *)(param_1 + 0x2d) = 0;
    param_2 = 0;
    FUN_100b1f10(&DAT_1011e6dc,(double)*(float *)(param_1 + 0xc),(double)*(float *)(param_1 + 0x10),
                 (double)*(float *)(param_1 + 0x14),0,&param_2);
    FUN_100b1f10(&DAT_1011e6c8,param_2,0x3ed);
    FUN_100b1f10(&DAT_1011e6f0,param_2,3);
    *(undefined4 *)(param_1 + 0x2d) = param_2;
  }
  FUN_100a1cc0();
  return;
}


/* END FUNCTION 0x100a1f20 */

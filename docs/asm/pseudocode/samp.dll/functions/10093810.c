/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093810
 * Name: FUN_10093810
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10093810(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  float10 fVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [20];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0xc3) = *param_2;
    *(undefined4 *)(param_1 + 199) = param_2[1];
    *(undefined4 *)(param_1 + 0xcb) = param_2[2];
    *(undefined4 *)(param_1 + 0xab) = *param_2;
    *(undefined4 *)(param_1 + 0xaf) = param_2[1];
    *(undefined4 *)(param_1 + 0xb3) = param_2[2];
    *(undefined4 *)(param_1 + 0xcf) = *param_3;
    *(undefined4 *)(param_1 + 0xd3) = param_3[1];
    *(undefined4 *)(param_1 + 0xd7) = param_3[2];
    *(undefined4 *)(param_1 + 0xb7) = *param_3;
    *(undefined4 *)(param_1 + 0xbb) = param_3[1];
    *(undefined4 *)(param_1 + 0xbf) = param_3[2];
    local_4c = 0;
    local_48 = 0x3f800000;
    local_44 = 0;
    D3DXMatrixLookAtLH(param_1 + 4,param_2,param_3,&local_4c);
    D3DXMatrixInverse(local_40,0,param_1 + 4);
    fVar1 = (float10)fpatan((float10)fStack_2c,(float10)fStack_24);
    *(float *)(param_1 + 0xdb) = (float)fVar1;
    fVar1 = (float10)fpatan((float10)fStack_28,
                            SQRT((float10)fStack_2c * (float10)fStack_2c +
                                 (float10)fStack_24 * (float10)fStack_24));
    *(float *)(param_1 + 0xdf) = (float)-fVar1;
  }
  return;
}


/* END FUNCTION 0x10093810 */

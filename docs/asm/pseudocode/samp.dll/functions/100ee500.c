/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ee500
 * Name: FUN_100ee500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100ee500(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_4 != (undefined4 *)0x0) {
    if (param_3 == (undefined4 *)0x0) {
      param_4[5] = param_2;
      param_4[4] = param_1;
      param_4[1] = 0;
      *param_4 = 0;
      param_4[2] = param_4;
      param_4[3] = param_4;
      return param_4;
    }
    puVar2 = (undefined4 *)FUN_100ee3f0(param_1,param_2,param_3);
    if (((((int)puVar2[4] <= param_1) && (param_1 <= (int)puVar2[4])) && ((int)puVar2[5] <= param_2)
        ) && (param_2 <= (int)puVar2[5])) {
      param_4[4] = 0xffffffff;
      param_4[5] = 0xffffffff;
      param_4[2] = puVar2;
      param_4[3] = puVar2[3];
      *(undefined4 **)(puVar2[3] + 8) = param_4;
      puVar2[3] = param_4;
      return puVar2;
    }
    if ((param_1 < (int)puVar2[4]) || ((param_1 <= (int)puVar2[4] && (param_2 < (int)puVar2[5])))) {
      uVar1 = *puVar2;
      param_4[1] = puVar2;
      *param_4 = uVar1;
      *puVar2 = 0;
      param_4[5] = param_2;
      param_4[4] = param_1;
      param_4[2] = param_4;
      param_4[3] = param_4;
      return param_4;
    }
    uVar1 = puVar2[1];
    *param_4 = puVar2;
    param_4[1] = uVar1;
    puVar2[1] = 0;
    param_4[5] = param_2;
    param_4[4] = param_1;
    param_4[2] = param_4;
    param_4[3] = param_4;
    param_3 = param_4;
  }
  return param_3;
}


/* END FUNCTION 0x100ee500 */

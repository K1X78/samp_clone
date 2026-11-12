/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ee5f0
 * Name: FUN_100ee5f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100ee5f0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_4 = 0;
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_100ee3f0(DAT_102acd18,DAT_102acd1c,param_3);
  if (((int)puVar2[4] <= param_1) && (((int)puVar2[4] < param_1 || ((int)puVar2[5] <= param_2)))) {
    puVar1 = (undefined4 *)puVar2[2];
    if (puVar1 != puVar2) {
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[1] = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[3] = puVar2[3];
      *(undefined4 **)(puVar2[3] + 8) = puVar1;
      *param_4 = puVar2;
      return puVar1;
    }
    puVar1 = (undefined4 *)puVar2[1];
    *param_4 = puVar2;
    return puVar1;
  }
  *param_4 = 0;
  return puVar2;
}


/* END FUNCTION 0x100ee5f0 */

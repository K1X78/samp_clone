/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5da0
 * Name: FUN_100d5da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d5da0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) {
    *param_1 = 0;
    puVar2 = (undefined4 *)param_1[1];
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      if ((puVar2[0x12c3] == 0) && (puVar2[2] != 0)) {
        FUN_100d5660(puVar2 + 2,1);
      }
      if (puVar2[0x18] == 2) {
        FUN_100d00c0(puVar2,puVar2[0x17]);
        puVar2[0x17] = 0;
        puVar2[0x18] = 0;
      }
      puVar2[0x20e] = 0;
      puVar2[0x19] = 0;
      puVar2 = puVar1;
    }
    FUN_100ebf70(param_1 + 0x20);
    FUN_100e4420(param_1 + 0x18);
    FUN_100eba20(param_1 + 0x20);
    FUN_100e8a60(param_1 + 5,0);
    FUN_100e8a60(param_1 + 9,0);
    FUN_100e4420(param_1 + 0x11);
    FUN_100e8d00(0,param_1 + 0x31);
    FUN_100e8e50(0,param_1 + 0x35);
    (*(code *)PTR__free_101554bc)(param_1);
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x100d5da0 */

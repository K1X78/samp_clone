/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5500
 * Name: FUN_100d5500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100d5500(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)PTR__calloc_101554c8)(1,0xf4);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = 0xbab1e;
  iVar2 = FUN_100d00a0(puVar1 + 0x11);
  if (iVar2 == 0) {
    iVar2 = FUN_100e41b0(puVar1 + 0x18,param_1,&LAB_100d54a0,&LAB_100d5480,&DAT_100d5470);
    if (iVar2 == 0) {
      iVar2 = FUN_100eb9b0(puVar1 + 0x20,param_2);
      if (iVar2 == 0) {
        FUN_100e8940(puVar1 + 5,&DAT_100d54f0);
        FUN_100e8940(puVar1 + 9,&DAT_100d54f0);
        puVar1[0x2e] = 5;
        puVar1[0x2b] = 0xffffffff;
        return puVar1;
      }
    }
  }
  FUN_100e4420(puVar1 + 0x18);
  FUN_100e4420(puVar1 + 0x11);
  FUN_100eba20(puVar1 + 0x20);
  FUN_100e8a60(puVar1 + 5,0);
  FUN_100e8a60(puVar1 + 9,0);
  (*(code *)PTR__free_101554bc)(puVar1);
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x100d5500 */

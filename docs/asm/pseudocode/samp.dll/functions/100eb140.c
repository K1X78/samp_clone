/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eb140
 * Name: FUN_100eb140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100eb140(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  local_4 = 0;
  if (-1 < (int)param_3) {
    iVar2 = FUN_100eb040(param_1,param_2,param_3,&local_4,&param_3,0);
    puVar1 = param_4;
    if (iVar2 != 0) {
      return 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      if (param_3 < 0x80000000) {
        uVar3 = FUN_100d9a00(param_3);
        *puVar1 = uVar3;
        return local_4;
      }
      (*(code *)PTR__free_101554bc)(local_4);
      local_4 = 0;
    }
  }
  return local_4;
}


/* END FUNCTION 0x100eb140 */

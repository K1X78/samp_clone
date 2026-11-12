/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008ca50
 * Name: FUN_1008ca50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_1008ca50(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2;
  if (*(uint *)(param_1 + 0x156) <= param_2) {
    iVar2 = param_2 - *(uint *)(param_1 + 0x156);
    param_2 = 0xffffffff;
    iVar2 = iVar2 + 1;
    do {
      FUN_1007c2b0(&param_2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_2 = FUN_1008c8f0(param_3,param_4,param_5);
  FUN_1007bac0(uVar1,&param_2);
  return 0;
}


/* END FUNCTION 0x1008ca50 */

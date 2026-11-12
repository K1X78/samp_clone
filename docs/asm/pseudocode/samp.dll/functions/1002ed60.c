/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002ed60
 * Name: FUN_1002ed60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1002ed60(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = param_2;
  uVar5 = 0;
  iVar2 = param_1 + 0xd;
  uVar3 = 0x20;
  uVar4 = param_2;
  FUN_100536f0(iVar2,0x20,param_2,0);
  FUN_10053d90(iVar2,uVar3,uVar4,uVar5);
  FUN_1001f470(&param_2,8,1);
  *(uint *)(param_1 + 9) = param_2 & 0xff;
  FUN_10054de0(uVar1,param_1,param_2 & 0xff);
  return;
}


/* END FUNCTION 0x1002ed60 */

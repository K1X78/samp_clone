/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002ec90
 * Name: FUN_1002ec90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1002ec90(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_2;
  uVar5 = 0;
  iVar3 = param_1 + 0x11;
  uVar4 = 0x20;
  uVar2 = param_2;
  FUN_100536f0(iVar3,0x20,param_2,0);
  FUN_10053d90(iVar3,uVar4,uVar2,uVar5);
  FUN_1001f470(&param_2,8,1);
  *(uint *)(param_1 + 0xd) = param_2 & 0xff;
  uVar4 = FUN_1001f470(&param_2,8,1);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  uVar2 = param_2 & 0xff;
  *(uint *)(param_1 + 9) = uVar2;
  if ((uVar2 != 4) && (uVar2 != 5)) {
    uVar4 = FUN_10054de0(uVar1,param_1,*(undefined4 *)(param_1 + 0xd));
    return uVar4;
  }
  return 1;
}


/* END FUNCTION 0x1002ec90 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ae1f0
 * Name: FUN_100ae1f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100ae1f0(uint param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  uint uStack_4;
  
  iVar2 = param_1;
  sVar4 = FUN_1009c870(param_1 + 0x28,param_1 + 0x10);
  bVar3 = FUN_100f9324();
  uVar1 = *(uint *)(param_1 + 0x5c);
  iVar5 = 0;
  uStack_4 = (uint)bVar3 << 0x18;
  if ((uVar1 & 2) != 0) {
    uStack_4 = CONCAT22(uStack_4._2_2_,0x100);
  }
  param_1 = (uint)((uVar1 & 0x40) != 0);
  iVar2 = *(int *)(iVar2 + 0x40);
  if (iVar2 < 1) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else if (iVar2 < 0) {
      iVar5 = 1;
    }
  }
  else {
    iVar5 = 2;
  }
  return (((((iVar5 << 1 | (uint)((uVar1 & 8) == 0)) << 1 | (uint)((char)uVar1 < '\0')) << 1 |
           param_1) << 1 | uStack_4 >> 8 & 0xff) << 8 | uStack_4 >> 0x18) << 0x10 | (int)sVar4;
}


/* END FUNCTION 0x100ae1f0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10057630
 * Name: FUN_10057630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __fastcall FUN_10057630(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar5 = 100;
  iVar6 = 0;
  bVar7 = param_4 != 0;
  do {
    uVar2 = *(uint *)(param_3 + iVar6 * 4);
    puVar1 = (uint *)(param_1 + iVar6 * 4);
    uVar3 = (uint)bVar7;
    uVar4 = *puVar1 + uVar2;
    bVar7 = CARRY4(*puVar1,uVar2) || CARRY4(uVar4,uVar3);
    *puVar1 = uVar4 + uVar3;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return CONCAT44(param_2,(uint)bVar7);
}


/* END FUNCTION 0x10057630 */

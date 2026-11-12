/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008d1c0
 * Name: FUN_1008d1c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1008d1c0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = FUN_100c69e0();
  uVar2 = FUN_100c6a00();
  iVar5 = iVar1;
  uVar4 = uVar2;
  uVar3 = FUN_100c6a30(iVar1,uVar2);
  FUN_1008ca50(0,uVar3,iVar5,uVar4);
  iVar1 = iVar1 + -2;
  uVar4 = FUN_100c6a30(iVar1,uVar2);
  FUN_1008ca50(1,uVar4,iVar1,uVar2);
  return;
}


/* END FUNCTION 0x1008d1c0 */

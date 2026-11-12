/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100575f0
 * Name: FUN_100575f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __fastcall FUN_100575f0(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  iVar3 = 100;
  bVar5 = param_3 != 0;
  do {
    puVar1 = (uint *)(param_1 + iVar4 * 4);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 << 1 | (uint)bVar5;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + -1;
    bVar5 = (int)uVar2 < 0;
  } while (iVar3 != 0);
  return CONCAT44(param_2,(uint)((int)uVar2 < 0));
}


/* END FUNCTION 0x100575f0 */

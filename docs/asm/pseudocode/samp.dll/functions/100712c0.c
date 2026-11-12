/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100712c0
 * Name: FUN_100712c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100712c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  tagRECT local_10;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar2 + 0x11e) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar2 + 0x122) = uVar1;
  GetClientRect(_DAT_00c97c1c,&local_10);
  iVar3 = (local_10.right - *(int *)(param_1 + 0xc)) + -5;
  *(int *)(param_1 + 4) = iVar3;
  iVar4 = (local_10.bottom - *(int *)(param_1 + 0x10)) + -10;
  *(int *)(param_1 + 8) = iVar4;
  iVar2 = *(int *)(param_1 + 0x20);
  *(int *)(iVar2 + 0x116) = iVar3;
  *(int *)(iVar2 + 0x11a) = iVar4;
  return;
}


/* END FUNCTION 0x100712c0 */

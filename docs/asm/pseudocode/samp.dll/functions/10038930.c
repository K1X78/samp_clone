/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10038930
 * Name: FUN_10038930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10038930(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xd99) = *(undefined4 *)(param_1 + 0xd85);
  *(undefined4 *)(param_1 + 0xd9d) = *(undefined4 *)(param_1 + 0xd89);
  *(undefined4 *)(param_1 + 0xda1) = *(undefined4 *)(param_1 + 0xd8d);
  *(undefined4 *)(param_1 + 0xda5) = *(undefined4 *)(param_1 + 0xd91);
  *(undefined4 *)(param_1 + 0xda9) = *(undefined4 *)(param_1 + 0xd95);
  iVar2 = 0;
  do {
    uVar1 = FUN_100436c0();
    *(undefined4 *)(param_1 + 0xd85 + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x14);
  iVar2 = FUN_1002e2b0();
  *(int *)(param_1 + 0xd81) = iVar2 + 5000;
  return;
}


/* END FUNCTION 0x10038930 */

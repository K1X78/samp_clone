/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f140
 * Name: FUN_1009f140
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1009f140(int param_1)

{
  int *piVar1;
  undefined1 local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0x863c40)) && (piVar1[0x2d] == 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x44) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x48) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x4c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x50) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x54) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x58) = 0;
    FUN_100b3720(*(undefined4 *)(param_1 + 0x40));
    FUN_1009e950(local_40);
    FUN_1009ee80(local_10,local_c,local_8);
  }
  return;
}


/* END FUNCTION 0x1009f140 */

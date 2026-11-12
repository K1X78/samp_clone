/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033040
 * Name: FUN_10033040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10033040(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  do {
    *(short *)(param_1 + 10) = DAT_10156bb0;
    DAT_10156bb0 = DAT_10156bb0 + 1;
    if (DAT_10156bdc != '\0') {
      *(undefined4 *)(param_1 + 4) = DAT_10156bb4;
      *(undefined2 *)(param_1 + 8) = DAT_10156bb8;
    }
    uVar1 = FUN_100324a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
    piVar2 = (int *)FUN_10032860(uVar1);
  } while (*piVar2 != 0);
  uVar1 = FUN_100324a0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_1);
  FUN_10032ea0(uVar1);
  return;
}


/* END FUNCTION 0x10033040 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100afbd0
 * Name: FUN_100afbd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100afbd0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_40 [48];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*(int *)(param_1 + 0x44) != 0) && (iVar1 = *(int *)(param_1 + 0x2a4), iVar1 != 0)) {
    if (((*(uint *)(iVar1 + 0x46c) & 0x100) == 0) &&
       ((piVar2 = *(int **)(*(int *)(iVar1 + 0x47c) + 0x10), piVar2 != (int *)0x0 &&
        (*piVar2 == 0x8705c4)))) {
      FUN_100ac980();
    }
    FUN_100acd10();
    FUN_1009e950(local_40);
    FUN_1009ee80(local_10,local_c,local_8);
    *(undefined4 *)(*(int *)(param_1 + 0x2a4) + 0x540) = 0;
    *DAT_10151960 = *(undefined1 *)(param_1 + 0x2b0);
    FUN_100b1f10(&DAT_1011f080,*(undefined4 *)(param_1 + 0x44));
    *DAT_10151960 = 0;
  }
  return;
}


/* END FUNCTION 0x100afbd0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10087bf0
 * Name: FUN_10087bf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10087bf0(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x214) == '\0') && (*(int *)(param_1 + 0x152) != -1)) {
    FUN_100844b0(param_1);
    iVar1 = *(int *)(param_1 + 0x152) + 1;
    *(int *)(param_1 + 0x152) = iVar1;
    if (*(int *)(param_1 + 0x259) <= iVar1) {
      *(undefined4 *)(param_1 + 0x152) = 0;
    }
    *(undefined4 *)(param_1 + 0x156) = *(undefined4 *)(param_1 + 0x152);
    FUN_10084460(0x201,1,param_1);
  }
  return;
}


/* END FUNCTION 0x10087bf0 */

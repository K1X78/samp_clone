/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100abc80
 * Name: FUN_100abc80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100abc80(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      *DAT_10151960 = *(undefined1 *)(param_1 + 0x2b0);
      FUN_1009c5b0();
      FUN_1009c7a0(*(undefined1 *)(param_1 + 0x2b0));
      iVar1 = *(int *)(param_1 + 0x2a4);
      if (((iVar1 == 0) || ((*(uint *)(iVar1 + 0x46c) & 0x100) == 0)) && (param_3 == '\0')) {
        FUN_100b1f10(&DAT_1011ef40,*(undefined4 *)(param_1 + 0x44),param_2);
        FUN_1009c640();
        *DAT_10151960 = 0;
        return;
      }
      if (iVar1 != 0) {
        (*(code *)0x5e6280)(param_2);
      }
      FUN_1009c640();
      *DAT_10151960 = 0;
    }
  }
  return;
}


/* END FUNCTION 0x100abc80 */

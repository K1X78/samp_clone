/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ab920
 * Name: FUN_100ab920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100ab920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      FUN_100b1f10(&DAT_1011ef7c,*(undefined4 *)(param_1 + 0x44),param_2,param_3,param_4,param_5,
                   param_6);
    }
  }
  return;
}


/* END FUNCTION 0x100ab920 */

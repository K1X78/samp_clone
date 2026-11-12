/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac100
 * Name: FUN_100ac100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100ac100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (((iVar1 != 0) &&
        (iVar1 = *(int *)(param_1 + 0x2a4), (*(uint *)(iVar1 + 0x46c) & 0x100) != 0)) &&
       (iVar1 != 0)) {
      iVar1 = FUN_100b3800(*(undefined4 *)(iVar1 + 0x58c));
      if (iVar1 != 0) {
        uVar2 = 0;
        if (*(int *)(param_1 + 0x2a4) != 0) {
          uVar2 = FUN_100b3800(*(undefined4 *)(*(int *)(param_1 + 0x2a4) + 0x58c));
        }
        iVar1 = FUN_100b37d0(uVar2);
        if (((iVar1 != 0) && (*(short *)(iVar1 + 0x22) != 0x23a)) &&
           (*(short *)(iVar1 + 0x22) != 0x21a)) {
          uVar2 = FUN_100ab8b0();
          FUN_100b1f10(&DAT_1011f008,*(undefined4 *)(param_1 + 0x44),uVar2);
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x100ac100 */

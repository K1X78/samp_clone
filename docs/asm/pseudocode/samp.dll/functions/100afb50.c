/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100afb50
 * Name: FUN_100afb50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100afb50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  iVar2 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
  if (iVar2 != 0) {
    iVar2 = FUN_100b39d0(param_2);
    if (iVar2 == 0) {
      param_2 = 0;
    }
    if (iVar1 != 0) {
      FUN_100aa0b0(&DAT_005a82c0,1);
      DAT_005a82c0 = 0xc3;
      FUN_100adc20();
      FUN_1009ed90(param_2);
      (*(code *)0x4e68d0)(iVar1);
    }
  }
  return;
}


/* END FUNCTION 0x100afb50 */

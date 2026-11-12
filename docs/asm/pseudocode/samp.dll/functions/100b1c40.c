/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b1c40
 * Name: FUN_100b1c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100b1c40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100a7630(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_100b4280(param_1);
  (*(code *)0x4c4d50)();
  iVar1 = FUN_100b35f0(uVar2);
  if (iVar1 == 0) {
    FUN_100b35b0(uVar2);
    FUN_100b35d0(uVar2);
  }
  return 1;
}


/* END FUNCTION 0x100b1c40 */

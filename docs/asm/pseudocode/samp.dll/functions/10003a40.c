/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003a40
 * Name: FUN_10003a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10003a40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
    return 1000;
  }
  iVar1 = FUN_100aba90();
  if (iVar1 != 0) {
    uVar2 = FUN_100039c0();
    return uVar2;
  }
  uVar2 = FUN_10003a00();
  return uVar2;
}


/* END FUNCTION 0x10003a40 */

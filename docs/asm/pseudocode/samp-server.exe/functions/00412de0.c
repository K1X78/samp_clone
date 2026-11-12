/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00412de0
 * Name: FUN_00412de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00412de0(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00407e10();
  FUN_00407e50(iVar1);
  for (; param_1 != 0; param_1 = param_1 + -1) {
    uVar2 = FUN_00412c40();
    *param_2 = (char)uVar2;
    param_2 = param_2 + 1;
  }
  FUN_00407e90(iVar1);
  return;
}


/* END FUNCTION 0x00412de0 */

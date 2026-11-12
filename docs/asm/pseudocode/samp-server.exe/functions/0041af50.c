/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041af50
 * Name: FUN_0041af50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0041af50(int *param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 *puVar2;
  
  iVar1 = param_1[0x80];
  if ((iVar1 != 0) && ((char)param_1[0x85] == '\0')) {
    puVar2 = FUN_0041a0d0(*param_1,*(undefined4 **)(iVar1 + 0x2c));
    *(undefined4 **)(iVar1 + 0x2c) = puVar2;
    return;
  }
  FUN_004158d0(*param_1,in_EAX);
  return;
}


/* END FUNCTION 0x0041af50 */

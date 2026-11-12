/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415b30
 * Name: FUN_00415b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00415b30(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined4 uVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar2 = param_1[3];
    FUN_00408130(*in_EAX);
    uVar3 = FUN_00412ab0();
    *(undefined4 *)(iVar2 + iVar1 * 0x14 + -0xc) = uVar3;
  }
  return;
}


/* END FUNCTION 0x00415b30 */

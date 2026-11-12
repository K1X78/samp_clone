/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00422a00
 * Name: FUN_00422a00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00422a00(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  
  iVar1 = FUN_0041cc50(0x6a);
  if (iVar1 != 0) {
    uVar2 = FUN_00420310(unaff_EDI,param_1,1);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined1 *)(iVar1 + 1) = 99;
  }
  FUN_004158d0(unaff_EDI,(int)param_1);
  return iVar1;
}


/* END FUNCTION 0x00422a00 */

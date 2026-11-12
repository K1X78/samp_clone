/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00436100
 * Name: FUN_00436100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00436100(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int *unaff_EDI;
  
  FUN_0040d450((int)unaff_EDI);
  iVar1 = FUN_0040b9a0();
  iVar2 = FUN_00436060(extraout_ECX,-1,0,(int)unaff_EDI,(int *)0x0);
  if (iVar2 == 0) {
    FUN_0040d470(extraout_ECX_00,param_1);
    FUN_0040e030((int)param_1,unaff_EDI);
    FUN_0040d870();
    FUN_0042fc30();
    iVar2 = 0;
  }
  else if (iVar2 == 7) {
    *(undefined1 *)(iVar1 + 0x1e) = 1;
    return 7;
  }
  return iVar2;
}


/* END FUNCTION 0x00436100 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00408170
 * Name: FUN_00408170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char __fastcall FUN_00408170(int *param_1)

{
  int iVar1;
  double *unaff_ESI;
  ulonglong uVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  if (0xf < iVar1) {
    return '0';
  }
  uVar2 = FUN_004a0540();
  *unaff_ESI = (*unaff_ESI - (double)(int)uVar2) * 10.0;
  return (char)uVar2 + '0';
}


/* END FUNCTION 0x00408170 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414540
 * Name: FUN_00414540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00414540(int *param_1,int *param_2)

{
  int in_EAX;
  int iVar1;
  int *unaff_EDI;
  int local_4;
  
  iVar1 = FUN_004144a0(&local_4);
  if (iVar1 == 0) {
    if (in_EAX == 0) {
      *unaff_EDI = local_4 + 0x84;
      *param_1 = local_4 + 0x4000;
      *param_2 = 0;
      return;
    }
    *unaff_EDI = local_4 + -4;
    *param_1 = local_4 + 0x4000;
    *param_2 = (in_EAX + -1) * 0x1000 + 0xfde;
  }
  return;
}


/* END FUNCTION 0x00414540 */

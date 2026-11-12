/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ea60
 * Name: FUN_0040ea60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0040ea60(int param_1)

{
  int iVar1;
  int in_EAX;
  int extraout_EDX;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar2 = in_EAX + 0x60;
  iVar3 = 10;
  do {
    iVar1 = *(int *)(iVar2 + 0x10);
    if ((unaff_EDI <= iVar1) && (iVar1 <= unaff_EDI + -1 + param_1)) {
      FUN_0040e920(iVar1,iVar2);
      *(undefined4 *)(extraout_EDX + 0x10) = 0;
      iVar2 = extraout_EDX;
    }
    iVar2 = iVar2 + 0x18;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* END FUNCTION 0x0040ea60 */

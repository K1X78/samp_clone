/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004275c0
 * Name: FUN_004275c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_004275c0(void)

{
  int *in_EAX;
  int unaff_ESI;
  int unaff_EDI;
  char cVar1;
  int iVar2;
  int local_20 [7];
  short local_4;
  
  if (*in_EAX == 0) {
    FUN_0040c7d0(unaff_ESI,unaff_EDI,local_20);
    if (local_4 != 0) {
      iVar2 = *(int *)(unaff_ESI + 0x48);
      cVar1 = '\x03';
      FUN_00408f80();
      FUN_00427460(cVar1,iVar2);
    }
  }
  return;
}


/* END FUNCTION 0x004275c0 */

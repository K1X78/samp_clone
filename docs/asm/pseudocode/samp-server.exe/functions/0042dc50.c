/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042dc50
 * Name: FUN_0042dc50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0042dc50(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int unaff_EDI;
  
  if (in_EAX != (int *)0x0) {
    if (in_EAX[8] == 0) {
      if (*in_EAX != 0) {
        FUN_00428280();
      }
    }
    else {
      FUN_0042d3b0(in_EAX[8]);
    }
    iVar1 = in_EAX[0xe];
    if (iVar1 != 0) {
      iVar2 = in_EAX[0xf];
      *(undefined1 *)(unaff_EDI + 0x65) = 1;
      (**(code **)(iVar2 + 0x1c))(iVar1);
      *(undefined1 *)(unaff_EDI + 0x65) = 0;
    }
  }
  return;
}


/* END FUNCTION 0x0042dc50 */

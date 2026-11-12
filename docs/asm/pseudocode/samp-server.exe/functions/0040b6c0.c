/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040b6c0
 * Name: FUN_0040b6c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_0040b6c0(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EDI;
  
  if (unaff_EBX <= (int)(uint)*(byte *)(unaff_EDI + 0xe)) {
    return 0;
  }
  do {
    iVar1 = FUN_00407b50();
    if (iVar1 != 5) {
      if (iVar1 == 0) {
        *(char *)(unaff_EDI + 0xe) = (char)unaff_EBX;
      }
      return iVar1;
    }
    iVar1 = (**(code **)(unaff_EDI + 0x94))(*(undefined4 *)(unaff_EDI + 0x98));
  } while (iVar1 != 0);
  return 5;
}


/* END FUNCTION 0x0040b6c0 */

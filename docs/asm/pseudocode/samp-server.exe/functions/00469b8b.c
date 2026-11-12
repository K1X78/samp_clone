/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469b8b
 * Name: Catch_00469b8b
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void Catch_00469b8b(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (0xf < *(uint *)(iVar1 + 0x18)) {
    _free(*(void **)(iVar1 + 4));
  }
  *(undefined4 *)(iVar1 + 0x18) = 0xf;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}


/* END FUNCTION 0x00469b8b */

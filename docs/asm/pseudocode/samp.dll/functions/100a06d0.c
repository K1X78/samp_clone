/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a06d0
 * Name: FUN_100a06d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a06d0(void)

{
  int iVar1;
  
  DAT_1018e1cc = _calloc(1,0x201);
  FUN_100a6fe0();
  FUN_1009c350();
  FUN_100a6fc0();
  iVar1 = FUN_100aa300();
  if (iVar1 == 0) {
    MessageBoxA((HWND)0x0,
                "I can\'t determine your GTA version.\r\nSA-MP only supports GTA:SA v1.0 USA/EU",
                "Version Error",0x30);
                    /* WARNING: Subroutine does not return */
    ExitProcess(1);
  }
  return;
}


/* END FUNCTION 0x100a06d0 */

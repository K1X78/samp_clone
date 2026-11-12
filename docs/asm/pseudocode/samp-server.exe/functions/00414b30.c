/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414b30
 * Name: FUN_00414b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00414b30(char param_1,int param_2)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = 0;
  if (*(char *)(unaff_ESI + 9) != '\0') {
    FUN_0040c2c0();
    iVar1 = FUN_0040c560(unaff_ESI,param_1 + '\x01');
    if (iVar1 == 0) {
      iVar1 = FUN_00414930(param_2);
    }
    FUN_0040c340();
  }
  return iVar1;
}


/* END FUNCTION 0x00414b30 */

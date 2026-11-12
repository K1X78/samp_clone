/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e170
 * Name: FUN_0044e170
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0044e170(void *this,int param_1,uint param_2)

{
  void *extraout_ECX;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      FUN_0044e130(this,*(byte *)(uVar1 + param_1));
      uVar1 = uVar1 + 1;
      this = extraout_ECX;
    } while (uVar1 < param_2);
  }
  return;
}


/* END FUNCTION 0x0044e170 */

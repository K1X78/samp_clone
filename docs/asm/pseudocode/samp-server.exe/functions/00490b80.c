/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490b80
 * Name: FUN_00490b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00490b80(void *this,char *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00490aa0(this,param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_2;
  }
  return;
}


/* END FUNCTION 0x00490b80 */

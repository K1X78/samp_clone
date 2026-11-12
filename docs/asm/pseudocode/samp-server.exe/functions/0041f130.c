/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0041f130
 * Name: FUN_0041f130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_0041f130(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_0040bd20();
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_ESI + 0x1e) = 1;
    iVar1 = FUN_0041e8a0(&local_4);
    if (iVar1 == 0) {
      iVar1 = FUN_0041e640(param_1,param_2);
    }
    if (local_4 != 0) {
      puVar3 = (undefined4 *)(unaff_ESI + 0x20);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
    FUN_0040bd50();
    *(undefined1 *)(unaff_ESI + 0x1e) = 0;
  }
  return iVar1;
}


/* END FUNCTION 0x0041f130 */

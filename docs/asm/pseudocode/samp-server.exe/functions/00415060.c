/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415060
 * Name: FUN_00415060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00415060(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != 0) && (uVar1 = param_2 + param_3 * 0x14, param_2 < uVar1)) {
    iVar2 = param_2 + 1;
    iVar3 = ((uVar1 - param_2) - 1) / 0x14 + 1;
    do {
      FUN_00414fb0(*(int *)(iVar2 + 0xf),param_1);
      iVar2 = iVar2 + 0x14;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00408130(param_1);
  return;
}


/* END FUNCTION 0x00415060 */

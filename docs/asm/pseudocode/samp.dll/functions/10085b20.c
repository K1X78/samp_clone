/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085b20
 * Name: FUN_10085b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10085b20(int *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = lstrlenW(DAT_1018062c);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined2 *)FUN_1009b470(iVar3);
      (**(code **)(*param_1 + 0x10))(0x102,*puVar2,0);
      iVar3 = iVar3 + 1;
      iVar1 = lstrlenW(DAT_1018062c);
    } while (iVar3 < iVar1);
  }
  return;
}


/* END FUNCTION 0x10085b20 */

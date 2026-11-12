/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00426610
 * Name: FUN_00426610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00426610(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  
  uVar2 = 0;
  if ((param_1 != 0) && (*(char *)(param_1 + 8) == '\x02')) {
    iVar1 = *(int *)(param_1 + 4);
    FUN_0040c2c0();
    uVar2 = FUN_00426390(extraout_ECX,param_3,param_2);
    if (uVar2 == 0) {
      if ((param_3 < 0) && (*(char *)(iVar1 + 0x13) != '\0')) {
        *(undefined4 *)(iVar1 + 0x28) = 0;
      }
      uVar2 = FUN_00423910();
      uVar3 = FUN_00408f80();
      *(uint *)(iVar1 + 0x28) = uVar3;
      if (uVar3 == 0) {
        FUN_00414010((uint *)(iVar1 + 0x28));
      }
    }
    FUN_0040c340();
  }
  return uVar2;
}


/* END FUNCTION 0x00426610 */

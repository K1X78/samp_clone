/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0410
 * Name: FUN_100a0410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100a0410(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61) == 0) {
    iVar1 = *(int *)(param_1 + 0x65);
    if (iVar1 == 0) {
      FUN_100aa0b0(&DAT_00541df5,5);
      _DAT_00541df5 = DAT_10151918;
      DAT_00541df9 = DAT_1015191c;
      if (DAT_102ac9b8 == 1) {
        FUN_100aa0b0(&DAT_0053f417,5);
        _DAT_0053f417 = DAT_10151928;
        DAT_0053f41b = DAT_1015192c;
      }
      else {
        FUN_100aa0b0(&DAT_0053f417,5);
        _DAT_0053f417 = DAT_10151920;
        DAT_0053f41b = DAT_10151924;
      }
      FUN_100a0370();
      FUN_100aa0b0(&DAT_0053f421,4);
      DAT_0053f41f = 0x85;
      DAT_0053f420 = 0xc0;
      DAT_0053f421 = 0xf;
      DAT_0053f422 = 0x8c;
      _DAT_00b73424 = 0;
      _DAT_00b73428 = 0;
      (*(code *)0x541bd0)();
      (*(code *)0x541dd0)();
      _DAT_00b73424 = 0;
      _DAT_00b73428 = 0;
      (*(code *)0x541bd0)();
      FUN_100aa0b0(&DAT_006194a0,1);
      DAT_006194a0 = 0xe9;
      (**(code **)(*DAT_102ac9d0 + 0x30))(DAT_102ac9d0,0);
      *(int *)(param_1 + 0x65) = *(int *)(param_1 + 0x65) + -1;
      return;
    }
    if (0 < iVar1) {
      *(int *)(param_1 + 0x65) = iVar1 + -1;
    }
  }
  return;
}


/* END FUNCTION 0x100a0410 */

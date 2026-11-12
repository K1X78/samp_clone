/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a0530
 * Name: FUN_100a0530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a0530(int param_1,int param_2,int param_3)

{
  if (param_2 == 2) {
    FUN_100aa0b0(&DAT_00541df5,5);
    _DAT_00541df5 = 0x90909090;
    DAT_00541df9 = 0x90;
    FUN_100a03c0();
    _DAT_00b73424 = 0;
    _DAT_00b73428 = 0;
    (*(code *)0x541bd0)();
    (*(code *)0x541dd0)();
    FUN_100aa0b0(&DAT_006194a0,1);
    DAT_006194a0 = 0xc3;
    (**(code **)(*DAT_102ac9d0 + 0x30))(DAT_102ac9d0,1);
    *(undefined4 *)(param_1 + 0x61) = 2;
    return;
  }
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x61) != 1) {
      FUN_100aa0b0(&DAT_00541df5,5);
      _DAT_00541df5 = 0x90909090;
      DAT_00541df9 = 0x90;
      *(undefined4 *)(param_1 + 0x61) = 1;
      return;
    }
  }
  else if (param_2 == 3) {
    if (*(int *)(param_1 + 0x61) != 3) {
      FUN_100a03c0();
      _DAT_00b73424 = 0;
      _DAT_00b73428 = 0;
      (*(code *)0x541bd0)();
      (*(code *)0x541dd0)();
      FUN_100aa0b0(&DAT_006194a0,1);
      DAT_006194a0 = 0xc3;
      (**(code **)(*DAT_102ac9d0 + 0x30))(DAT_102ac9d0,1);
      *(undefined4 *)(param_1 + 0x61) = 3;
      return;
    }
  }
  else if (param_2 == 4) {
    if (*(int *)(param_1 + 0x61) != 4) {
      FUN_100a0320();
      _DAT_00b73424 = 0;
      _DAT_00b73428 = 0;
      (*(code *)0x541bd0)();
      (*(code *)0x541dd0)();
      FUN_100aa0b0(&DAT_006194a0,1);
      DAT_006194a0 = 0xc3;
      *(undefined4 *)(param_1 + 0x61) = 4;
      return;
    }
  }
  else if ((param_2 == 0) && (*(int *)(param_1 + 0x61) != 0)) {
    *(uint *)(param_1 + 0x65) = (param_3 != 0) - 1 & 10;
    (**(code **)(*DAT_102ac9d0 + 0x30))(DAT_102ac9d0,0);
    *(undefined4 *)(param_1 + 0x61) = 0;
  }
  return;
}


/* END FUNCTION 0x100a0530 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00425050
 * Name: FUN_00425050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00425050(int *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar3;
  int extraout_ECX;
  uint *extraout_ECX_00;
  int *extraout_EDX;
  int *piVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar2 = FUN_0040de10(param_1);
  FUN_0040f4a0();
  local_8 = 0;
  uVar1 = FUN_0040dda0(*param_3);
  if (CONCAT31(extraout_var,uVar1) != 5) {
    piVar4 = extraout_EDX;
    if (1 < param_2) {
      iVar5 = 1;
      local_c = extraout_ECX;
      do {
        uVar1 = FUN_0040dda0(param_3[iVar5]);
        if (CONCAT31(extraout_var_00,uVar1) == 5) {
          return;
        }
        uVar3 = FUN_00423c70(extraout_ECX_00,*(uint **)(local_c + (int)param_3));
        if (-1 < (int)(uVar3 ^ -(uint)(iVar2 != 0))) {
          local_c = iVar5 * 4;
          local_8 = iVar5;
        }
        iVar5 = iVar5 + 1;
        piVar4 = param_1;
      } while (iVar5 < param_2);
    }
    FUN_00419e20(piVar4,(undefined4 *)param_3[local_8]);
  }
  return;
}


/* END FUNCTION 0x00425050 */

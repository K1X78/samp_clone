/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00442160
 * Name: FUN_00442160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl
FUN_00442160(int param_1,byte *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            int *param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  uint local_4;
  
  *param_3 = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = 0;
  }
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 1;
  local_14 = 0x14;
  local_4 = 0;
  local_1c = (int *)FUN_0043aa50(0x50);
  if (local_1c == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 7;
    return 7;
  }
  *local_1c = 0;
  uVar1 = FUN_00441a30(param_1,param_2,FUN_00440970,&local_1c,param_6);
  *local_1c = local_8;
  if ((char)uVar1 == '\x04') {
    FUN_00410150((int)(local_1c + 1));
    if (local_18 != 0) {
      if (param_6 != (int *)0x0) {
        FUN_004080d0(*param_6);
        iVar2 = FUN_004189d0((undefined **)&DAT_004b23ac);
        *param_6 = iVar2;
      }
      FUN_004080d0(local_18);
    }
    *(uint *)(param_1 + 0x14) = local_4;
    return local_4;
  }
  FUN_004080d0(local_18);
  if (uVar1 == 0) {
    piVar3 = local_1c;
    if ((local_8 < local_14) &&
       (piVar3 = (int *)FUN_004128e0(local_1c,local_8 << 2), piVar3 == (int *)0x0)) {
      FUN_00410150((int)(local_1c + 1));
      *(undefined4 *)(param_1 + 0x14) = 7;
      return 7;
    }
    *param_3 = piVar3 + 1;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = local_c;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_10;
    }
    return 0;
  }
  FUN_00410150((int)(local_1c + 1));
  return uVar1;
}


/* END FUNCTION 0x00442160 */

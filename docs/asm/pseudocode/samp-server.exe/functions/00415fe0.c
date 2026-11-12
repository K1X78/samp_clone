/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00415fe0
 * Name: FUN_00415fe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __cdecl FUN_00415fe0(char *param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  bool bVar4;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    return (param_2 == param_1) - 1U & 2;
  }
  if (((((*(ushort *)(param_1 + 2) & 0x800) != 0) || ((*(ushort *)(param_2 + 2) & 0x800) != 0)) ||
      ((((byte)*(ushort *)(param_2 + 2) ^ (byte)*(ushort *)(param_1 + 2)) & 0x10) != 0)) ||
     (*param_1 != *param_2)) {
    return 2;
  }
  bVar1 = FUN_00415fe0(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return 2;
  }
  bVar1 = FUN_00415fe0(*(char **)(param_1 + 0xc),*(char **)(param_2 + 0xc));
  if (CONCAT31(extraout_var_00,bVar1) != 0) {
    return 2;
  }
  iVar3 = FUN_0040eb80();
  if (iVar3 != 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
    return 2;
  }
  if (*(short *)(param_1 + 0x1c) != *(short *)(param_2 + 0x1c)) {
    return 2;
  }
  uVar2 = *(ushort *)(param_1 + 2);
  if ((uVar2 & 0x400) == 0) {
    if ((*param_1 == -0x68) || (*(byte **)(param_1 + 4) == (byte *)0x0)) goto LAB_004160b6;
    if ((*(ushort *)(param_2 + 2) & 0x400) != 0) {
      return 2;
    }
    if (*(byte **)(param_2 + 4) == (byte *)0x0) {
      return 2;
    }
    iVar3 = FUN_00408450(*(byte **)(param_1 + 4),*(byte **)(param_2 + 4));
    bVar4 = iVar3 == 0;
  }
  else {
    if ((*(ushort *)(param_2 + 2) & 0x400) == 0) {
      return 2;
    }
    bVar4 = *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
  }
  if (!bVar4) {
    return 2;
  }
LAB_004160b6:
  uVar2 = uVar2 & 0x100;
  if (uVar2 != (*(ushort *)(param_2 + 2) & 0x100)) {
    return 1;
  }
  if ((uVar2 != 0) && (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))) {
    return 2;
  }
  return 0;
}


/* END FUNCTION 0x00415fe0 */

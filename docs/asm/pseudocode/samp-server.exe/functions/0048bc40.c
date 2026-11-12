/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048bc40
 * Name: FUN_0048bc40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0048bc40(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int local_38 [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar2 = local_38;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_2;
    param_2 = param_2 + 1;
    piVar2 = piVar2 + 1;
  }
  FUN_0048ba90(local_38);
  if ((((local_28 < 9) && (local_24 < 5)) && (local_20 < 5)) &&
     (((uint)local_38[1] < 0x8000001 && ((uint)local_38[1] < 0x60000001)))) {
    *(int *)(param_1 + 0x8c) = local_38[1];
    if (local_18 < 5) {
      local_18 = 5;
    }
    else if (0x111 < local_18) {
      local_18 = 0x111;
    }
    *(int *)(param_1 + 0x50) = local_20;
    *(uint *)(param_1 + 0x2c) = local_18;
    *(int *)(param_1 + 0x48) = local_28;
    *(int *)(param_1 + 0x4c) = local_24;
    *(uint *)(param_1 + 100) = (uint)(local_1c == 0);
    *(bool *)(param_1 + 0xed) = local_14 != 0;
    iVar1 = 4;
    if (local_14 != 0) {
      if (local_10 < 2) {
        iVar1 = 2;
      }
      else if (local_10 < 4) {
        iVar1 = local_10;
      }
    }
    *(int *)(param_1 + 0x118) = iVar1;
    *(undefined4 *)(param_1 + 0x100) = local_c;
    *(undefined4 *)(param_1 + 0x68) = local_8;
    return 0;
  }
  return 5;
}


/* END FUNCTION 0x0048bc40 */

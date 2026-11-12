/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044d6f0
 * Name: FUN_0044d6f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_0044d6f0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined **local_8;
  uint local_4;
  
  local_4 = 0;
  local_8 = (undefined **)0x0;
  FUN_00407e50(*(int *)(param_1 + 0x44));
  iVar1 = *(int *)(param_1 + 0x124);
  if (iVar1 == 0) {
    FUN_0042f990(0x15,(undefined **)0x0);
    FUN_00407e90(*(int *)(param_1 + 0x44));
    uVar2 = FUN_0041d7c0();
    return uVar2;
  }
  piVar3 = FUN_00417b70();
  if (piVar3 == (int *)0x0) {
    uVar2 = 7;
  }
  else {
    piVar3[0x70] = 0;
    piVar3[0x71] = 0x3ff00000;
    *(undefined1 *)(piVar3 + 0x85) = 1;
    *piVar3 = param_1;
    iVar4 = FUN_0044d340(piVar3,param_2,(int *)&local_8);
    if ((((iVar4 == 0) && (iVar4 = piVar3[0x80], iVar4 != 0)) && (*(char *)(param_1 + 0x1e) == '\0')
        ) && ((*(int *)(iVar4 + 0x1c) == 0 && ((*(byte *)(iVar4 + 0x22) & 0x10) == 0)))) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(piVar3[0x80] + 0xc);
        *(undefined4 *)(piVar3[0x80] + 0xc) = 0;
        *(undefined4 *)(piVar3[0x80] + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    else {
      FUN_0042f990(1,local_8);
      FUN_00408130(param_1);
      local_4 = 1;
    }
    *(undefined1 *)(piVar3 + 0x85) = 0;
    if (piVar3[3] != 0) {
      FUN_0042fc30();
    }
    FUN_0041aca0((int *)piVar3[0x80]);
    FUN_00408130(param_1);
    uVar2 = local_4;
  }
  uVar2 = FUN_004340c0(uVar2);
  FUN_00407e90(*(int *)(param_1 + 0x44));
  return uVar2;
}


/* END FUNCTION 0x0044d6f0 */

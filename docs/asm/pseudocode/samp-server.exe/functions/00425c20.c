/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00425c20
 * Name: FUN_00425c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00425c20(int param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 0x24) != 0) || (*(char *)(param_1 + 0x14) != '\0')) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x15) != '\0') && ((*(byte *)(param_2 + 5) & 4) != 0)) {
    return 0;
  }
  param_2[2] = 0;
  bVar1 = FUN_0040b4a0(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      iVar2 = FUN_0040b760();
      if (iVar2 != 0) goto LAB_00425d03;
      iVar2 = 0;
      if (*(char *)(param_1 + 5) != '\x04') {
        uVar3 = FUN_00407bb0();
        if ((uVar3 & 0x200) == 0) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          iVar2 = FUN_004138e0();
        }
      }
      if (iVar2 != 0) goto LAB_00425d03;
    }
    if (*(uint *)(param_1 + 0x18) < (uint)param_2[3]) {
      iVar2 = FUN_0040b000();
      if (iVar2 != 0) {
        iVar2 = FUN_00419210((int)param_2);
        if (iVar2 != 0) goto LAB_00425d03;
      }
    }
    iVar2 = FUN_00425b00(param_2);
  }
  else {
    iVar2 = FUN_0040b000();
    if (iVar2 != 0) {
      iVar2 = FUN_00419210((int)param_2);
      if (iVar2 != 0) goto LAB_00425d03;
    }
    iVar2 = FUN_00425830(0,0,param_1,(int)param_2);
  }
  if (iVar2 == 0) {
    FUN_0040a390();
  }
LAB_00425d03:
  uVar4 = FUN_0040b4b0(param_1);
  return uVar4;
}


/* END FUNCTION 0x00425c20 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10016c50
 * Name: FUN_10016c50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10016c50(undefined2 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 *param_5,undefined4 param_6,int param_7,char param_8)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100a0770();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 2) != 0) {
    FUN_100a0050(*(int *)(param_1 + 2));
    *(undefined4 *)(param_1 + 2) = 0;
  }
  iVar1 = FUN_1009ff50(param_3,*param_5,param_5[1],param_5[2],param_6,1,
                       *(undefined4 *)(param_1 + 0xe));
  if (iVar1 != 0) {
    if (((DAT_102aca28 != 0) && (20000 < param_4)) &&
       ((iVar2 = FUN_100b39d0(param_4), iVar2 != 0 || (iVar2 = FUN_1000ce30(param_4), iVar2 != 0))))
    {
      FUN_100afb50(param_4);
    }
    if (param_7 != 0) {
      FUN_100a6f50(*param_1,param_7);
    }
    if (*(int *)((int)param_1 + 0x1f9) != 0) {
      FUN_100a0ce0(*(int *)((int)param_1 + 0x1f9));
      *(undefined4 *)((int)param_1 + 0x1f9) = 0;
    }
    if (*(int *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x30) != 0) {
      FUN_100af330(*param_1);
    }
    *(int *)(param_1 + 2) = iVar1;
    *(undefined4 *)(param_1 + 0xd8) = 0x42c80000;
    FUN_100aef40(0,0,0);
    if (param_8 != '\x04') {
      FUN_100adcd0(param_8);
    }
    if (*(char *)(param_1 + 0xd) != '!') {
      *(undefined1 *)(param_1 + 0xd) = 0x21;
    }
    return 1;
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return 0;
}


/* END FUNCTION 0x10016c50 */

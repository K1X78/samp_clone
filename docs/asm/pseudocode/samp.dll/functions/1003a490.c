/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003a490
 * Name: FUN_1003a490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1003a490(int *param_1,char *param_2,undefined4 param_3,char param_4)

{
  uint uVar1;
  undefined1 auStack_130 [4];
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined2 uStack_124;
  int iStack_120;
  undefined4 uStack_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10114ecb;
  local_c = ExceptionList;
  uVar1 = 0;
  if (param_2 != (char *)0x0) {
    if ((*param_2 < '0') || (ExceptionList = &local_c, '2' < *param_2)) {
      ExceptionList = &local_c;
      param_2 = (char *)FUN_10053480(param_2);
    }
    (**(code **)(*param_1 + 0xbc))(param_2,param_3,&local_128);
    FUN_1001f220(5);
    uStack_4 = 0;
    if (param_4 == '\0') {
      auStack_130[0] = 7;
    }
    else {
      auStack_130[0] = 8;
    }
    FUN_1001faa0(auStack_130,8,1);
    uStack_12c = FUN_1002e2b0();
    FUN_1001faa0(&uStack_12c,0x20,1);
    if (*(int *)((int)param_1 + 0x3b1) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)param_1 + 0x3ad) + uVar1 * 4) + 0x1c))
                  (uStack_114,iStack_120,local_128,uStack_124);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)((int)param_1 + 0x3b1));
    }
    FUN_10053600(*(undefined4 *)((int)param_1 + 0xc0a),uStack_114,iStack_120 + 7 >> 3,param_2,
                 param_3);
    uStack_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1003a490 */

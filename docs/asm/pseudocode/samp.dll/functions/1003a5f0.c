/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003a5f0
 * Name: FUN_1003a5f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1003a5f0(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_12c [4];
  undefined4 uStack_128;
  undefined2 uStack_124;
  int iStack_120;
  undefined4 uStack_114;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_10114eeb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if ((cVar1 != '\0') && (param_2 != (char *)0x0)) {
    if ((*param_2 < '0') || ('2' < *param_2)) {
      param_2 = (char *)FUN_10053480(param_2);
    }
    (**(code **)(*param_1 + 0xbc))(param_2,param_3,&uStack_128);
    FUN_1001f1f0();
    uStack_4 = 0;
    auStack_12c[0] = 0x37;
    FUN_1001faa0(auStack_12c,8,1);
    if (param_5 < 1) {
      auStack_12c[0] = 0;
      FUN_1001faa0(auStack_12c,8,1);
    }
    else {
      FUN_1001fb50(param_4,param_5);
    }
    uVar2 = 0;
    if (*(int *)((int)param_1 + 0x3b1) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)param_1 + 0x3ad) + uVar2 * 4) + 0x1c))
                  (uStack_114,iStack_120,uStack_128,uStack_124);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)param_1 + 0x3b1));
    }
    FUN_10053600(*(undefined4 *)((int)param_1 + 0xc0a),uStack_114,iStack_120 + 7 >> 3,param_2,
                 param_3);
    uStack_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x1003a5f0 */

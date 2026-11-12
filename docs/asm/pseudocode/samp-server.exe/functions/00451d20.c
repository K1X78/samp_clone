/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00451d20
 * Name: FUN_00451d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00451d20(void *this,char *param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  byte abStack_12c [4];
  undefined4 uStack_128;
  undefined2 uStack_124;
  int aiStack_120 [3];
  char *pcStack_114;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b0dbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*(int *)this + 0x28))();
  if ((cVar1 != '\0') && (param_1 != (char *)0x0)) {
    if ((*param_1 < '0') || ('2' < *param_1)) {
      param_1 = FUN_00462b20(param_1);
    }
    (**(code **)(*(int *)this + 0xbc))(param_1,param_2,&uStack_128);
    FUN_0044d8a0(aiStack_120);
    uStack_4 = 0;
    abStack_12c[0] = 0x37;
    FUN_0044df40(aiStack_120,abStack_12c,8,'\x01');
    if ((int)param_4 < 1) {
      abStack_12c[0] = 0;
      FUN_0044df40(aiStack_120,abStack_12c,8,'\x01');
    }
    else {
      FUN_0044dff0(aiStack_120,param_3,param_4);
    }
    uVar2 = 0;
    if (*(int *)((int)this + 0x3bc) != 0) {
      do {
        (**(code **)(**(int **)(*(int *)((int)this + 0x3b8) + uVar2 * 4) + 0x1c))
                  (pcStack_114,aiStack_120[0],uStack_128,uStack_124);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 0x3bc));
    }
    FUN_00462ce0(*(SOCKET *)((int)this + 0xc18),pcStack_114,aiStack_120[0] + 7 >> 3,param_1,
                 (u_short)param_2);
    uStack_4 = 0xffffffff;
    FUN_0044d9b0((int)aiStack_120);
  }
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x00451d20 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004563b0
 * Name: FUN_004563b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004563b0(void *this,undefined4 param_1,undefined2 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte abStack_128 [4];
  undefined4 uStack_124;
  int aiStack_120 [3];
  int iStack_114;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b0dbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*(int *)this + 0x28))();
  if (cVar1 != '\0') {
    FUN_0044d8d0(aiStack_120,5);
    uStack_4 = 0;
    abStack_128[0] = 6;
    FUN_0044df40(aiStack_120,abStack_128,8,'\x01');
    lVar2 = FUN_0044e970();
    uVar3 = FUN_0044e910();
    uStack_124 = (undefined4)uVar3;
    uVar3 = 0;
    FUN_0044df40(aiStack_120,(byte *)&uStack_124,0x20,'\x01');
    if (param_3 == '\0') {
      (**(code **)(*(int *)this + 0x30))
                (aiStack_120,0,6,0,param_1,
                 CONCAT62((int6)((ulonglong)uVar3 >> 0x10),param_2) & 0xffffffff);
    }
    else {
      FUN_00453ac0(this,iStack_114,aiStack_120[0],0,6,0,param_1,param_2,'\0','\0',(int)lVar2,
                   (int)((ulonglong)lVar2 >> 0x20));
    }
    uStack_4 = 0xffffffff;
    FUN_0044d9b0((int)aiStack_120);
  }
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x004563b0 */

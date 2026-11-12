/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00484eb0
 * Name: FUN_00484eb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00484eb0(void *this,byte *param_1,byte param_2)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  float10 fVar4;
  byte local_128 [4];
  float local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_124 = (float)(uint)*(ushort *)((int)this + 0x2d53);
  uVar2 = 0;
  local_4 = 0;
  FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
  local_128[0] = param_2;
  FUN_0044df40(local_120,local_128,8,'\x01');
  FUN_0044dff0(local_120,param_1,(uint)param_2);
  if (*(char *)((int)DAT_004fc438 + 0x6c) == '\0') {
    FUN_00493960(DAT_004fc438,&DAT_004be8e0,local_120,0xffff);
  }
  else {
    iVar1 = *(int *)((int)DAT_004fc438 + 8);
    local_124 = *(float *)((int)DAT_004fc438 + 0x6e);
    piVar3 = (int *)(iVar1 + 0x24de4);
    do {
      if (((uVar2 != *(ushort *)((int)this + 0x2d53)) && (uVar2 < 1000)) && (*piVar3 != 0)) {
        fVar4 = FUN_00465d60(iVar1,*(ushort *)((int)this + 0x2d53),uVar2);
        if (fVar4 < (float10)local_124 != (fVar4 == (float10)local_124)) {
          FUN_00493c10(DAT_004fc438,&DAT_004be8e0,local_120,uVar2,3);
        }
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 != 1000);
    FUN_00493c10(DAT_004fc438,&DAT_004be8e0,local_120,*(ushort *)((int)this + 0x2d53),3);
  }
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00484eb0 */

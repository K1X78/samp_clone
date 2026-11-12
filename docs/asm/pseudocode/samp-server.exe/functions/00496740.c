/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496740
 * Name: FUN_00496740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00496740(void *this,uint param_1)

{
  int iVar1;
  undefined2 unaff_SI;
  undefined4 unaff_EDI;
  ushort uVar2;
  undefined1 local_128 [8];
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  uVar2 = (ushort)param_1;
  if (*(int *)((int)this + 0x5e) == 1) {
    if (DAT_004fc444 == (void *)0x0) {
      ExceptionList = &local_c;
      FUN_00465760(*(void **)((int)this + 0x14),uVar2);
      if (uVar2 < 1000) {
        iVar1 = *(int *)(*(int *)((int)this + 8) + 0x25d84 + (param_1 & 0xffff) * 4);
      }
      else {
        iVar1 = 0;
      }
      *(undefined4 *)(iVar1 + 0x2d47) = 1;
    }
    else {
      ExceptionList = &local_c;
      FUN_00496ce0(DAT_004fc444,uVar2);
    }
    FUN_00493340(*(void **)((int)this + 0x18),uVar2);
    FUN_00495dc0(this,param_1);
    FUN_00466880(*(void **)((int)this + 8),uVar2);
  }
  else if (*(int *)((int)this + 0x5e) == 2) {
    ExceptionList = &local_c;
    if (DAT_004fc444 != (void *)0x0) {
      ExceptionList = &local_c;
      FUN_00496ce0(DAT_004fc444,uVar2);
    }
    FUN_00495dc0(this,param_1);
    FUN_00466880(*(void **)((int)this + 8),uVar2);
    FUN_0044d8a0(local_120);
    local_4 = 0;
    (**(code **)(**(int **)((int)this + 0x40) + 0xe8))(local_128,param_1 & 0xffff);
    (**(code **)(**(int **)((int)this + 0x40) + 0x80))
              (&DAT_004bff28,local_128,1,8,0,unaff_EDI,unaff_SI,0,0);
    local_4 = 0xffffffff;
    FUN_0044d9b0((int)local_120);
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00496740 */

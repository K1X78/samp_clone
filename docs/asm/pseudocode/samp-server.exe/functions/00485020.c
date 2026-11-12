/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00485020
 * Name: FUN_00485020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00485020(void *this,byte param_1,ushort param_2)

{
  int iVar1;
  uint uVar2;
  uint local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b183b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  FUN_00483630(this,7);
  uVar2 = (uint)param_1;
  FUN_0046b080((void *)DAT_004fc438[1],(uint)*(ushort *)((int)this + 0x2d53),(uint)param_2,uVar2);
  if ((void *)*DAT_004fc438 != (void *)0x0) {
    FUN_0046dd10((void *)*DAT_004fc438,(uint)*(ushort *)((int)this + 0x2d53),(uint)param_2,uVar2);
  }
  local_124 = (uint)*(ushort *)((int)this + 0x2d53);
  FUN_0044df40(local_120,(byte *)&local_124,0x10,'\x01');
  FUN_00493960(DAT_004fc438,&DAT_004bef50,local_120,*(ushort *)((int)this + 0x2d53));
  if ((DAT_004fc43c != (void *)0x0) &&
     (iVar1 = FUN_00490c80(DAT_004fc43c,"chatlogging"), iVar1 != 0)) {
    if (param_2 == 0xffff) {
      if (*(ushort *)((int)this + 0x2d53) < 1000) {
        FUN_00491fa0("[death] %s died %d");
      }
      else {
        FUN_00491fa0("[death] %s died %d");
      }
    }
    else {
      FUN_00494420(uVar2);
      FUN_00491fa0("[kill] %s killed %s %s");
    }
  }
  FUN_00483da0(this);
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00485020 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00459f90
 * Name: FUN_00459f90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_00459f90(void *this,ushort param_1,undefined4 param_2,int param_3,u_short param_4,char *param_5)

{
  void *this_00;
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  this_00 = (void *)((int)this + 8);
  FUN_00457a30(this_00,0x1e,0);
  uVar1 = FUN_00459b40(this_00,param_1,param_4,param_3,param_5);
  FUN_0044fe80(this_00,param_1);
  uVar3 = FUN_0044e910();
  FUN_0045ae40((uint)uVar3);
  uVar2 = FUN_0045af90();
  *(uint *)((int)this + 0xe00) = uVar2;
  if ((uVar2 & 1) == 0) {
    *(uint *)((int)this + 0xe00) = uVar2 - 1;
  }
  uVar2 = FUN_0045af90();
  *(uint *)((int)this + 0xe04) = uVar2;
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar2 - 1;
    *(uint *)((int)this + 0xe04) = uVar2;
  }
  return CONCAT31((int3)(uVar2 >> 8),(char)uVar1);
}


/* END FUNCTION 0x00459f90 */

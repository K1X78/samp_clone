/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00497890
 * Name: FUN_00497890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00497890(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  byte *pbVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 local_130;
  undefined4 local_120 [67];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1c6b;
  pvStack_c = ExceptionList;
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined2 *)(param_1 + 0xc);
  local_130 = 0x4978c7;
  ExceptionList = &pvStack_c;
  FUN_0044d8a0(local_120);
  iVar3 = *(int *)(DAT_004fc438 + 8);
  local_4 = 0;
  local_130 = CONCAT22(local_130._2_2_,uVar1);
  uVar4 = (**(code **)(*DAT_0051c18c + 0xe4))(uVar2);
  if (((uVar4 < 1000) && (*(int *)(iVar3 + 0x24de4 + (uint)uVar4 * 4) != 0)) &&
     (*(int *)(iVar3 + 0x2cecc + (uint)uVar4 * 4) != 0)) {
    uVar7 = DAT_004ebdd4;
    pbVar5 = (byte *)(**(code **)(*DAT_0051c18c + 0x114))(DAT_004ebdd4,DAT_004ebdd8,0x138);
    uVar6 = 0x49;
    FUN_0044dff0(&local_130,pbVar5,uVar7);
    (**(code **)(*DAT_0051c18c + 0x80))
              (&DAT_004c00ac,&local_130,1,8,0,uVar2,CONCAT22(uVar6,uVar1),0,0);
  }
  pvStack_c = (void *)0xffffffff;
  FUN_0044d9b0((int)&stack0xfffffed8);
  ExceptionList = pvStack_14;
  return;
}


/* END FUNCTION 0x00497890 */

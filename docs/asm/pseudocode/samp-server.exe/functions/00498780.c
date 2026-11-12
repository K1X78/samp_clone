/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00498780
 * Name: FUN_00498780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00498780(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined4 auStack_128 [69];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004b1c6b;
  pvStack_c = ExceptionList;
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined2 *)(param_1 + 0xc);
  uVar9 = 0x49;
  ExceptionList = &pvStack_c;
  uVar4 = (**(code **)(*DAT_0051c18c + 0xe4))
                    (*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 0xc));
  if (*(int *)((int)DAT_004fc438 + 0x5e) == 1) {
    iVar8 = DAT_004fc438[2];
    uVar5 = (**(code **)(*DAT_0051c18c + 0xe4))(uVar2,CONCAT22(uVar9,uVar1));
    if ((uVar5 < 1000) && (*(int *)(iVar8 + 0x24de4 + (uint)uVar5 * 4) != 0)) {
      pvVar3 = (void *)DAT_004fc438[2];
      uVar5 = (**(code **)(*DAT_0051c18c + 0xe4))(uVar2,uVar1);
      uVar6 = FUN_00466120(pvVar3,uVar5);
      if ((char)uVar6 != '\0') {
        uVar7 = FUN_0046b400((void *)DAT_004fc438[1],(uint)uVar4);
        if (((((void *)*DAT_004fc438 == (void *)0x0) ||
             ((uVar7 != 0 && (iVar8 = FUN_0046e0a0((void *)*DAT_004fc438,(uint)uVar4), iVar8 != 0)))
             ) && (uVar7 != 0)) &&
           ((pvVar3 = (void *)DAT_004fc438[2], pvVar3 != (void *)0x0 &&
            (iVar8 = FUN_00463da0(pvVar3,uVar4), iVar8 != 0)))) {
          iVar8 = FUN_00463d80(pvVar3,uVar4);
          *(undefined4 *)(iVar8 + 0x2cf5) = 1;
        }
        FUN_0044d8a0(auStack_128);
        pvStack_c = (void *)0x0;
        FUN_0044df40(auStack_128,&stack0xfffffed0,8,'\x01');
        (**(code **)(*DAT_0051c18c + 0x80))(&DAT_004be888,auStack_128,1,8,0,uVar2,uVar1,0,0);
        pvStack_c = (void *)0xffffffff;
        FUN_0044d9b0((int)auStack_128);
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}


/* END FUNCTION 0x00498780 */

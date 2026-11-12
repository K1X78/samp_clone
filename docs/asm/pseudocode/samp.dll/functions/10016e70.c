/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10016e70
 * Name: FUN_10016e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10016e70(int param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if ((param_3 == 0) || (-1 < param_3 - *(int *)(param_1 + 0x1c9))) {
    *(int *)(param_1 + 0x1c9) = param_3;
    puVar6 = param_2;
    puVar7 = (ushort *)(param_1 + 0x80);
    for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
    }
    *puVar7 = *puVar6;
    *(char *)(puVar7 + 1) = (char)puVar6[1];
    uVar2 = *param_2;
    *(ushort *)(param_1 + 2) = uVar2;
    iVar5 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
    if ((uVar2 < 2000) && (*(int *)(iVar5 + 0x3074 + (uint)uVar2 * 4) != 0)) {
      uVar3 = *(undefined4 *)(iVar5 + 0x1134 + (uint)uVar2 * 4);
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(param_1 + 8) = uVar3;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    *(float *)(param_1 + 0x1b0) = (float)(byte)param_2[0x1a];
    bVar1 = *(byte *)((int)param_2 + 0x35);
    *(undefined1 *)(param_1 + 0x1c4) = 0x11;
    *(float *)(param_1 + 0x1ac) = (float)bVar1;
    DVar4 = GetTickCount();
    *(DWORD *)(param_1 + 0x1c5) = DVar4;
    *(undefined1 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      iVar5 = FUN_100aba90();
      if (iVar5 == 0) {
        FUN_10014660();
      }
    }
    if (*(char *)(param_1 + 0x1a) != '\x13') {
      FUN_10015f10(0x13,*(char *)(param_1 + 0x1a));
      *(undefined1 *)(param_1 + 0x1a) = 0x13;
    }
  }
  return;
}


/* END FUNCTION 0x10016e70 */

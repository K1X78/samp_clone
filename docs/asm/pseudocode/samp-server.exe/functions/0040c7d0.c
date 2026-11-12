/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040c7d0
 * Name: FUN_0040c7d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0040c7d0(int param_1,int param_2,int *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  int *piVar10;
  
  *param_3 = param_2;
  bVar2 = *(byte *)(param_1 + 6);
  uVar9 = (ushort)bVar2;
  piVar10 = param_3;
  if (*(char *)(param_1 + 2) == '\0') {
    pbVar1 = (byte *)((uint)bVar2 + param_2);
    param_3[4] = 0;
    bVar3 = *pbVar1;
    if (bVar3 < 0x80) {
      bVar5 = 1;
      piVar10 = (int *)(uint)bVar3;
    }
    else {
      uVar6 = FUN_00408ed0(pbVar1);
      bVar5 = (byte)uVar6;
    }
    param_3[2] = (int)piVar10;
    param_3[3] = 0;
    uVar9 = (ushort)bVar2 + (ushort)bVar5;
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') {
      piVar10 = (int *)0x0;
    }
    else {
      pbVar1 = (byte *)((uint)bVar2 + param_2);
      bVar3 = *pbVar1;
      if (bVar3 < 0x80) {
        uVar9 = bVar2 + 1;
        piVar10 = (int *)(uint)bVar3;
      }
      else {
        uVar6 = FUN_00408ed0(pbVar1);
        uVar9 = (ushort)bVar2 + (ushort)(byte)uVar6;
      }
    }
    uVar6 = FUN_00408d50();
    param_3[4] = (int)piVar10;
    uVar9 = uVar9 + ((ushort)uVar6 & 0xff);
  }
  param_3[5] = (int)piVar10;
  *(ushort *)(param_3 + 6) = uVar9;
  if ((int *)(uint)*(ushort *)(param_1 + 8) < piVar10) {
    uVar4 = *(ushort *)(param_1 + 10);
    iVar8 = ((int)piVar10 - (uint)uVar4) % (*(ushort *)(*(int *)(param_1 + 0x3c) + 0x18) - 4) +
            (uint)uVar4;
    if ((int)(uint)*(ushort *)(param_1 + 8) < iVar8) {
      *(ushort *)((int)param_3 + 0x1a) = uVar4;
    }
    else {
      *(short *)((int)param_3 + 0x1a) = (short)iVar8;
    }
    uVar9 = *(short *)((int)param_3 + 0x1a) + uVar9;
    *(ushort *)(param_3 + 7) = uVar9;
    uVar7 = uVar9 + 4;
  }
  else {
    uVar7 = (uint)uVar9 + (int)piVar10;
    *(short *)((int)param_3 + 0x1a) = (short)piVar10;
    *(undefined2 *)(param_3 + 7) = 0;
    if ((uVar7 & 0xfffffffc) == 0) {
      *(undefined2 *)((int)param_3 + 0x1e) = 4;
      return;
    }
  }
  *(short *)((int)param_3 + 0x1e) = (short)uVar7;
  return;
}


/* END FUNCTION 0x0040c7d0 */

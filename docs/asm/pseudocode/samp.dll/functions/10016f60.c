/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10016f60
 * Name: FUN_10016f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10016f60(int param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort uVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = param_2[1];
  *(undefined4 *)(param_1 + 0x2c) = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = param_2[3];
  *(undefined4 *)(param_1 + 0x34) = param_2[4];
  *(undefined4 *)(param_1 + 0x38) = param_2[5];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)param_2;
  *(byte *)(param_1 + 0x1b) = *(byte *)((int)param_2 + 2) & 0x3f;
  uVar2 = *(ushort *)(param_1 + 2);
  iVar4 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if ((uVar2 < 2000) && (*(int *)(iVar4 + 0x3074 + (uint)uVar2 * 4) != 0)) {
    uVar5 = *(undefined4 *)(iVar4 + 0x1134 + (uint)uVar2 * 4);
  }
  else {
    uVar5 = 0;
  }
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(float *)(param_1 + 0x1b0) = (float)*(byte *)(param_2 + 1);
  bVar1 = *(byte *)((int)param_2 + 5);
  *(undefined1 *)(param_1 + 0x1c4) = 0x12;
  *(float *)(param_1 + 0x1ac) = (float)bVar1;
  DVar3 = GetTickCount();
  *(DWORD *)(param_1 + 0x1c5) = DVar3;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = FUN_100aba90();
    if (iVar4 == 0) {
      FUN_10014660();
    }
  }
  if (*(char *)(param_1 + 0x1a) != '\x12') {
    *(undefined1 *)(param_1 + 0x1a) = 0x12;
  }
  return;
}


/* END FUNCTION 0x10016f60 */

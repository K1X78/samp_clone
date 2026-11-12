/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004152f0
 * Name: FUN_004152f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall
FUN_004152f0(undefined4 param_1,int param_2,undefined4 *param_3,int param_4,byte *param_5)

{
  int iVar1;
  int in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint local_8;
  
  iVar1 = (uint)*(ushort *)((int)param_3 + 6) * 0x28 + 0x40;
  if ((int)(param_2 - (-in_EAX & 7U)) < iVar1) {
    puVar2 = FUN_00412930(iVar1);
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    *(undefined2 *)((int)puVar2 + 6) = 3;
  }
  else {
    puVar2 = (undefined4 *)((-in_EAX & 7U) + in_EAX);
    *(undefined2 *)((int)puVar2 + 6) = 2;
  }
  *puVar2 = param_3;
  *(short *)(puVar2 + 1) = *(short *)((int)param_3 + 6) + 1;
  puVar7 = puVar2 + 6;
  puVar2[4] = puVar7;
  if (*param_5 < 0x80) {
    local_8 = (uint)*param_5;
    uVar5 = 1;
  }
  else {
    uVar5 = FUN_00408ed0(param_5);
    uVar5 = uVar5 & 0xff;
  }
  uVar4 = 0;
  for (uVar6 = local_8;
      ((uVar5 < local_8 && (uVar4 < *(ushort *)(puVar2 + 1))) && ((int)uVar6 <= param_4));
      uVar6 = uVar6 + uVar3) {
    if (param_5[uVar5] < 0x80) {
      uVar3 = 1;
    }
    else {
      uVar3 = FUN_00408ed0(param_5 + uVar5);
      uVar3 = uVar3 & 0xff;
    }
    *(undefined1 *)((int)puVar7 + 0x1f) = *(undefined1 *)(param_3 + 1);
    puVar7[4] = *param_3;
    uVar5 = uVar5 + uVar3;
    *(undefined2 *)(puVar7 + 7) = 0;
    puVar7[9] = 0;
    uVar3 = FUN_0040da70((char *)(param_5 + uVar6));
    puVar7 = puVar7 + 10;
    uVar4 = uVar4 + 1;
  }
  *(ushort *)(puVar2 + 1) = uVar4;
  return;
}


/* END FUNCTION 0x004152f0 */

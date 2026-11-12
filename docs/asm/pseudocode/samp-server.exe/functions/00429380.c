/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00429380
 * Name: FUN_00429380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall
FUN_00429380(undefined4 param_1,undefined1 *param_2,int param_3,int param_4,undefined1 *param_5,
            int param_6,uint *param_7)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *extraout_ECX;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_c;
  int local_8;
  int local_4;
  
  uVar7 = -(uint)(param_6 != 0) & 4;
  local_c = 0;
  if (*param_7 == 0) {
    if ((*(char *)(param_3 + 1) == '\0') && (in_EAX + 2 <= (int)(uint)*(ushort *)(param_3 + 0xe))) {
      uVar3 = FUN_00423650(*(int *)(param_3 + 0x44));
      if (uVar3 != 0) {
        *param_7 = uVar3;
        return;
      }
      iVar2 = *(int *)(param_3 + 0x40);
      local_8 = (uint)*(ushort *)(param_3 + 0xc) + (uint)*(ushort *)(param_3 + 0x10) * 2;
      local_4 = (uint)*(ushort *)(param_3 + 0xc) + param_4 * 2;
      uVar3 = FUN_0041f370(in_EAX,&local_c);
      if (uVar3 != 0) {
        *param_7 = uVar3;
        return;
      }
      *(short *)(param_3 + 0x10) = *(short *)(param_3 + 0x10) + 1;
      *(short *)(param_3 + 0xe) = *(short *)(param_3 + 0xe) + (-2 - (short)in_EAX);
      puVar6 = (undefined4 *)(param_5 + uVar7);
      puVar8 = (undefined4 *)(uVar7 + iVar2 + local_c);
      for (uVar3 = in_EAX - uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar7 = in_EAX - uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      if (param_6 != 0) {
        FUN_00408fa0((undefined1 *)(iVar2 + local_c));
      }
      puVar4 = (undefined1 *)(local_8 + iVar2);
      if (local_4 < local_8) {
        iVar5 = ((local_8 - local_4) - 1U >> 1) + 1;
        do {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
          puVar4 = puVar4 + -2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(char *)(local_4 + 1 + iVar2) = (char)local_c;
      *(char *)(local_4 + iVar2) = (char)((uint)local_c >> 8);
      *(undefined1 *)(*(byte *)(param_3 + 5) + 3 + iVar2) = *(undefined1 *)(param_3 + 0x11);
      *(undefined1 *)(*(byte *)(param_3 + 5) + 4 + iVar2) = *(undefined1 *)(param_3 + 0x10);
      if (*(char *)(*(int *)(param_3 + 0x3c) + 0x14) != '\0') {
        FUN_004275c0();
        return;
      }
    }
    else {
      if (param_2 != (undefined1 *)0x0) {
        puVar6 = (undefined4 *)(param_5 + uVar7);
        puVar8 = (undefined4 *)(param_2 + uVar7);
        for (uVar3 = in_EAX - uVar7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar7 = in_EAX - uVar7 & 3; param_5 = param_2, uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      if (param_6 != 0) {
        FUN_00408fa0(param_5);
        param_5 = extraout_ECX;
      }
      bVar1 = *(byte *)(param_3 + 1);
      *(byte *)(param_3 + 1) = bVar1 + 1;
      *(undefined1 **)(param_3 + 0x14 + (uint)bVar1 * 8) = param_5;
      *(undefined2 *)(param_3 + 0x18 + (uint)bVar1 * 8) = (undefined2)param_4;
    }
  }
  return;
}


/* END FUNCTION 0x00429380 */

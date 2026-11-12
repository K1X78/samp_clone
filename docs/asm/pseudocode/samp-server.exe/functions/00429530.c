/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00429530
 * Name: FUN_00429530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00429530(int param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_14;
  byte *local_10;
  uint local_c;
  byte *local_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  iVar2 = *(int *)(param_2 + 0x3c);
  if (*(short *)(param_2 + 0x10) == 0) {
    uVar5 = FUN_0041d790();
    return uVar5;
  }
  local_14 = FUN_00428700(iVar2,&param_2,&local_4,(undefined4 *)0x0,'\0');
  if (local_14 == 0) {
    local_c = *(uint *)(iVar3 + 0x14);
    pbVar9 = param_3 + 4;
    local_8 = pbVar9;
    local_10 = FUN_0040c950(local_c);
    iVar4 = param_2;
    FUN_0041f920(0xd);
    FUN_0040cf30(iVar4,1,(int)&local_c,(int)&local_10);
    if (*(char *)(iVar2 + 0x14) != '\0') {
      FUN_00427460('\x05',*(int *)(param_1 + 0x48));
      pbVar9 = local_8;
      if (*(ushort *)(param_2 + 10) < (ushort)local_10) {
        FUN_004275c0();
        pbVar9 = local_8;
      }
    }
    iVar2 = (uint)*(ushort *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x40) +
            (uint)*(ushort *)(iVar3 + 0x10) * 2;
    pbVar6 = (byte *)(*(int *)(iVar3 + 0x40) +
                     (uint)(CONCAT11(*(undefined1 *)(iVar2 + -2),*(undefined1 *)(iVar2 + -1)) &
                           *(ushort *)(iVar3 + 0x12)));
    pbVar8 = pbVar6;
    do {
      pbVar7 = pbVar8;
      pbVar8 = pbVar7 + 1;
      if ((*pbVar7 & 0x80) == 0) break;
    } while (pbVar8 < pbVar6 + 9);
    do {
      bVar1 = *pbVar8;
      *pbVar9 = bVar1;
      pbVar9 = pbVar9 + 1;
      pbVar8 = pbVar8 + 1;
      if ((bVar1 & 0x80) == 0) break;
    } while (pbVar8 < pbVar7 + 10);
    FUN_00429380((uint)*(ushort *)(param_1 + 0x10),(undefined1 *)0x0,param_1,
                 (uint)*(ushort *)(param_1 + 0x10),param_3,*(int *)(iVar3 + 0x48),&local_14);
    FUN_00408fa0((undefined1 *)(*(byte *)(param_1 + 5) + 8 + *(int *)(param_1 + 0x40)));
    FUN_00427610();
  }
  return local_14;
}


/* END FUNCTION 0x00429530 */

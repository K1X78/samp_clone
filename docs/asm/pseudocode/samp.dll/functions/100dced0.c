/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dced0
 * Name: FUN_100dced0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100dced0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  int local_10;
  undefined4 *local_c;
  
  iVar4 = param_4;
  local_c = param_1;
  param_1 = (undefined4 *)0x0;
  if (*(uint *)(param_4 + 0x60) < *(uint *)(param_4 + 100)) {
    do {
      uVar5 = *(uint *)(iVar4 + 0x60);
      bVar2 = *(byte *)(uVar5 + 0x68 + iVar4);
      cVar3 = (&DAT_10125678)[bVar2];
      uVar7 = 1;
      local_10 = 1;
      param_4._0_3_ =
           CONCAT12("0123456789ABCDEF"[(int)(char)bVar2 & 0xf],
                    CONCAT11("0123456789ABCDEF"[(int)(char)bVar2 >> 4 & 0xf],bVar2));
      if (cVar3 == '\x01') goto LAB_100dcfed;
      if (cVar3 == '\x02') {
        if ((*(uint *)(iVar4 + 100) <= uVar5 + 1) && (param_3 != 0)) goto LAB_100dcfe3;
        if (*(uint *)(iVar4 + 100) < uVar5 + 3) {
          if (param_3 == 0) {
            return (int)param_1;
          }
        }
        else if (((&DAT_10125678)[*(byte *)(uVar5 + 0x69 + iVar4)] == '\x03') &&
                ((&DAT_10125678)[*(byte *)(uVar5 + 0x6a + iVar4)] == '\x04')) goto LAB_100dcfe3;
      }
      else if (cVar3 == '\x03') {
        if ((uVar5 < *(uint *)(iVar4 + 100)) || (param_3 == 0)) {
          if (*(uint *)(iVar4 + 100) < uVar5 + 2) {
            if (param_3 == 0) {
              return (int)param_1;
            }
            bVar10 = (param_3 != 0) == true;
          }
          else {
            if ((&DAT_10125678)[*(byte *)(uVar5 + 0x68 + iVar4)] != '\x03') goto LAB_100dcfe3;
            bVar10 = (&DAT_10125678)[*(byte *)(uVar5 + 0x69 + iVar4)] == '\x04';
          }
          if (!bVar10) goto LAB_100dcfe3;
        }
        uVar7 = 2;
        param_4._0_2_ = CONCAT11(10,bVar2);
        local_10 = 2;
      }
      else {
LAB_100dcfe3:
        param_4 = CONCAT31(param_4._1_3_,0x3d);
        uVar7 = 3;
      }
LAB_100dcfed:
      if (*(char *)((int)&param_3 + uVar7 + 3) != '\n') {
        uVar1 = *(int *)(iVar4 + 0x5c) + uVar7;
        if (0x4c < uVar1) goto LAB_100dd054;
        if (uVar1 == 0x4c) {
          uVar5 = local_10 + uVar5;
          if ((uVar5 < *(uint *)(iVar4 + 100)) || (param_3 == 0)) {
            if (*(uint *)(iVar4 + 100) < uVar5 + 2) {
              if (param_3 == 0) {
                return (int)param_1;
              }
            }
            else if (((&DAT_10125678)[*(byte *)(uVar5 + 0x68 + iVar4)] == '\x03') &&
                    ((&DAT_10125678)[*(byte *)(uVar5 + 0x69 + iVar4)] == '\x04')) goto LAB_100dd069;
LAB_100dd054:
            param_4 = 0xa0d3d;
            uVar7 = 3;
            local_10 = 0;
          }
        }
      }
LAB_100dd069:
      if (param_2 < uVar7) {
        return (int)param_1;
      }
      puVar8 = &param_4;
      puVar9 = local_c;
      for (iVar6 = 0; uVar5 = uVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      local_c = (undefined4 *)((int)local_c + uVar7);
      *(uint *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) + uVar7;
      param_1 = (undefined4 *)((int)param_1 + uVar7);
      param_2 = param_2 - uVar7;
      if (*(char *)((int)&param_3 + uVar7 + 3) == '\n') {
        *(undefined4 *)(iVar4 + 0x5c) = 0;
      }
      uVar5 = *(int *)(iVar4 + 0x60) + local_10;
      *(uint *)(iVar4 + 0x60) = uVar5;
    } while (uVar5 < *(uint *)(iVar4 + 100));
  }
  return (int)param_1;
}


/* END FUNCTION 0x100dced0 */

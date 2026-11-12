/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00453640
 * Name: FUN_00453640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00453640(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
    if ((uint)((int)pbVar2 - (int)(param_1 + 1)) < 0x10) {
      puVar5 = (undefined4 *)0x0;
      uVar6 = 0;
      FUN_004629a0((LPCRITICAL_SECTION)((int)this + 0x394));
      if (*(uint *)((int)this + 0x3b0) != 0) {
        puVar5 = *(undefined4 **)((int)this + 0x3ac);
        do {
          pbVar2 = *(byte **)*puVar5;
          pbVar3 = param_1;
          do {
            bVar1 = *pbVar3;
            bVar7 = bVar1 < *pbVar2;
            if (bVar1 != *pbVar2) {
LAB_004536db:
              iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_004536e0;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar7 = bVar1 < pbVar2[1];
            if (bVar1 != pbVar2[1]) goto LAB_004536db;
            pbVar3 = pbVar3 + 2;
            pbVar2 = pbVar2 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_004536e0:
          if (iVar4 == 0) {
            iVar4 = *(int *)((int)this + 0x3ac);
            puVar5 = *(undefined4 **)(iVar4 + uVar6 * 4);
            *(undefined4 *)(iVar4 + uVar6 * 4) =
                 *(undefined4 *)(iVar4 + -4 + *(int *)((int)this + 0x3b0) * 4);
            FUN_0045c920((void *)((int)this + 0x3ac),*(int *)((int)this + 0x3b0) - 1);
            goto LAB_0045371f;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < *(uint *)((int)this + 0x3b0));
        puVar5 = (undefined4 *)0x0;
      }
LAB_0045371f:
      FUN_004629b0((LPCRITICAL_SECTION)((int)this + 0x394));
      if (puVar5 != (undefined4 *)0x0) {
        _free((void *)*puVar5);
        _free(puVar5);
      }
    }
  }
  return;
}


/* END FUNCTION 0x00453640 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004519c0
 * Name: FUN_004519c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004519c0(void *this,byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  LPCRITICAL_SECTION p_Var6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  
  uVar10 = FUN_0044e910();
  iVar5 = 10;
  bVar9 = true;
  pbVar2 = param_1;
  pbVar3 = &DAT_004baa98;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pbVar2 == *pbVar3;
    pbVar2 = pbVar2 + 1;
    pbVar3 = pbVar3 + 1;
  } while (bVar9);
  if (((!bVar9) && (param_1 != (byte *)0x0)) && (*param_1 != 0)) {
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
    if ((uint)((int)pbVar2 - (int)(param_1 + 1)) < 0x10) {
      p_Var6 = (LPCRITICAL_SECTION)((int)this + 0x394);
      uVar8 = 0;
      FUN_004629a0(p_Var6);
      if (*(uint *)((int)this + 0x3b0) != 0) {
        puVar4 = *(undefined4 **)((int)this + 0x3ac);
        puVar7 = puVar4;
        do {
          pbVar2 = *(byte **)*puVar7;
          pbVar3 = param_1;
          do {
            bVar1 = *pbVar3;
            bVar9 = bVar1 < *pbVar2;
            if (bVar1 != *pbVar2) {
LAB_00451a74:
              iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00451a79;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar9 = bVar1 < pbVar2[1];
            if (bVar1 != pbVar2[1]) goto LAB_00451a74;
            pbVar3 = pbVar3 + 2;
            pbVar2 = pbVar2 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00451a79:
          if (iVar5 == 0) {
            if (param_2 != 0) {
              *(int *)(puVar4[uVar8] + 4) = (int)uVar10 + param_2;
              FUN_004629b0(p_Var6);
              return;
            }
            *(undefined4 *)(puVar4[uVar8] + 4) = 0;
            FUN_004629b0(p_Var6);
            return;
          }
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar8 < *(uint *)((int)this + 0x3b0));
      }
      FUN_004629b0(p_Var6);
      puVar4 = operator_new(8);
      pbVar2 = operator_new(0x10);
      *puVar4 = pbVar2;
      if (param_2 == 0) {
        puVar4[1] = 0;
      }
      else {
        puVar4[1] = (int)uVar10 + param_2;
      }
      do {
        bVar1 = *param_1;
        param_1 = param_1 + 1;
        *pbVar2 = bVar1;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
      FUN_004629a0(p_Var6);
      FUN_0045b5f0((void *)((int)this + 0x3ac),puVar4);
      FUN_004629b0(p_Var6);
    }
  }
  return;
}


/* END FUNCTION 0x004519c0 */

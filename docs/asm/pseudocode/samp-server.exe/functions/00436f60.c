/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00436f60
 * Name: FUN_00436f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00436f60(void *this,int *param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5,
            int param_6,undefined4 *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  longlong lVar9;
  double local_1c8;
  uint local_1c0;
  uint local_1bc;
  double local_1b0;
  uint local_1a4;
  uint local_190 [4];
  double local_180;
  double local_178;
  uint local_170;
  uint local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_158;
  undefined4 local_154;
  uint local_14c;
  
  iVar3 = *(int *)(param_3 + 0x18);
  lVar9 = FUN_004106c0(this,(int *)param_2[1]);
  uVar7 = param_2[7];
  uVar1 = uVar7 + param_2[5] * 0x28;
  if (*(char *)(param_3 + 0x16) == '\0') {
    for (; uVar7 < uVar1; uVar7 = uVar7 + 0x28) {
      if (((*(short *)(uVar7 + 0x10) == 0x100) &&
          (local_1a4 = (uint)((ulonglong)lVar9 >> 0x20),
          (~(uint)lVar9 & *(uint *)(uVar7 + 0x20) & param_4) == 0 &&
          (~local_1a4 & *(uint *)(uVar7 + 0x24) & param_5) == 0)) &&
         (iVar4 = *(int *)(uVar7 + 0xc),
         (*(uint *)(iVar4 + 0x160) & (uint)lVar9) != 0 ||
         (*(uint *)(iVar4 + 0x164) & local_1a4) != 0)) {
        uVar6 = *(uint *)(iVar4 + 0x1c);
        local_1c8 = 0.0;
        uVar2 = uVar6 + *(int *)(iVar4 + 0x14) * 0x28;
        local_1b0 = 0.0;
        local_1c0 = 0;
        local_1bc = 0;
        for (; uVar6 < uVar2; uVar6 = uVar6 + 0x28) {
          if (*(short *)(uVar6 + 0x10) == 0x200) {
LAB_00437086:
            FUN_00433460(local_190,(int *)0x0,param_1,param_4,param_5);
            local_1c8 = local_180 + local_1c8;
            local_1bc = local_1bc | local_16c;
            local_1b0 = local_178 + local_1b0;
            local_1c0 = local_1c0 | local_170;
            if (*(double *)(param_7 + 4) <= local_1c8) break;
          }
          else if (*(int *)(uVar6 + 8) == iVar3) {
            local_168 = *param_2;
            local_164 = param_2[1];
            local_158 = 0x45;
            local_154 = 1;
            local_14c = uVar6;
            goto LAB_00437086;
          }
        }
        puVar5 = param_7;
        if (param_6 != 0) {
          fVar8 = FUN_00410820(local_1b0);
          local_1c8 = (double)(fVar8 * (float10)local_1b0 + (float10)local_1c8);
          puVar5 = extraout_ECX;
        }
        if (local_1c8 < *(double *)(puVar5 + 4)) {
          *(double *)(puVar5 + 4) = local_1c8;
          puVar5[8] = local_1c0;
          *(double *)(puVar5 + 6) = local_1b0;
          puVar5[9] = local_1bc;
          *puVar5 = 0x10000000;
          puVar5[2] = uVar7;
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x00436f60 */

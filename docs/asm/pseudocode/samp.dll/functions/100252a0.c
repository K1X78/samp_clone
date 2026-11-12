/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100252a0
 * Name: FUN_100252a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_100252a0(int param_1,int *param_2,undefined1 *param_3,int *param_4,size_t *param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  
  puVar2 = param_3;
  piVar9 = param_2;
  if ((param_2 != (int *)0x0) && (0xf < (int)param_3)) {
    uVar3 = (uint)param_3 & 0x8000000f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
    }
    if (uVar3 == 0) {
      if (0xf < (int)(param_3 + -0x10)) {
        iVar10 = 0x10 - (int)param_2;
        param_3 = (undefined1 *)((uint)(param_3 + -0x10) >> 4);
        param_2 = (int *)0xffffffef;
        piVar1 = piVar9;
        do {
          piVar8 = piVar1 + 4;
          FUN_1004e020(param_1 + 0x234,param_1 + 0x11a,piVar8,0x10,piVar8);
          uVar3 = 0;
          puVar11 = (undefined1 *)(iVar10 + (int)piVar8);
          pbVar4 = puVar11 + -0xf + (int)piVar9;
          do {
            if (puVar11 == puVar2) {
              bVar7 = pbVar4[(int)param_2];
            }
            else {
              bVar7 = *(byte *)((int)piVar1 + uVar3 + 0x20);
            }
            pbVar4[-1] = pbVar4[-1] ^ bVar7;
            if (puVar11 == puVar2) {
              bVar7 = *(byte *)(uVar3 + 1 + (int)piVar9);
            }
            else {
              bVar7 = *(byte *)((int)piVar1 + uVar3 + 0x21);
            }
            *pbVar4 = *pbVar4 ^ bVar7;
            if (puVar11 == puVar2) {
              bVar7 = *(byte *)(uVar3 + 2 + (int)piVar9);
            }
            else {
              bVar7 = *(byte *)((int)piVar1 + uVar3 + 0x22);
            }
            pbVar4[1] = pbVar4[1] ^ bVar7;
            if (puVar11 == puVar2) {
              bVar7 = *(byte *)(uVar3 + 3 + (int)piVar9);
            }
            else {
              bVar7 = *(byte *)((int)piVar1 + uVar3 + 0x23);
            }
            pbVar4[2] = pbVar4[2] ^ bVar7;
            uVar3 = uVar3 + 4;
            pbVar4 = pbVar4 + 4;
          } while (uVar3 < 0x10);
          param_2 = (int *)((int)param_2 + -0x10);
          param_3 = (undefined1 *)((int)param_3 - 1);
          piVar1 = piVar8;
        } while (param_3 != (undefined1 *)0x0);
      }
      FUN_1004e020(param_1 + 0x234,param_1 + 0x11a,piVar9,0x10,piVar9);
      iVar10 = *piVar9;
      uVar3 = (uint)(*(byte *)((int)piVar9 + 5) & 0xf);
      *param_5 = (size_t)(puVar2 + (-6 - uVar3));
      FUN_1001fce0(piVar9 + 1,puVar2 + -4);
      if (iVar10 == 0) {
        if (piVar9 != param_4) {
          uVar6 = *param_5;
          piVar9 = (int *)(uVar3 + 6 + (int)piVar9);
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *param_4 = *piVar9;
            piVar9 = piVar9 + 1;
            param_4 = param_4 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(char *)param_4 = (char)*piVar9;
            piVar9 = (int *)((int)piVar9 + 1);
            param_4 = (int *)((int)param_4 + 1);
          }
          return 1;
        }
        _memmove(param_4,(undefined1 *)(uVar3 + 6 + (int)piVar9),*param_5);
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


/* END FUNCTION 0x100252a0 */

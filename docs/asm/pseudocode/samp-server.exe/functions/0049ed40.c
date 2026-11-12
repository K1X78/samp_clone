/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049ed40
 * Name: FUN_0049ed40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0049ed40(void *this,byte *param_1)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  bool bVar8;
  
  FUN_00468d20((char *)param_1);
  piVar1 = (int *)((int)this + 130000);
  iVar5 = 0;
  if (0 < *piVar1) {
    piVar6 = (int *)((int)this + 0x1dc90);
    do {
      if ((*piVar6 != 0) && (pbVar3 = param_1, pbVar7 = this, *param_1 == *(byte *)this)) {
        do {
          bVar2 = *pbVar3;
          bVar8 = bVar2 < *pbVar7;
          if (bVar2 != *pbVar7) {
LAB_0049eda4:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0049eda9;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar8 = bVar2 < pbVar7[1];
          if (bVar2 != pbVar7[1]) goto LAB_0049eda4;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_0049eda9:
        if (iVar4 == 0) {
          return iVar5;
        }
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
      this = (void *)((int)this + 0x3d);
    } while (iVar5 < *piVar1);
  }
  return -1;
}


/* END FUNCTION 0x0049ed40 */

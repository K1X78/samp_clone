/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044da70
 * Name: FUN_0044da70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0044da70(void *this,byte *param_1,int param_2,char param_3)

{
  byte bVar1;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar2;
  
  if ((0 < param_2) && (in_EAX = *(int *)((int)this + 8) + param_2, (int)in_EAX <= *(int *)this)) {
    uVar3 = param_2 + 7 >> 3;
    pbVar6 = param_1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6 = pbVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar6 = 0;
      pbVar6 = pbVar6 + 1;
    }
    uVar4 = *(uint *)((int)this + 8) & 7;
    do {
      bVar1 = *(char *)((*(int *)((int)this + 8) >> 3) + *(int *)((int)this + 0xc)) << (sbyte)uVar4
              | *param_1;
      iVar2 = CONCAT31((int3)((uint)*(int *)((int)this + 0xc) >> 8),bVar1);
      *param_1 = bVar1;
      if ((uVar4 != 0) && ((int)(8 - uVar4) < param_2)) {
        *param_1 = *(byte *)((*(int *)((int)this + 8) >> 3) + 1 + *(int *)((int)this + 0xc)) >>
                   ((byte)(8 - uVar4) & 0x1f) | bVar1;
      }
      iVar5 = param_2 + -8;
      if (iVar5 < 0) {
        if (param_3 != '\0') {
          *param_1 = *param_1 >> (-(char)iVar5 & 0x1fU);
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2;
        iVar2 = param_2;
      }
      else {
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + 8;
      }
      param_1 = param_1 + 1;
      param_2 = iVar5;
    } while (0 < iVar5);
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


/* END FUNCTION 0x0044da70 */

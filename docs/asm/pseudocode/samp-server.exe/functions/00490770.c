/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00490770
 * Name: FUN_00490770
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_00490770(void *this,SOCKET param_1,undefined4 *param_2,sockaddr *param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  ushort uVar10;
  int *piVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *local_408;
  void *local_404;
  byte local_400 [1024];
  
  pcVar6 = *(char **)((int)this + 4);
  local_408 = *(char **)pcVar6;
  uVar10 = 0;
  local_404 = this;
  while (local_408 != pcVar6) {
    if ((*(byte *)(*(int *)(local_408 + 0x28) + 4) & 4) != 0) {
      uVar10 = uVar10 + 1;
    }
    FUN_00490340((int *)&local_408);
  }
  pcVar6 = _malloc((uint)uVar10 * 0x3e + 0xd);
  *(undefined4 *)pcVar6 = *param_2;
  *(undefined4 *)(pcVar6 + 4) = param_2[1];
  *(undefined2 *)(pcVar6 + 8) = *(undefined2 *)(param_2 + 2);
  pcVar6[10] = *(char *)((int)param_2 + 10);
  *(ushort *)(pcVar6 + 0xb) = uVar10;
  piVar11 = (int *)**(int **)((int)this + 4);
  pbVar12 = (byte *)(pcVar6 + 0xd);
  local_408 = pcVar6;
  if (piVar11 != *(int **)((int)this + 4)) {
    do {
      puVar2 = (undefined4 *)piVar11[10];
      if ((*(byte *)(puVar2 + 1) & 4) == 0) goto LAB_004908e0;
      if ((uint)piVar11[9] < 0x10) {
        pbVar13 = (byte *)(piVar11 + 4);
      }
      else {
        pbVar13 = (byte *)piVar11[4];
      }
      switch(*puVar2) {
      case 0:
        _sprintf((char *)local_400,"%f",(double)*(float *)puVar2[2]);
        break;
      case 1:
        goto LAB_00490855;
      case 2:
LAB_00490855:
        _sprintf((char *)local_400,"%d");
        break;
      case 3:
        pbVar8 = (byte *)puVar2[2];
        pbVar7 = local_400;
        do {
          bVar5 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          *pbVar7 = bVar5;
          pbVar7 = pbVar7 + 1;
        } while (bVar5 != 0);
      }
      pbVar7 = pbVar13;
      do {
        bVar5 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar5 != 0);
      bVar5 = (char)pbVar7 - ((char)pbVar13 + '\x01');
      *pbVar12 = bVar5;
      pbVar12 = pbVar12 + 1;
      pbVar7 = pbVar12;
      for (uVar9 = (uint)(bVar5 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pbVar7 = *(int *)pbVar13;
        pbVar13 = pbVar13 + 4;
        pbVar7 = pbVar7 + 4;
      }
      pbVar12 = pbVar12 + bVar5;
      pbVar8 = local_400;
      for (uVar9 = bVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pbVar7 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        pbVar7 = pbVar7 + 1;
      }
      do {
        bVar5 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar5 != 0);
      bVar5 = (char)pbVar8 - ((char)local_400 + '\x01');
      *pbVar12 = bVar5;
      pbVar13 = local_400;
      pbVar7 = pbVar12 + 1;
      for (uVar9 = (uint)(bVar5 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pbVar7 = *(undefined4 *)pbVar13;
        pbVar13 = pbVar13 + 4;
        pbVar7 = pbVar7 + 4;
      }
      for (uVar9 = bVar5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pbVar7 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        pbVar7 = pbVar7 + 1;
      }
      pbVar12 = pbVar12 + 1 + bVar5;
      pcVar6 = local_408;
      this = local_404;
LAB_004908e0:
      if (*(char *)((int)piVar11 + 0x2d) == '\0') {
        piVar3 = (int *)piVar11[2];
        if (*(char *)((int)piVar3 + 0x2d) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x2d);
          piVar11 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x2d);
            piVar11 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar11[1] + 0x2d);
          piVar4 = (int *)piVar11[1];
          piVar3 = piVar11;
          while ((piVar11 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar11[2]))) {
            cVar1 = *(char *)(piVar11[1] + 0x2d);
            piVar4 = (int *)piVar11[1];
            piVar3 = piVar11;
          }
        }
      }
    } while (piVar11 != *(int **)((int)this + 4));
  }
  sendto(param_1,pcVar6,(int)pbVar12 - (int)pcVar6,0,param_3,param_4);
  _free(pcVar6);
  return;
}


/* END FUNCTION 0x00490770 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10030680
 * Name: FUN_10030680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_10030680(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  byte local_2e32;
  char local_2e31;
  uint local_2e30;
  undefined4 local_2e2c;
  undefined4 local_2e28;
  char *local_2e24;
  undefined1 local_2e20 [276];
  undefined1 local_2d0c [9];
  int local_2d03 [2876];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101149b4;
  local_c = ExceptionList;
  uStack_10 = 0x1003069f;
  uVar6 = 0;
  ExceptionList = &local_c;
  FUN_1001f280(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  pcVar3 = (char *)FUN_1002fb20(local_2e20,param_1,param_2,1);
  local_2e24 = pcVar3;
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) goto LAB_100309b0;
  FUN_1001f470(&local_2e31,8,1);
  FUN_10008110(&local_2e2c);
  if ((char)local_2e2c == '\0') {
    local_2e28 = 0xffffffff;
  }
  else {
    FUN_1001f470(&local_2e28,0x20,1);
  }
  cVar2 = FUN_1001f470(&local_2e32,8,1);
  if (cVar2 == '\0') goto LAB_100309b0;
  uVar9 = 0;
  _eh_vector_constructor_iterator_(local_2d0c,0x2d,0x100,FUN_1002ee70,&LAB_1002ee80);
  uVar10 = (undefined2)((uint)uVar9 >> 0x10);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_2e32 != 0) {
    do {
      cVar2 = FUN_1002ed60(local_2e20);
      uVar10 = (undefined2)((uint)uVar9 >> 0x10);
      if (cVar2 == '\0') goto LAB_100309a3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_2e32);
  }
  if (local_2e31 == '\0') {
    if ((char)local_2e2c != '\0') {
      uVar11 = 0x1003;
      iVar4 = FUN_10028b50(local_2e28);
      if (iVar4 != 0) {
LAB_100307e3:
        if (pcVar3[100] == '\0') goto LAB_100308ca;
        cVar2 = FUN_1002f020(iVar4,*(undefined4 *)(param_2 + 2),
                             CONCAT22(uVar11,*(undefined2 *)(param_2 + 6)),
                             *(undefined4 *)(pcVar3 + 0x8c));
        bVar8 = cVar2 == '\0';
        goto LAB_100308af;
      }
    }
  }
  else if (local_2e31 == '\x01') {
    if ((char)local_2e2c != '\0') {
      uVar11 = 0x1003;
      iVar4 = FUN_10028b50(local_2e28);
      if (iVar4 != 0) goto LAB_100307e3;
    }
    iVar4 = FUN_1002f3e0(pcVar3,*(undefined4 *)(param_2 + 2),
                         CONCAT22(uVar10,*(undefined2 *)(param_2 + 6)),local_2e2c,local_2e28);
    if (iVar4 != 0) goto LAB_100308ca;
  }
  else {
    iVar4 = FUN_1002f3e0(pcVar3,*(undefined4 *)(param_2 + 2),
                         CONCAT22(uVar10,*(undefined2 *)(param_2 + 6)),local_2e2c,local_2e28);
    bVar8 = iVar4 == 0;
LAB_100308af:
    if (!bVar8) {
LAB_100308ca:
      local_2e30 = 0;
      if (local_2e32 != 0) {
        piVar7 = local_2d03;
        do {
          iVar4 = FUN_10027ab0(piVar7 + 1);
          if ((((iVar4 != -1) && (iVar4 != *(int *)(pcVar3 + 0x90))) &&
              (iVar4 != *(int *)(pcVar3 + 0x94))) && (iVar4 != *(int *)(pcVar3 + 0x8c))) {
            if (*(char *)((int)piVar7 + -9) == '\0') {
              iVar1 = *piVar7;
              iVar5 = FUN_10027b30(iVar4);
              pcVar3 = local_2e24;
              if (iVar1 == iVar5) {
                if (iVar1 == 0) {
                  FUN_10027a20(iVar4,piVar7[-2]);
                  pcVar3 = local_2e24;
                }
                else if (iVar1 == 2) {
                  FUN_10027a80(iVar4,piVar7[-2],piVar7[-1]);
                  pcVar3 = local_2e24;
                }
                else {
                  FUN_10027a50(iVar4,piVar7[-1]);
                  pcVar3 = local_2e24;
                }
              }
            }
            else {
              FUN_10026ed0();
            }
          }
          local_2e30 = local_2e30 + 1;
          piVar7 = (int *)((int)piVar7 + 0x2d);
        } while (local_2e30 < local_2e32);
      }
    }
  }
LAB_100309a3:
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(local_2d0c,0x2d,0x100,&LAB_1002ee80);
LAB_100309b0:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10030680 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100302f0
 * Name: FUN_100302f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_100302f0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  byte local_4767;
  byte local_4766;
  byte local_4765 [5];
  int local_4760;
  uint local_475c;
  undefined1 local_4758 [36];
  undefined1 local_4734 [276];
  undefined1 local_4620 [276];
  undefined1 local_450c [1024];
  undefined1 local_410c [8];
  int local_4104 [766];
  undefined1 local_350c [1024];
  undefined1 local_310c [13];
  int local_30ff [3131];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114983;
  local_c = ExceptionList;
  uStack_10 = 0x1003030f;
  iVar4 = 0;
  ExceptionList = &local_c;
  FUN_1001f280(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  local_4760 = FUN_1002fb20(local_4734,param_1,param_2,0);
  if ((local_4760 != 0) && (*(char *)(local_4760 + 1) != '\0')) {
    FUN_1001f1f0();
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar1 = FUN_1001f470(&local_4766,8,1);
    if (cVar1 != '\0') {
      uVar6 = 0;
      if (local_4766 != 0) {
        puVar7 = local_350c;
        do {
          FUN_1001f470(puVar7,0x20,1);
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 4;
        } while (uVar6 < local_4766);
      }
      cVar1 = FUN_1001f470(&local_4767,8,1);
      if (cVar1 != '\0') {
        _eh_vector_constructor_iterator_(local_310c,0x31,0x100,FUN_1002ee50,&LAB_1002ee60);
        uVar6 = 0;
        local_4 = CONCAT31(local_4._1_3_,2);
        if (local_4767 != 0) {
          do {
            cVar1 = FUN_1002ec90(local_4734);
            if (cVar1 == '\0') goto LAB_10030627;
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_4767);
        }
        cVar1 = FUN_1001f470(local_4765,8,1);
        if (cVar1 != '\0') {
          uVar6 = 0;
          if (local_4765[0] != 0) {
            puVar7 = local_450c;
            do {
              FUN_1001f470(puVar7,0x20,1);
              uVar6 = uVar6 + 1;
              puVar7 = puVar7 + 4;
            } while (uVar6 < local_4765[0]);
          }
          _eh_vector_constructor_iterator_(local_410c,0xc,0x100,&LAB_10026f40,&DAT_10026f50);
          local_4._0_1_ = 3;
          local_475c = 0;
          if (local_4767 != 0) {
            piVar5 = local_4104;
            piVar8 = local_30ff;
            do {
              iVar2 = FUN_10027ab0(piVar8 + 1);
              piVar5[-2] = iVar2;
              if ((iVar2 != -1) &&
                 (piVar3 = (int *)FUN_10026f80(), *piVar8 == *(int *)(*piVar3 + 0x20 + iVar2 * 0x24)
                 )) {
                *piVar5 = piVar8[-1];
                piVar5[-1] = (int)piVar8 + -0xd;
                iVar4 = iVar4 + 1;
                piVar5 = piVar5 + 3;
              }
              local_475c = local_475c + 1;
              piVar8 = (int *)((int)piVar8 + 0x31);
            } while (local_475c < local_4767);
          }
          FUN_10029cd0();
          local_4._0_1_ = 4;
          FUN_10029d50(local_350c,local_4766,local_410c,iVar4,local_450c,local_4765[0],local_4758);
          local_4765[1] = 0x59;
          FUN_1001faa0(local_4765 + 1,8,1);
          FUN_10055000(local_4758,local_4620);
          (**(code **)(*param_1 + 0x30))
                    (local_4620,1,9,0,*(undefined4 *)(param_2 + 2),*(undefined2 *)(param_2 + 6),0);
          local_4._0_1_ = 3;
          FUN_10029cf0();
          local_4 = CONCAT31(local_4._1_3_,2);
          _eh_vector_destructor_iterator_(local_410c,0xc,0x100,&DAT_10026f50);
        }
LAB_10030627:
        local_4 = CONCAT31(local_4._1_3_,1);
        _eh_vector_destructor_iterator_(local_310c,0x31,0x100,&LAB_1002ee60);
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_1001f390();
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100302f0 */

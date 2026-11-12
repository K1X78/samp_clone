/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069d20
 * Name: FUN_10069d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10069d20(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int unaff_EBP;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int local_2c;
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  int iStack_10;
  
  iVar2 = FUN_100f9324();
  iVar3 = FUN_100f9324();
  iVar10 = *(int *)((int)param_1 + 0x12f) + *(int *)((int)param_1 + 299) * 2;
  if (_DAT_00c17044 < iVar10 + iVar3) {
    iVar3 = _DAT_00c17044 - iVar10;
  }
  local_14 = iVar2 + 0x1e;
  local_18 = iVar3 + 0x3c;
  if (((*(int *)((int)param_1 + 0x137) != 0) && (*(int *)((int)param_1 + 0x13b) != 0)) &&
     (*param_1 != 0)) {
    (**(code **)(**(int **)((int)param_1 + 0x143) + 0x20))(*(int **)((int)param_1 + 0x143),0x10);
    piVar7 = param_1 + 1;
    local_2c = 5;
    local_20 = iVar3;
    do {
      piVar4 = piVar7;
      do {
        iVar10 = *piVar4;
        piVar4 = (int *)((int)piVar4 + 1);
      } while ((char)iVar10 != '\0');
      if (piVar4 == (int *)((int)piVar7 + 1)) {
LAB_10069ed0:
        piVar4 = piVar7;
        do {
          iVar10 = *piVar4;
          piVar4 = (int *)((int)piVar4 + 1);
        } while ((char)iVar10 != '\0');
        if (piVar4 == (int *)((int)piVar7 + 1)) {
          pcVar5 = (char *)((int)piVar7 + 0x19);
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          if (pcVar5 != (char *)((int)piVar7 + 0x1a)) {
            uVar6 = 0xffffffff;
            (**(code **)(**(int **)((int)param_1 + 0x137) + 0x38))
                      (*(int **)((int)param_1 + 0x137),0,(char *)((int)piVar7 + 0x19),0xffffffff,
                       &local_18,0x400,0xff000000);
            FUN_10069680((char *)((int)piVar7 + 0x19),
                         (local_18 - iStack_10) + iVar3 + *(int *)((int)param_1 + 299),iVar2,
                         local_20,iStack_1c,*(undefined4 *)((int)piVar7 + 0x36),0);
            cVar1 = *(char *)((int)piVar7 + 0x3a);
            iVar8 = iVar3 + 3 + *(int *)((int)param_1 + 299);
            iVar10 = iVar8 + 0x23;
            if (cVar1 == -0x38) {
              uVar6 = 0xff1111aa;
            }
            else if (cVar1 == -0x37) {
              uVar6 = 0xffaa1111;
            }
            iVar9 = iVar2;
            iVar11 = iStack_1c;
            uVar12 = FUN_10069890(cVar1);
            FUN_10069780(uVar12,iVar8,iVar9,iVar10,iVar11,uVar6);
          }
        }
      }
      else {
        pcVar5 = (char *)((int)piVar7 + 0x19);
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 == (char *)((int)piVar7 + 0x1a)) goto LAB_10069ed0;
        (**(code **)(**(int **)((int)param_1 + 0x137) + 0x38))
                  (*(int **)((int)param_1 + 0x137),0,piVar7,0xffffffff,&local_18,0x400,0xffffffff);
        FUN_10069680(piVar7,(local_18 - iStack_10) + iVar3 + *(int *)((int)param_1 + 299),iVar2,
                     local_20,iStack_1c,*(undefined4 *)((int)piVar7 + 0x32),0);
        iVar10 = iVar3 + 3 + *(int *)((int)param_1 + 299);
        uVar12 = 0xffffffff;
        iVar3 = iVar10;
        iVar8 = iVar2;
        iVar9 = iVar10 + 0x23;
        iVar11 = iStack_1c;
        uVar6 = FUN_10069890(*(char *)((int)piVar7 + 0x3a));
        FUN_10069780(uVar6,iVar3,iVar8,iVar9,iVar11,uVar12);
        FUN_10069680((char *)((int)piVar7 + 0x19),iVar10 + *(int *)((int)param_1 + 0x12f),iVar2,
                     iVar10 + 0x23 + *(int *)((int)param_1 + 0x12f),iStack_1c,
                     *(undefined4 *)((int)piVar7 + 0x36),0);
        iVar3 = unaff_EBP;
      }
      iVar2 = *(int *)((int)param_1 + 0x133) + 5 + iVar2;
      iStack_1c = iStack_1c + 5 + *(int *)((int)param_1 + 0x133);
      local_20 = iVar3 + 0x3c;
      piVar7 = (int *)((int)piVar7 + 0x3b);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
    (**(code **)(**(int **)((int)param_1 + 0x143) + 0x2c))(*(int **)((int)param_1 + 0x143));
  }
  return;
}


/* END FUNCTION 0x10069d20 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eb230
 * Name: FUN_100eb230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100eb230(undefined4 param_1,int *param_2,int *param_3,int param_4)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FILE *_File;
  char *pcVar7;
  int iVar8;
  undefined4 local_114;
  int local_110;
  undefined1 auStack_104 [4];
  char acStack_100 [256];
  
  bVar2 = false;
  local_114 = 1;
  if (((char *)*param_2 == (char *)0x0) || (bVar4 = true, *(char *)*param_2 == '\0')) {
    bVar4 = false;
  }
  bVar3 = false;
  iVar8 = 0;
  bVar5 = false;
  local_110 = 0;
  if (param_4 == 0) {
    iVar6 = FUN_100eae90(&DAT_10128704);
    if (iVar6 == 0) {
      return 1;
    }
    param_4 = FUN_100cd220("%s%s%s",iVar6,&DAT_101183ec,"_netrc");
    (*(code *)PTR__free_101554bc)(iVar6);
    if (param_4 == 0) {
      return 0xffffffff;
    }
    bVar2 = true;
  }
  _File = (FILE *)FUN_100f9cc9(param_4,&DAT_10125254);
  if (bVar2) {
    (*(code *)PTR__free_101554bc)(param_4);
  }
  if (_File != (FILE *)0x0) {
    while (pcVar7 = _fgets(acStack_100,0x100,_File), pcVar7 != (char *)0x0) {
      pcVar7 = (char *)FUN_100ee790(acStack_100,&DAT_101286f8,auStack_104);
      if ((pcVar7 != (char *)0x0) && (*pcVar7 != '#')) {
        while (pcVar7 != (char *)0x0) {
          pcVar1 = (char *)*param_2;
          if ((((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && ((char *)*param_3 != (char *)0x0))
             && (*(char *)*param_3 != '\0')) goto LAB_100eb4d3;
          if (iVar8 == 0) {
            iVar6 = FUN_100de830("machine",pcVar7);
            if (iVar6 == 0) {
              iVar6 = FUN_100de830("default",pcVar7);
              if (iVar6 != 0) goto LAB_100eb4a3;
            }
            else {
              iVar8 = 1;
            }
          }
          else if (iVar8 == 1) {
            iVar8 = FUN_100de830(param_1,pcVar7);
            if (iVar8 == 0) {
              iVar8 = 0;
            }
            else {
LAB_100eb4a3:
              iVar8 = 2;
              local_114 = 0;
            }
          }
          else if (iVar8 == 2) {
            if (bVar3) {
              if (bVar4) {
                local_110 = FUN_100de830(pcVar1,pcVar7);
                bVar3 = false;
              }
              else {
                (*(code *)PTR__free_101554bc)(pcVar1);
                iVar6 = (*(code *)PTR___strdup_101554c4)(pcVar7);
                *param_2 = iVar6;
                if (iVar6 == 0) {
LAB_100eb4cb:
                  local_114 = 0xffffffff;
                  goto LAB_100eb4d3;
                }
                bVar3 = false;
              }
            }
            else if (bVar5) {
              if ((local_110 != 0) || (!bVar4)) {
                (*(code *)PTR__free_101554bc)(*param_3);
                iVar6 = (*(code *)PTR___strdup_101554c4)(pcVar7);
                *param_3 = iVar6;
                if (iVar6 == 0) goto LAB_100eb4cb;
              }
              bVar5 = false;
            }
            else {
              iVar6 = FUN_100de830("login",pcVar7);
              if (iVar6 == 0) {
                iVar6 = FUN_100de830("password",pcVar7);
                if (iVar6 == 0) {
                  iVar6 = FUN_100de830("machine",pcVar7);
                  if (iVar6 != 0) {
                    iVar8 = 1;
                    local_110 = 0;
                  }
                }
                else {
                  bVar5 = true;
                }
              }
              else {
                bVar3 = true;
              }
            }
          }
          pcVar7 = (char *)FUN_100ee790(0,&DAT_101286f8,auStack_104);
        }
      }
    }
LAB_100eb4d3:
    _fclose(_File);
  }
  return local_114;
}


/* END FUNCTION 0x100eb230 */

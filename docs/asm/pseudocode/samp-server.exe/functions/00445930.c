/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00445930
 * Name: FUN_00445930
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00445930(int param_1,int *param_2)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int local_4;
  
  iVar1 = *param_2;
  local_4 = param_1;
  uVar2 = FUN_00442130();
  if (uVar2 == 0) {
    if (param_1 == 0) {
      if (0 < *(int *)(iVar1 + 4)) {
        iVar3 = 0;
        do {
          if (iVar3 != 1) {
            FUN_00435b40(iVar3);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(iVar1 + 4));
        return;
      }
    }
    else {
      if (*(int *)(in_EAX + 4) == 0) {
        iVar3 = FUN_00416450(iVar1);
        if (-1 < iVar3) {
          FUN_00435b40(iVar3);
          return;
        }
        iVar3 = FUN_00416430();
      }
      else {
        iVar3 = FUN_0041ad60(param_2,&local_4);
        if (iVar3 < 0) {
          return;
        }
        iVar3 = FUN_00416430();
      }
      if (iVar3 != 0) {
        iVar3 = FUN_00442730();
        FUN_00408130(iVar1);
        if (iVar3 != 0) {
          FUN_00435bb0(iVar3);
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x00445930 */

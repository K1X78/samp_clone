/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a9911
 * Name: BuildCatchObject
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __fastcall BuildCatchObject(byte *param_1,int *param_2,int param_3,uint *param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  void *pvVar3;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  size_t _Size;
  
  if (param_4[1] == 0) {
    return;
  }
  if (*(char *)(param_4[1] + 8) == '\0') {
    return;
  }
  if ((param_4[2] == 0) && ((*param_4 & 0x80000000) == 0)) {
    return;
  }
  if (-1 < (int)*param_4) {
    param_2 = (int *)(param_4[2] + 0xc + (int)param_2);
  }
  pvVar3 = *(void **)(param_3 + 0x18);
  if ((*param_4 & 8) == 0) {
    if ((*param_1 & 1) == 0) {
      if (*(int *)(param_1 + 0x18) == 0) {
        bVar1 = _ValidateRead(pvVar3,1);
        if ((CONCAT31(extraout_var_03,bVar1) != 0) &&
           (bVar1 = _ValidateWrite(param_2,1), CONCAT31(extraout_var_04,bVar1) != 0)) {
          _Size = *(size_t *)(param_1 + 0x14);
          pvVar3 = (void *)AdjustPointer((int *)(param_1 + 8));
          _memmove(param_2,pvVar3,_Size);
          return;
        }
      }
      else {
        bVar1 = _ValidateRead(pvVar3,1);
        if (((CONCAT31(extraout_var_05,bVar1) != 0) &&
            (bVar1 = _ValidateWrite(param_2,1), CONCAT31(extraout_var_06,bVar1) != 0)) &&
           (bVar1 = _ValidateExecute(*(FARPROC *)(param_1 + 0x18)),
           CONCAT31(extraout_var_07,bVar1) != 0)) {
          if ((*param_1 & 4) != 0) {
            AdjustPointer((int *)(param_1 + 8));
            FID_conflict__CallMemberFunction1(param_2,*(undefined **)(param_1 + 0x18));
            return;
          }
          AdjustPointer((int *)(param_1 + 8));
          FID_conflict__CallMemberFunction1(param_2,*(undefined **)(param_1 + 0x18));
          return;
        }
      }
    }
    else {
      bVar1 = _ValidateRead(pvVar3,1);
      if ((CONCAT31(extraout_var_01,bVar1) != 0) &&
         (bVar1 = _ValidateWrite(param_2,1), CONCAT31(extraout_var_02,bVar1) != 0)) {
        _memmove(param_2,*(void **)(param_3 + 0x18),*(size_t *)(param_1 + 0x14));
        if (*(int *)(param_1 + 0x14) != 4) {
          return;
        }
        if (*param_2 == 0) {
          return;
        }
        goto LAB_004a998a;
      }
    }
  }
  else {
    bVar1 = _ValidateRead(pvVar3,1);
    if ((CONCAT31(extraout_var,bVar1) != 0) &&
       (bVar1 = _ValidateWrite(param_2,1), CONCAT31(extraout_var_00,bVar1) != 0)) {
      *param_2 = *(int *)(param_3 + 0x18);
LAB_004a998a:
      iVar2 = AdjustPointer((int *)(param_1 + 8));
      *param_2 = iVar2;
      return;
    }
  }
  _inconsistency();
  return;
}


/* END FUNCTION 0x004a9911 */

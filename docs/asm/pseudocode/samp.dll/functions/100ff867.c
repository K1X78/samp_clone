/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ff867
 * Name: BuildCatchObject
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __fastcall BuildCatchObject(byte *param_1,int *param_2,int param_3,uint *param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
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
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  if ((*param_4 & 8) == 0) {
    if ((*param_1 & 1) == 0) {
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar1 = _ValidateRead(uVar2,1);
        if ((iVar1 != 0) && (iVar1 = _ValidateWrite(param_2,1), iVar1 != 0)) {
          _Size = *(size_t *)(param_1 + 0x14);
          _Src = (void *)AdjustPointer();
          _memmove(param_2,_Src,_Size);
          return;
        }
      }
      else {
        iVar1 = _ValidateRead(uVar2,1);
        if (((iVar1 != 0) && (iVar1 = _ValidateWrite(param_2,1), iVar1 != 0)) &&
           (iVar1 = _ValidateExecute(*(undefined4 *)(param_1 + 0x18)), iVar1 != 0)) {
          if ((*param_1 & 4) != 0) {
            uVar2 = AdjustPointer(1);
            FID_conflict__CallMemberFunction1(param_2,*(undefined4 *)(param_1 + 0x18),uVar2);
            return;
          }
          uVar2 = AdjustPointer();
          FID_conflict__CallMemberFunction1(param_2,*(undefined4 *)(param_1 + 0x18),uVar2);
          return;
        }
      }
    }
    else {
      iVar1 = _ValidateRead(uVar2,1);
      if ((iVar1 != 0) && (iVar1 = _ValidateWrite(param_2,1), iVar1 != 0)) {
        _memmove(param_2,*(void **)(param_3 + 0x18),*(size_t *)(param_1 + 0x14));
        if (*(int *)(param_1 + 0x14) != 4) {
          return;
        }
        if (*param_2 == 0) {
          return;
        }
        goto LAB_100ff8e0;
      }
    }
  }
  else {
    iVar1 = _ValidateRead(uVar2,1);
    if ((iVar1 != 0) && (iVar1 = _ValidateWrite(param_2,1), iVar1 != 0)) {
      *param_2 = *(int *)(param_3 + 0x18);
LAB_100ff8e0:
      iVar1 = AdjustPointer();
      *param_2 = iVar1;
      return;
    }
  }
  _inconsistency();
  return;
}


/* END FUNCTION 0x100ff867 */

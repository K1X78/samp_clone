/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100437d0
 * Name: FUN_100437d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_100437d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  int local_c;
  double local_8;
  
  if (0.0 < *(double *)(param_1 + 0x6e2)) {
    local_8 = *(double *)(param_1 + 0x452) / *(double *)(param_1 + 0x6e2);
    fVar5 = (float10)FUN_10043710();
    fVar6 = (float10)local_8;
    local_8 = (double)CONCAT44(local_8._4_4_,(float)local_8);
    if (fVar5 < fVar6) {
      return;
    }
  }
  cVar2 = FUN_10056450();
  if (cVar2 == '\0') {
    local_c = *param_5 + 7 >> 3;
  }
  else {
    iVar3 = *param_5 + 7 >> 3;
    local_c = iVar3;
    FUN_10056790(param_5[3],iVar3,param_5[3],&local_c);
    uVar1 = *(uint *)(param_1 + 0x38b);
    uVar4 = (local_c - iVar3) * 8;
    *(uint *)(param_1 + 0x38b) = uVar1 + uVar4;
    *(uint *)(param_1 + 0x38f) =
         *(int *)(param_1 + 0x38f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar1,uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x393);
  uVar1 = local_c * 8;
  *(int *)(param_1 + 0x387) = *(int *)(param_1 + 0x387) + 1;
  *(uint *)(param_1 + 0x393) = uVar4 + uVar1;
  *(uint *)(param_1 + 0x397) =
       *(int *)(param_1 + 0x397) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar4,uVar1);
  FUN_10053570(param_2,param_5[3],local_c,param_3,param_4);
  return;
}


/* END FUNCTION 0x100437d0 */

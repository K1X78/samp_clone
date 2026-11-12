/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b070
 * Name: FUN_0045b070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_0045b070(void *this,SOCKET param_1,undefined4 param_2,u_short param_3,int *param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  uint local_c;
  double local_8;
  
  if (0.0 < *(double *)((int)this + 0x718)) {
    local_8 = *(double *)((int)this + 0x470) / *(double *)((int)this + 0x718);
    fVar4 = FUN_0045afe0();
    fVar5 = (float10)local_8;
    local_8 = (double)CONCAT44(local_8._4_4_,(float)local_8);
    if (fVar4 < fVar5) {
      return;
    }
  }
  cVar2 = FUN_00463810((int)this + 0x484);
  if (cVar2 == '\0') {
    local_c = *param_4 + 7 >> 3;
  }
  else {
    uVar3 = *param_4 + 7 >> 3;
    local_c = uVar3;
    FUN_00463b50((void *)((int)this + 0x484),(byte *)param_4[3],uVar3,(byte *)param_4[3],
                 (int *)&local_c);
    uVar1 = *(uint *)((int)this + 0x3a0);
    uVar3 = (local_c - uVar3) * 8;
    *(uint *)((int)this + 0x3a0) = uVar1 + uVar3;
    *(uint *)((int)this + 0x3a4) =
         *(int *)((int)this + 0x3a4) + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar1,uVar3);
  }
  uVar3 = *(uint *)((int)this + 0x3a8);
  uVar1 = local_c * 8;
  *(int *)((int)this + 0x398) = *(int *)((int)this + 0x398) + 1;
  *(uint *)((int)this + 0x3a8) = uVar3 + uVar1;
  *(uint *)((int)this + 0x3ac) =
       *(int *)((int)this + 0x3ac) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar3,uVar1);
  FUN_00462c60(param_1,(char *)param_4[3],local_c,param_2,param_3);
  return;
}


/* END FUNCTION 0x0045b070 */

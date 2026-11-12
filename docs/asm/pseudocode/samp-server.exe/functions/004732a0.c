/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004732a0
 * Name: FUN_004732a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004732a0(int *param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float local_8;
  float *local_4;
  
  if (*(int *)(DAT_004fc438 + 0xc) == 0) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 4) < 2000) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 0xc) + 0x3f54 + (uint)*(ushort *)(param_2 + 4) * 4),
     iVar1 != 0)) {
    FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_4);
    if ((*(float *)(iVar1 + 0x1c) == 0.0) && (*(float *)(iVar1 + 0x20) == 0.0)) {
      *local_4 = *(float *)(iVar1 + 0x92);
      return 1;
    }
    fVar2 = (float10)fpatan(-(float10)*(float *)(iVar1 + 0x1c),(float10)*(float *)(iVar1 + 0x20));
    local_8 = (float)(fVar2 * (float10)57.295776);
    if ((float10)0.0 <= fVar2 * (float10)57.295776) {
      if (360.0 <= local_8) {
        local_8 = local_8 - 360.0;
      }
    }
    else {
      local_8 = local_8 + 360.0;
    }
    *local_4 = local_8;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x004732a0 */

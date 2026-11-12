/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00406f70
 * Name: FUN_00406f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00406f70(int *param_1,void *param_2)

{
  void *pvVar1;
  int local_4;
  
  pvVar1 = param_2;
  if (((-1 < *(int *)((int)param_2 + 0xc)) && (-1 < *(int *)((int)param_2 + 0x10))) &&
     (*(int *)((int)param_2 + 0x10) + *(int *)((int)param_2 + 0xc) <=
      *(int *)((int)param_2 + 0x14) * 4)) {
    FUN_00403100(param_1,*(int *)((int)param_2 + 4),&local_4);
    FUN_00403100(param_1,*(int *)((int)pvVar1 + 8),(int *)&param_2);
    _memmove((void *)(*(int *)((int)pvVar1 + 0xc) + local_4),param_2,*(size_t *)((int)pvVar1 + 0x10)
            );
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00406f70 */

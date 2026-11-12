/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00469bc0
 * Name: FUN_00469bc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * FUN_00469bc0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


/* END FUNCTION 0x00469bc0 */

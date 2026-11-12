/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00491cb0
 * Name: FUN_00491cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00491cb0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004919f0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
  _free(*(void **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  return;
}


/* END FUNCTION 0x00491cb0 */

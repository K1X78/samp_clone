/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004832c0
 * Name: FUN_004832c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004832c0(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_4;
  
  local_4 = param_1;
  puVar2 = (undefined4 *)FUN_004827f0(param_1,&local_4,(uint *)&stack0x00000004);
  piVar1 = (int *)*puVar2;
  if (piVar1 != *(int **)((int)param_1 + 4)) {
    FUN_00482540(piVar1[4]);
    if ((void *)piVar1[4] != (void *)0x0) {
      _free((void *)piVar1[4]);
      piVar1[4] = 0;
    }
    FUN_00482b20(param_1,(undefined4 *)&stack0x00000004,piVar1);
  }
  return;
}


/* END FUNCTION 0x004832c0 */

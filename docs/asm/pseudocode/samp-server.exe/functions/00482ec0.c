/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00482ec0
 * Name: FUN_00482ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00482ec0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *local_4;
  
  piVar2 = *(int **)((int)this + 4);
  local_4 = (int *)*piVar2;
  if (local_4 != piVar2) {
    do {
      piVar1 = local_4;
      if (*(int *)(local_4[4] + 0x10f) == param_1) {
        FUN_00482540(local_4[4]);
        if ((void *)piVar1[4] != (void *)0x0) {
          _free((void *)piVar1[4]);
          piVar1[4] = 0;
        }
        FUN_00482b20(this,&local_4,piVar1);
        piVar2 = *(int **)((int)this + 4);
        local_4 = (int *)*piVar2;
      }
      else {
        FUN_00482610((int *)&local_4);
      }
    } while (local_4 != piVar2);
  }
  return;
}


/* END FUNCTION 0x00482ec0 */

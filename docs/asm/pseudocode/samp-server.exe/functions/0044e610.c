/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044e610
 * Name: FUN_0044e610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0044e610(int param_1,int *param_2)

{
  int iVar1;
  int *this;
  int iVar2;
  
  this = param_2;
  iVar1 = param_1;
  if (*param_2 == 0) {
    FUN_0044e360(param_2,&param_1);
    return;
  }
  if (param_2[1] != 0) {
    param_2[2] = param_2[1];
  }
  iVar2 = 0;
  if (*(uint *)(*(int *)param_2[2] + 4) < *(uint *)(param_1 + 4)) {
    do {
      FUN_0045ba80(this);
      iVar2 = iVar2 + 1;
      if (iVar2 == *this) {
        if (this[1] != 0) {
          this[2] = *(int *)(this[1] + 4);
        }
        FUN_0045b670(this,&param_1);
        return;
      }
    } while (*(uint *)(*(int *)this[2] + 4) < *(uint *)(iVar1 + 4));
  }
  FUN_0044e360(this,&param_1);
  return;
}


/* END FUNCTION 0x0044e610 */

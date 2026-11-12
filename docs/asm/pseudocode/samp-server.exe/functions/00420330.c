/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00420330
 * Name: FUN_00420330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00420330(void *this,int param_1,int param_2)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int local_4;
  
  iVar1 = *in_EAX;
  puVar3 = (undefined4 *)in_EAX[3];
  local_4 = iVar1;
  if (0 < iVar1) {
    do {
      if (*(short *)(puVar3 + 4) == 0) {
        FUN_00415dc0();
      }
      else {
        iVar2 = FUN_0040eb70(*puVar3,this);
        FUN_0041c720();
        if (iVar2 != param_1) {
          FUN_00414e70(iVar2,0xf);
        }
      }
      if ((param_2 != 0) && (*(char *)(*(int *)this + 0x1e) == '\0')) {
        FUN_0040eb40(this,iVar1);
      }
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 5;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return iVar1;
}


/* END FUNCTION 0x00420330 */

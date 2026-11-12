/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000bc30
 * Name: FUN_1000bc30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1000bc30(int param_1,int *param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)(param_1 + 0x222);
  }
  if (*param_2 != 0) {
    uVar1 = FUN_100628a0(*(undefined4 *)((int)param_2 + 0xd),param_3,param_4);
    *(undefined4 *)((int)param_2 + 0xd) = uVar1;
    _fwrite(param_3,1,param_4,(FILE *)*param_2);
    iVar2 = *(int *)((int)param_2 + 5) + param_4;
    *(int *)((int)param_2 + 5) = iVar2;
    if (DAT_102ac9e8 != 0) {
      FUN_1006a720((char)param_2[1],*(undefined4 *)((int)param_2 + 0x11),1,iVar2,0,0xffffffff,0);
    }
  }
  return;
}


/* END FUNCTION 0x1000bc30 */

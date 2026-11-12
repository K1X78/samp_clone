/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000c760
 * Name: FUN_1000c760
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1000c760(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)((int)param_1 + 0x222);
  }
  if ((FILE *)*param_2 != (FILE *)0x0) {
    _fclose((FILE *)*param_2);
    *param_2 = 0;
    DeleteFileA((LPCSTR)((int)param_2 + 0x19));
  }
  if ((*(uint *)((int)param_2 + 0x15) < (uint)param_1[1]) &&
     (iVar1 = *(int *)(*param_1 + *(uint *)((int)param_2 + 0x15) * 4), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 6) = 1;
  }
  if (DAT_102ac9e8 != 0) {
    FUN_1006a720(*(undefined1 *)(param_2 + 1),*(undefined4 *)((int)param_2 + 0x11),3,
                 *(undefined4 *)((int)param_2 + 5),0,param_3,param_4);
  }
  *(undefined4 *)((int)param_1 + 0x213) = 2;
  return;
}


/* END FUNCTION 0x1000c760 */

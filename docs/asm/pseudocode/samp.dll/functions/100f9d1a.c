/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f9d1a
 * Name: FUN_100f9d1a
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */

void FUN_100f9d1a(void *param_1)

{
  void *pvVar1;
  int iVar2;
  _EXCEPTION_POINTERS *local_18;
  
  pvVar1 = (void *)(*DAT_102ace58)(DAT_10155bc8);
  if (pvVar1 == (void *)0x0) {
    iVar2 = (*DAT_102ace5c)(DAT_10155bc8,param_1);
    pvVar1 = param_1;
    if (iVar2 == 0) {
      __amsg_exit(0x10);
    }
  }
  else {
    *(undefined4 *)((int)pvVar1 + 0x4c) = *(undefined4 *)((int)param_1 + 0x4c);
    *(undefined4 *)((int)pvVar1 + 0x50) = *(undefined4 *)((int)param_1 + 0x50);
    *(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)param_1 + 4);
    _free(param_1);
  }
  if (PTR_FUN_10155594 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10155594)();
  }
  (**(code **)((int)pvVar1 + 0x4c))(*(undefined4 *)((int)pvVar1 + 0x50));
  __endthread();
  __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}


/* END FUNCTION 0x100f9d1a */

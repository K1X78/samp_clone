/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc300
 * Name: FUN_100bc300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100bc300(undefined4 *param_1,size_t param_2)

{
  void *pvVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x16) == '\0') {
    return -1;
  }
  pvVar1 = _malloc(param_2);
  *(void **)((int)param_1 + 0xe) = pvVar1;
  iVar2 = FUN_100c50d0(pvVar1,&param_2,*param_1,param_1 + 2,&DAT_10155470,5);
  if (iVar2 == 0) {
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      _free((void *)*param_1);
    }
    param_1[2] = param_2;
    *(undefined1 *)((int)param_1 + 0xd) = 1;
    *param_1 = *(undefined4 *)((int)param_1 + 0xe);
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    return 0;
  }
  _free(*(void **)((int)param_1 + 0xe));
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  return iVar2;
}


/* END FUNCTION 0x100bc300 */

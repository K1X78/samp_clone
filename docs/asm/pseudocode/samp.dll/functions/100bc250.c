/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc250
 * Name: FUN_100bc250
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_100bc250(undefined4 *param_1)

{
  size_t *psVar1;
  size_t _Size;
  void *pvVar2;
  int iVar3;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  _Size = param_1[2];
  psVar1 = (size_t *)((int)param_1 + 0x12);
  local_c = 5;
  *psVar1 = _Size;
  if (*(char *)((int)param_1 + 0x16) != '\0') {
    return -1;
  }
  pvVar2 = _malloc(_Size);
  *(void **)((int)param_1 + 0xe) = pvVar2;
  iVar3 = FUN_100c5040(pvVar2,psVar1,*param_1,_Size,local_8,&local_c,1,0x10000,3,0,2,0x20,1);
  if (iVar3 == 0) {
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      _free((void *)*param_1);
    }
    *param_1 = *(undefined4 *)((int)param_1 + 0xe);
    *(undefined1 *)((int)param_1 + 0xd) = 1;
    param_1[2] = *psVar1;
    *(undefined1 *)((int)param_1 + 0x16) = 1;
    return 0;
  }
  _free(*(void **)((int)param_1 + 0xe));
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  return iVar3;
}


/* END FUNCTION 0x100bc250 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bc390
 * Name: FUN_100bc390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100bc390(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  FILE *_File;
  void *pvVar2;
  size_t sVar3;
  undefined1 local_800 [2048];
  
  param_1[1] = 0;
  if ((*(char *)((int)param_1 + 0xd) != '\0') && ((void *)*param_1 != (void *)0x0)) {
    _free((void *)*param_1);
    *param_1 = 0;
  }
  _File = (FILE *)FUN_100f9cc9(param_2,&DAT_10118e1c);
  if (_File != (FILE *)0x0) {
    *(undefined1 *)((int)param_1 + 0xd) = 1;
    pvVar2 = _malloc(1);
    *param_1 = pvVar2;
    param_1[2] = 1;
    bVar1 = (byte)_File->_flag;
    while ((bVar1 & 0x10) == 0) {
      sVar3 = _fread(local_800,1,0x800,_File);
      FUN_100bc150(local_800,sVar3);
      bVar1 = (byte)_File->_flag;
    }
    _fclose(_File);
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return param_1[2];
  }
  return 0;
}


/* END FUNCTION 0x100bc390 */

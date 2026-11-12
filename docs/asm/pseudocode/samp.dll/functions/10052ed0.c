/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10052ed0
 * Name: FUN_10052ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_10052ed0(undefined4 param_1)

{
  FILE *_File;
  long lVar1;
  size_t _Count;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_1f40 [7996];
  undefined4 uStack_4;
  
  uStack_4 = 0x10052eda;
  _File = (FILE *)FUN_100f9cc9(param_1,&DAT_10118e1c);
  if (_File == (FILE *)0x0) {
    return 0;
  }
  _fseek(_File,0,2);
  lVar1 = _ftell(_File);
  _fseek(_File,0,0);
  uVar3 = FUN_100fad53(lVar1,8000);
  _Count = (size_t)((ulonglong)uVar3 >> 0x20);
  for (iVar2 = (int)uVar3; iVar2 != 0; iVar2 = iVar2 + -1) {
    _fread(local_1f40,1,8000,_File);
    FUN_10052e00(local_1f40,8000);
  }
  if (_Count != 0) {
    _fread(local_1f40,1,_Count,_File);
    FUN_10052e00(local_1f40,_Count);
  }
  _fclose(_File);
  return 1;
}


/* END FUNCTION 0x10052ed0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009e7f0
 * Name: FUN_1009e7f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009e7f0(undefined4 param_1)

{
  byte bVar1;
  void *pvVar2;
  FILE *_File;
  int iVar3;
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011659e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100a08f0(0xc,0);
  FUN_10067b60(DAT_102aca10,"DEBUGSCRIPT: Loading %s",param_1);
  pvVar2 = operator_new(0x41a4);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    DAT_1018de44 = 0;
  }
  else {
    DAT_1018de44 = FUN_10012700();
  }
  local_4 = 0xffffffff;
  _File = (FILE *)FUN_100f9cc9(param_1,&DAT_1011bbd8);
  if (_File != (FILE *)0x0) {
    bVar1 = (byte)_File->_flag;
    while ((bVar1 & 0x10) == 0) {
      _fgets(local_110,0x100,_File);
      FUN_1009e6e0(local_110);
      bVar1 = (byte)_File->_flag;
    }
    _fclose(_File);
    iVar3 = FUN_10001010();
    if (iVar3 != 0) {
      FUN_1009ee80(DAT_1018de38,DAT_1018de3c,DAT_1018de40);
    }
    ExceptionList = local_c;
    return;
  }
  FUN_10067b60(DAT_102aca10,"DEBUGSCRIPT: I can\'t open %s",param_1);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1009e7f0 */

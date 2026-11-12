/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467c60
 * Name: FUN_00467c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00467c60(char *param_1,uint *param_2)

{
  byte bVar1;
  FILE *_File;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  byte local_400 [1024];
  
  uVar4 = 0;
  iVar3 = 0;
  _File = (FILE *)FUN_0049fbe9(param_1,"rb");
  if (_File == (FILE *)0x0) {
    if (param_2 != (uint *)0x0) {
      *param_2 = 0;
    }
    return 0;
  }
  bVar1 = (byte)_File->_flag;
  while ((bVar1 & 0x10) == 0) {
    sVar2 = _fread(local_400,1,0x400,_File);
    uVar4 = FUN_00467c20(uVar4,local_400,sVar2);
    iVar3 = iVar3 + sVar2;
    bVar1 = (byte)_File->_flag;
  }
  _fclose(_File);
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar4;
  }
  return iVar3;
}


/* END FUNCTION 0x00467c60 */

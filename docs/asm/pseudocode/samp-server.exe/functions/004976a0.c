/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004976a0
 * Name: FUN_004976a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_004976a0(void *this,undefined4 param_1)

{
  byte bVar1;
  FILE *_File;
  int iVar2;
  char *pcVar3;
  char local_318 [264];
  char local_210 [524];
  
  _sprintf(local_318,"%s/%s",this,param_1);
  _File = (FILE *)FUN_0049fbe9(local_318,"r");
  if (_File == (FILE *)0x0) {
    return 0;
  }
  bVar1 = (byte)_File->_flag;
  while ((bVar1 & 0x10) == 0) {
    pcVar3 = local_210;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    *pcVar3 = '\0';
    _fgets(local_210,0x200,_File);
    FUN_00497640(this,local_210);
    bVar1 = (byte)_File->_flag;
  }
  _fclose(_File);
  return 1;
}


/* END FUNCTION 0x004976a0 */

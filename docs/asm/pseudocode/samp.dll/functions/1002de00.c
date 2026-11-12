/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002de00
 * Name: FUN_1002de00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_1002de00(char *param_1,void *param_2,size_t param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *_Memory;
  FILE *_File;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0;
  }
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  _Memory = operator_new((uint)(pcVar3 + (1 - (int)(param_1 + 1))));
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3[(int)_Memory - (int)param_1] = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  cVar2 = *_Memory;
  pcVar3 = _Memory;
  while (cVar2 != '\0') {
    if ((*pcVar3 == '/') || (*pcVar3 == '\\')) {
      *pcVar3 = '\0';
      FUN_100fa6a9(_Memory);
      *pcVar3 = '/';
    }
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    _File = (FILE *)FUN_100f9cc9(param_1,&DAT_10117d30);
    if (_File == (FILE *)0x0) {
      _free(_Memory);
      return 0;
    }
    _fwrite(param_2,1,param_3,_File);
    _fclose(_File);
    _free(_Memory);
    return 1;
  }
  FUN_100fa6a9(_Memory);
  _free(_Memory);
  return 1;
}


/* END FUNCTION 0x1002de00 */

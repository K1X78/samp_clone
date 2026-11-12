/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065cf0
 * Name: FUN_10065cf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10065cf0(int param_1)

{
  byte bVar1;
  char cVar2;
  FILE *_File;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 local_310;
  char local_30c [260];
  undefined1 local_208 [260];
  char local_104 [260];
  
  local_310 = param_1;
  _File = (FILE *)FUN_100f9cc9(param_1 + 0x8200,&DAT_1011bbd8);
  if (_File == (FILE *)0x0) {
    return 0;
  }
  bVar1 = (byte)_File->_flag;
  do {
    if ((bVar1 & 0x10) != 0) {
      _fclose(_File);
      return 1;
    }
    _fgets(local_104,0x100,_File);
    iVar6 = 0;
    iVar4 = 0;
    for (pcVar5 = local_104; (*pcVar5 == ' ' || (*pcVar5 == '\t')); pcVar5 = pcVar5 + 1) {
    }
    cVar2 = *pcVar5;
    if ((((cVar2 != '\0') && (cVar2 != ';')) && (cVar2 != '\n')) && (cVar2 != '[')) {
      do {
        if (((cVar2 == ' ') || (cVar2 == '=')) ||
           ((cVar2 == '\n' || ((cVar2 == '\t' || (cVar2 == ';')))))) break;
        iVar3 = _toupper((int)cVar2);
        local_208[iVar6] = (char)iVar3;
        cVar2 = pcVar5[1];
        iVar6 = iVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (iVar6 != 0) {
        local_208[iVar6] = 0;
        for (; (*pcVar5 == ' ' || (*pcVar5 == '\t')); pcVar5 = pcVar5 + 1) {
        }
        if (*pcVar5 == '=') {
          do {
            do {
              cVar2 = pcVar5[1];
              pcVar5 = pcVar5 + 1;
            } while (cVar2 == ' ');
          } while (cVar2 == '\t');
          if (cVar2 != '\0') {
            do {
              if (cVar2 == '\n') break;
              local_30c[iVar4] = cVar2;
              cVar2 = pcVar5[1];
              iVar4 = iVar4 + 1;
              pcVar5 = pcVar5 + 1;
            } while (cVar2 != '\0');
            if (iVar4 != 0) {
              local_30c[iVar4] = '\0';
              for (pcVar5 = local_30c + iVar4 + -1;
                  ((cVar2 = *pcVar5, cVar2 == ' ' || (cVar2 == '\t')) || (cVar2 == '\r'));
                  pcVar5 = pcVar5 + -1) {
                *pcVar5 = '\0';
              }
              FUN_10065c60(local_208,local_30c);
            }
          }
        }
      }
    }
    bVar1 = (byte)_File->_flag;
  } while( true );
}


/* END FUNCTION 0x10065cf0 */

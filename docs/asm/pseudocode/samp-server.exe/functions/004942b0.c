/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004942b0
 * Name: FUN_004942b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_004942b0(int param_1)

{
  byte bVar1;
  char cVar2;
  FILE *_File;
  char *pcVar3;
  int iVar4;
  char acStack_100 [256];
  
  (**(code **)(**(int **)(param_1 + 0x40) + 0xf8))();
  _File = (FILE *)FUN_0049fbe9("samp.ban","r");
  if (_File != (FILE *)0x0) {
    bVar1 = (byte)_File->_flag;
    while ((bVar1 & 0x10) == 0) {
      pcVar3 = _fgets(acStack_100,0x100,_File);
      if (pcVar3 != (char *)0x0) {
        pcVar3 = acStack_100;
        do {
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        iVar4 = (int)pcVar3 - (int)(acStack_100 + 1);
        if ((0 < iVar4) && (acStack_100[iVar4 + -1] == '\n')) {
          acStack_100[iVar4 + -1] = '\0';
        }
        pcVar3 = acStack_100;
        do {
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        iVar4 = (int)pcVar3 - (int)(acStack_100 + 1);
        if ((0 < iVar4) && (acStack_100[iVar4 + -1] == '\r')) {
          acStack_100[iVar4 + -2] = '\0';
        }
        if ((acStack_100[0] != '\0') && (acStack_100[0] != '#')) {
          pcVar3 = _strtok(acStack_100," \t");
          (**(code **)(**(int **)(param_1 + 0x40) + 0xf0))(pcVar3,0);
        }
      }
      bVar1 = (byte)_File->_flag;
    }
    FUN_00491fa0("");
    FUN_00491fa0("Ban list");
    FUN_00491fa0("--------");
    FUN_00491fa0(" Loaded: samp.ban");
    FUN_00491fa0("");
    _fclose(_File);
  }
  return;
}


/* END FUNCTION 0x004942b0 */

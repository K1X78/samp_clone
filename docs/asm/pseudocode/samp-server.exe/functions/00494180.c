/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00494180
 * Name: FUN_00494180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00494180(void *this,byte *param_1)

{
  byte bVar1;
  FILE *_File;
  FILE *_File_00;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  char acStack_104 [260];
  
  (**(code **)(**(int **)((int)this + 0x40) + 0xf4))(param_1);
  _File = (FILE *)FUN_0049fbe9("samp.ban","r");
  _File_00 = (FILE *)FUN_0049fbe9("samp.ban.temp","w");
  if ((_File != (FILE *)0x0) && (_File_00 != (FILE *)0x0)) {
    bVar1 = (byte)_File->_flag;
    while ((bVar1 & 0x10) == 0) {
      pcVar2 = _fgets(&stack0xfffffdfc,0x100,_File);
      if (pcVar2 != (char *)0x0) {
        iVar3 = 0;
        do {
          pcVar2 = &stack0xfffffdfc + iVar3;
          acStack_104[iVar3] = *pcVar2;
          iVar3 = iVar3 + 1;
        } while (*pcVar2 != '\0');
        pbVar4 = (byte *)_strtok(&stack0xfffffdfc," \t");
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar5;
          bVar6 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_0049424a:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_0049424f;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar6 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_0049424a;
          pbVar5 = pbVar5 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_0049424f:
        if (iVar3 != 0) {
          _fprintf(_File_00,"%s",acStack_104);
        }
      }
      bVar1 = (byte)_File->_flag;
    }
    _fclose(_File);
    _fclose(_File_00);
    FUN_004a022c("samp.ban");
    FUN_004a33b0("samp.ban.temp","samp.ban");
  }
  return;
}


/* END FUNCTION 0x00494180 */

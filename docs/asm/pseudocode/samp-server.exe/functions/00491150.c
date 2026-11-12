/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00491150
 * Name: FUN_00491150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_00491150(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  FILE *_File;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined2 local_818;
  char local_410 [1036];
  
  pcVar3 = _strtok((char *)0x0," ");
  if (pcVar3 == (char *)0x0) {
    FUN_00491fa0("Usage:");
    FUN_00491fa0("  exec <filename>");
    return;
  }
  _sprintf((char *)&local_818,"%s.cfg",pcVar3);
  _File = (FILE *)FUN_0049fbe9((char *)&local_818,"r");
  if (_File == (FILE *)0x0) {
    FUN_00491fa0("Unable to exec file \'%s\'.");
    return;
  }
  puVar6 = (undefined4 *)&local_818;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = 0;
  pcVar3 = _fgets((char *)&local_818,0x400,_File);
  do {
    if (pcVar3 == (char *)0x0) {
      _fclose(_File);
      return;
    }
    pcVar3 = (char *)&local_818;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar3 - ((int)&local_818 + 1);
    if (iVar4 < 0x401) {
      if ((0 < iVar4) && ((&stack0xfffff7e7)[iVar4] == '\n')) {
        pcVar3 = (char *)&local_818;
        do {
          pcVar5 = pcVar3;
          pcVar3 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5[-1] = '\0';
      }
      pcVar3 = (char *)&local_818;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar3 - ((int)&local_818 + 1);
      if ((0 < iVar4) && ((&stack0xfffff7e7)[iVar4] == '\r')) {
        pcVar3 = (char *)&local_818;
        do {
          pcVar5 = pcVar3;
          pcVar3 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5[-1] = '\0';
      }
      if ((char)local_818 != '\0') {
        pcVar3 = (char *)&local_818;
        pcVar5 = (char *)0x0;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if ((int)pcVar3 - ((int)&local_818 + 1) != 1) {
          do {
            if (((*(char *)((int)&local_818 + (int)pcVar5) == '/') &&
                (*(char *)((int)&local_818 + (int)(pcVar5 + 1)) == '/')) ||
               (*(char *)((int)&local_818 + (int)pcVar5) == '#')) {
              *(char *)((int)&local_818 + (int)pcVar5) = '\0';
              break;
            }
            pcVar3 = (char *)&local_818;
            pcVar5 = pcVar5 + 1;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
          } while (pcVar5 < pcVar3 + (-1 - ((int)&local_818 + 1)));
        }
        pcVar3 = (char *)&local_818;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if (((2 < (uint)((int)pcVar3 - ((int)&local_818 + 1))) && ((char)local_818 != '/')) &&
           (local_818._1_1_ != '/')) {
          pcVar3 = local_410;
          for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
            pcVar3[0] = '\0';
            pcVar3[1] = '\0';
            pcVar3[2] = '\0';
            pcVar3[3] = '\0';
            pcVar3 = pcVar3 + 4;
          }
          *pcVar3 = '\0';
          iVar4 = 0;
          cVar1 = (char)local_818;
          while (cVar1 != '\0') {
            if (*(char *)((int)&local_818 + iVar4) == ' ') {
              local_410[iVar4] = '\0';
              break;
            }
            local_410[iVar4] = *(char *)((int)&local_818 + iVar4);
            iVar2 = iVar4 + 1;
            iVar4 = iVar4 + 1;
            cVar1 = *(char *)((int)&local_818 + iVar2);
          }
          iVar4 = FUN_00490aa0(DAT_004fc43c,local_410);
          if (iVar4 != 0) {
            FUN_00490ce0(DAT_004fc43c,&local_818);
          }
        }
        puVar6 = (undefined4 *)&local_818;
        for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        *(undefined1 *)puVar6 = 0;
      }
    }
    pcVar3 = _fgets((char *)&local_818,0x400,_File);
  } while( true );
}


/* END FUNCTION 0x00491150 */

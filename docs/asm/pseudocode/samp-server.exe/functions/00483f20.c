/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483f20
 * Name: FUN_00483f20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __thiscall FUN_00483f20(void *this,undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  FILE *_File;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 local_310;
  int local_30c;
  char local_308 [256];
  char local_208;
  undefined4 local_207;
  
  local_208 = '\0';
  puVar5 = &local_207;
  for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  if (*(FILE **)((int)this + 0x30ba) != (FILE *)0x0) {
    _fclose(*(FILE **)((int)this + 0x30ba));
  }
  pcVar4 = param_2;
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_30c = (int)pcVar2 - (int)(param_2 + 1);
    if (local_30c != 0) {
      pcVar4 = local_308;
      for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + 4;
      }
      cVar1 = *param_2;
      iVar3 = 0;
      pcVar4 = param_2;
      while ((cVar1 != '\0' && (iVar3 != 0xff))) {
        if ((cVar1 != '.') && ((cVar1 != '/' && (cVar1 != '\\')))) {
          local_308[iVar3] = cVar1;
          iVar3 = iVar3 + 1;
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      }
      _sprintf(&local_208,"scriptfiles/%s.rec",local_308);
      uVar6 = FUN_0049fbe9(&local_208,"wb");
      pcVar4 = (char *)((ulonglong)uVar6 >> 0x20);
      _File = (FILE *)uVar6;
      *(FILE **)((int)this + 0x30ba) = _File;
      if (_File != (FILE *)0x0) {
        local_310 = 1000;
        _fwrite(&local_310,1,4,_File);
        _fwrite(&param_1,1,4,*(FILE **)((int)this + 0x30ba));
        *(undefined4 *)((int)this + 0x30b6) = param_1;
        uVar6 = thunk_FUN_0044e910();
        *(int *)((int)this + 0x30be) = (int)uVar6;
        return CONCAT44((int)((ulonglong)uVar6 >> 0x20),1);
      }
    }
  }
  return ZEXT48(pcVar4) << 0x20;
}


/* END FUNCTION 0x00483f20 */

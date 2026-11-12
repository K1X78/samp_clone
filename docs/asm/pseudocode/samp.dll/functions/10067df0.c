/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10067df0
 * Name: FUN_10067df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall
FUN_10067df0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  FILE *_File;
  DWORD DVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  *(undefined4 *)((int)param_1 + 0x63ae) = param_2;
  *(undefined4 *)((int)param_1 + 0x63a2) = param_3;
  param_1[2] = 2;
  D3DXCreateSprite(param_2,(int)param_1 + 0x63a6);
  D3DXCreateSprite(param_2,(int)param_1 + 0x63aa);
  puVar5 = (undefined4 *)((int)param_1 + 0x132);
  for (iVar4 = 0x189c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x122) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x126) = 0xff88aa62;
  *(undefined4 *)((int)param_1 + 0x12a) = 0xffa9c4e4;
  *param_1 = 10;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_4 != (char *)0x0) {
    pcVar2 = param_4;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != param_4 + 1) {
      pcVar2 = (char *)((int)param_1 + 0x11);
      pcVar6 = pcVar2;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6 = pcVar6 + 4;
      }
      *pcVar6 = '\0';
      _strncpy(pcVar2,param_4,0x104);
      _File = (FILE *)FUN_100f9cc9(pcVar2,&DAT_1011bbd4);
      if (_File != (FILE *)0x0) {
        *(undefined4 *)((int)param_1 + 0xd) = 1;
        _fclose(_File);
      }
    }
  }
  *(undefined4 *)((int)param_1 + 0x63be) = 0;
  *(undefined4 *)((int)param_1 + 0x63ba) = 0;
  *(undefined4 *)((int)param_1 + 0x63b6) = 0;
  DVar3 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x63d2) = DVar3;
  *(undefined4 *)((int)param_1 + 0x63de) = 1;
  *(undefined4 *)((int)param_1 + 0x11e) = 0;
  *(undefined4 *)((int)param_1 + 0x116) = 0;
  *(undefined4 *)((int)param_1 + 0x11a) = 0;
  FUN_10067c40();
  return param_1;
}


/* END FUNCTION 0x10067df0 */

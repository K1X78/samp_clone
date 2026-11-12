/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007f080
 * Name: FUN_1007f080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007f080(undefined4 param_1,DWORD *param_2,DWORD *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  DEVMODEA *pDVar5;
  DEVMODEA local_1a8;
  CHAR local_108 [255];
  char local_9;
  
  FUN_1007e000(0);
  iVar2 = FUN_100829f0(param_1);
  pDVar5 = &local_1a8;
  for (iVar4 = 0x27; iVar4 != 0; iVar4 = iVar4 + -1) {
    pDVar5->dmDeviceName[0] = '\0';
    pDVar5->dmDeviceName[1] = '\0';
    pDVar5->dmDeviceName[2] = '\0';
    pDVar5->dmDeviceName[3] = '\0';
    pDVar5 = (DEVMODEA *)(pDVar5->dmDeviceName + 4);
  }
  pcVar3 = (char *)(iVar2 + 0x404);
  local_1a8.dmSize = 0x9c;
  iVar2 = -(int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_108 + iVar2)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_9 = cVar1;
  EnumDisplaySettingsA(local_108,0xfffffffe,&local_1a8);
  *param_2 = local_1a8.dmPelsWidth;
  *param_3 = local_1a8.dmPelsHeight;
  return;
}


/* END FUNCTION 0x1007f080 */

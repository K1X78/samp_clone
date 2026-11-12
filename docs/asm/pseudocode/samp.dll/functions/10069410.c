/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069410
 * Name: FUN_10069410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10069410(int param_1)

{
  char *_Dest;
  char cVar1;
  char *pcVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  size_t _Count;
  char local_84 [132];
  
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  _Count = 0x80;
  _Dest = (char *)(param_1 + 0x14e4);
  pcVar2 = (char *)FUN_100850d0();
  _strncpy(_Dest,pcVar2,_Count);
  *(undefined1 *)(param_1 + 0x1564) = 0;
  pcVar2 = _Dest;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 == (char *)(param_1 + 0x14e5)) goto LAB_10069554;
  FUN_10069010(_Dest);
  *(undefined4 *)(param_1 + 0x1af0) = 0xffffffff;
  if (*_Dest != '/') {
    if (*(code **)(param_1 + 0x1af8) != (code *)0x0) {
      (**(code **)(param_1 + 0x1af8))(_Dest);
    }
    goto LAB_10069542;
  }
  pcVar2 = (char *)(param_1 + 0x14e5);
  pcVar5 = pcVar2;
  if (*pcVar2 == '\0') {
LAB_100694b4:
    pcVar3 = (code *)FUN_10069150(pcVar2);
    if (pcVar3 == (code *)0x0) {
      if (DAT_102aca24 == 0) goto LAB_10069538;
      FUN_10069340(_Dest);
    }
    else {
      (*pcVar3)(&DAT_10117a39);
    }
  }
  else {
    do {
      if (*pcVar5 == ' ') break;
      pcVar4 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar4 != '\0');
    if (*pcVar5 == '\0') goto LAB_100694b4;
    pcVar4 = _Dest;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)(local_84 + -(int)_Dest)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *pcVar5 = '\0';
    pcVar3 = (code *)FUN_10069150(pcVar2);
    if (pcVar3 == (code *)0x0) {
      if (DAT_102aca24 != 0) {
        FUN_10069340(local_84);
        goto LAB_10069542;
      }
LAB_10069538:
      FUN_10067b60(DAT_102aca10,"I don\'t know that command.");
    }
    else {
      (*pcVar3)(pcVar5 + 1);
    }
  }
LAB_10069542:
  *_Dest = '\0';
  FUN_10085000(&DAT_10117a39,0);
LAB_10069554:
  if (*(int *)(param_1 + 0x14e0) != 0) {
    if (DAT_102aca10 != 0) {
      FUN_10066e00();
    }
    FUN_10068fc0();
  }
  return;
}


/* END FUNCTION 0x10069410 */

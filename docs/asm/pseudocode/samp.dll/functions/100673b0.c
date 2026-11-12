/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100673b0
 * Name: FUN_100673b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100673b0(int *param_1)

{
  char cVar1;
  tm *_Tm;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int local_78;
  int local_6c;
  int local_64;
  int local_60 [2];
  int iStack_58;
  char local_50 [76];
  
  iVar4 = *(int *)((int)param_1 + 0x11e);
  pcVar5 = local_50;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  local_78 = 0;
  local_6c = 10;
  local_64 = 0x6e;
  if (*(int *)(iVar4 + 0x8e) < 1) {
    *(undefined4 *)(iVar4 + 0x8e) = 1;
    FUN_10084e80();
    FUN_10084da0();
  }
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x11e) + 0x8e);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  if (*param_1 == 0) {
    *(undefined4 *)((int)param_1 + 0x12e) = 0x6e;
    return;
  }
  pcVar5 = (char *)(iVar4 * 0xfc + 0x136 + (int)param_1);
  do {
    iVar4 = 0x2d;
    if ((char)param_1[3] != '\0') {
      _Tm = _localtime((time_t *)(pcVar5 + -4));
      pcVar2 = local_50;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      if (_Tm != (tm *)0x0) {
        _strftime(local_50,0x40,"[%H:%M:%S]",_Tm);
      }
    }
    iVar3 = *(int *)(pcVar5 + 0xec);
    if (iVar3 == 2) {
      if ((char)param_1[3] != '\0') {
        pcVar2 = local_50;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if ((pcVar2 != local_50 + 1) && (*pcVar5 != '\0')) {
          FUN_10066ee0(local_50,0x2d,local_6c,0x226,local_64,*(undefined4 *)(pcVar5 + 0xf0));
          iVar4 = *(int *)((int)param_1 + 0x63e6) + 0x32;
        }
      }
      pcVar2 = pcVar5;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if (pcVar2 != pcVar5 + 1) {
        (**(code **)(*(int *)**(undefined4 **)((int)param_1 + 0x63a2) + 0x38))
                  ((int *)**(undefined4 **)((int)param_1 + 0x63a2),0,pcVar5,0xffffffff,local_60,
                   0x400,0xff000000);
        FUN_10066ee0(pcVar5,iVar4,local_6c,0x226,local_64,*(undefined4 *)(pcVar5 + 0xf4));
        iVar4 = (iStack_58 - local_60[0]) + 5 + iVar4;
      }
LAB_100675c5:
      FUN_10066ee0(pcVar5 + 0x1c,iVar4,local_6c,0x226,local_64,*(undefined4 *)(pcVar5 + 0xf0));
    }
    else if ((iVar3 == 4) || (iVar3 == 8)) {
      if ((char)param_1[3] != '\0') {
        pcVar2 = local_50;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if (pcVar2 != local_50 + 1) {
          FUN_10066ee0(local_50,0x2d,local_6c,0x226,local_64,*(undefined4 *)(pcVar5 + 0xf0));
          iVar4 = *(int *)((int)param_1 + 0x63e6) + 0x32;
        }
      }
      goto LAB_100675c5;
    }
    local_6c = local_6c + 1 + *(int *)((int)param_1 + 0x63e2);
    local_64 = *(int *)((int)param_1 + 0x63e2) + 1 + local_6c;
    pcVar5 = pcVar5 + 0xfc;
    local_78 = local_78 + 1;
    if (local_78 == *param_1) {
      *(int *)((int)param_1 + 0x12e) = local_64;
      return;
    }
  } while( true );
}


/* END FUNCTION 0x100673b0 */

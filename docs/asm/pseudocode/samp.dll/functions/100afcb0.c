/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100afcb0
 * Name: FUN_100afcb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100afcb0(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x2d2) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x2a4) == 0) {
    return;
  }
  iVar4 = FUN_1009f210();
  if (iVar4 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x2b0) != '\0') {
    return;
  }
  iVar4 = FUN_100a70f0();
  sVar1 = *(short *)(iVar4 + 0x32);
  sVar2 = *(short *)(iVar4 + 0x30);
  iVar5 = FUN_100ad600();
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x2d6) * 0x10;
    FUN_100ace50(s_DANCE_LOOP_10154df0 + iVar5,&DAT_10154db0 + iVar5,0x40800000,1,0,0,0,0);
  }
  sVar3 = *(short *)(iVar4 + 0x20);
  if (((sVar1 < 1) || (sVar2 != 0)) || (iVar4 = 0, sVar3 != 0)) {
    if (((sVar1 < 0) && (sVar2 == 0)) && (sVar3 == 0)) {
      iVar4 = 1;
    }
    else if (sVar1 == 0) {
      if ((sVar2 < 0) && (sVar3 == 0)) {
        iVar4 = 2;
      }
      else if ((sVar2 < 1) || (sVar3 != 0)) {
        if ((sVar2 < 0) && (sVar3 != 0)) {
          iVar4 = 10;
        }
        else {
          if (sVar2 < 1) {
            return;
          }
          if (sVar3 == 0) {
            return;
          }
          iVar4 = 0xb;
        }
      }
      else {
        iVar4 = 3;
      }
    }
    else {
      if (0 < sVar1) {
        if ((sVar2 < 0) && (sVar3 == 0)) {
          iVar4 = 4;
          goto LAB_100afe85;
        }
        if ((0 < sVar2) && (sVar3 == 0)) {
          iVar4 = 5;
          goto LAB_100afe85;
        }
      }
      if (sVar1 < 0) {
        if ((sVar2 < 0) && (sVar3 == 0)) {
          iVar4 = 6;
          goto LAB_100afe85;
        }
        if ((0 < sVar2) && (sVar3 == 0)) {
          iVar4 = 7;
          goto LAB_100afe85;
        }
      }
      if (((sVar1 < 1) || (sVar2 != 0)) || (sVar3 == 0)) {
        if (((sVar1 < 0) && (sVar2 == 0)) && (sVar3 != 0)) {
          iVar4 = 9;
        }
        else {
          if (0 < sVar1) {
            if ((sVar2 < 0) && (sVar3 != 0)) {
              iVar4 = 0xc;
              goto LAB_100afe85;
            }
            if ((0 < sVar2) && (sVar3 != 0)) {
              iVar4 = 0xd;
              goto LAB_100afe85;
            }
          }
          if (-1 < sVar1) {
            return;
          }
          if ((sVar2 < 0) && (sVar3 != 0)) {
            iVar4 = 0xe;
          }
          else {
            if (sVar2 < 1) {
              return;
            }
            if (sVar3 == 0) {
              return;
            }
            iVar4 = 0xf;
          }
        }
      }
      else {
        iVar4 = 8;
      }
    }
  }
LAB_100afe85:
  if (iVar4 != *(int *)(param_1 + 0x2da)) {
    *(int *)(param_1 + 0x2da) = iVar4;
    iVar4 = FUN_100ad770(iVar4);
    if (iVar4 != 0) {
      FUN_100ace50(iVar4,&DAT_10154db0 + *(int *)(param_1 + 0x2d6) * 0x10,0x40800000,0,0,0,0,0);
    }
  }
  return;
}


/* END FUNCTION 0x100afcb0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ad240
 * Name: FUN_100ad240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100ad240(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char local_4c [4];
  undefined1 local_48 [48];
  float local_18;
  float local_14;
  float local_10;
  
  if (((*(int *)(param_1 + 0x2a4) != 0) &&
      (iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44)), iVar1 != 0)) &&
     (FUN_100b1f10(&DAT_1011ef54,*(undefined4 *)(param_1 + 0x44),local_4c), local_4c[0] == '.')) {
    iVar1 = 10;
    bVar4 = true;
    pcVar2 = param_2;
    pcVar3 = "PARA_OPEN";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      iVar1 = FUN_100ad0f0();
      if (iVar1 != 0) {
        FUN_1009e950(local_48);
        iVar1 = FUN_100b3860();
        if (iVar1 != 0) {
          iVar1 = FUN_100b3860();
          iVar1 = *(int *)(iVar1 + 0x14);
          FUN_100b1f10(&DAT_1011efb8,
                       (double)((local_18 - *(float *)(iVar1 + 0x30)) * 0.1 +
                               *(float *)(iVar1 + 0x30)),
                       (double)((local_14 - *(float *)(iVar1 + 0x34)) * 0.1 +
                               *(float *)(iVar1 + 0x34)),
                       (double)((local_10 - *(float *)(iVar1 + 0x38)) * 0.1 +
                               *(float *)(iVar1 + 0x38)),0x40f);
          return;
        }
      }
    }
    else {
      iVar1 = 0xb;
      bVar4 = true;
      pcVar2 = param_2;
      pcVar3 = "PARA_DECEL";
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        iVar1 = FUN_100ad0f0();
      }
      else {
        iVar1 = 0xb;
        bVar4 = true;
        pcVar2 = param_2;
        pcVar3 = "PARA_FLOAT";
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar4 = *pcVar2 == *pcVar3;
          pcVar2 = pcVar2 + 1;
          pcVar3 = pcVar3 + 1;
        } while (bVar4);
        if (bVar4) {
          iVar1 = FUN_100ad0f0();
        }
        else {
          iVar1 = 0xc;
          bVar4 = true;
          pcVar2 = param_2;
          pcVar3 = "PARA_STEERR";
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar4 = *pcVar2 == *pcVar3;
            pcVar2 = pcVar2 + 1;
            pcVar3 = pcVar3 + 1;
          } while (bVar4);
          if (bVar4) {
            iVar1 = FUN_100ad0f0();
          }
          else {
            iVar1 = 0xc;
            bVar4 = true;
            pcVar2 = param_2;
            pcVar3 = "PARA_STEERL";
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar4 = *pcVar2 == *pcVar3;
              pcVar2 = pcVar2 + 1;
              pcVar3 = pcVar3 + 1;
            } while (bVar4);
            if (bVar4) {
              iVar1 = FUN_100ad0f0();
            }
            else {
              iVar1 = 0x10;
              bVar4 = true;
              pcVar2 = "PARA_LAND_WATER";
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar4 = *param_2 == *pcVar2;
                param_2 = param_2 + 1;
                pcVar2 = pcVar2 + 1;
              } while (bVar4);
              if (!bVar4) {
                return;
              }
              iVar1 = FUN_100ad0f0();
            }
          }
        }
      }
      if (iVar1 != 0) {
        FUN_100b1f10(&DAT_1011f10c,*(undefined4 *)(param_1 + 0x2b9));
      }
    }
  }
  return;
}


/* END FUNCTION 0x100ad240 */

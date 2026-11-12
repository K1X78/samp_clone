/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ec240
 * Name: FUN_100ec240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100ec240(undefined4 *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  
  piVar5 = param_1 + 0x102;
  if (param_2 == 0) {
    piVar5 = param_1 + 0xf3;
  }
  iVar3 = thunk_FUN_100de8c0(&DAT_101270a0,param_3,4);
  if (iVar3 != 0) {
    pcVar4 = (char *)(param_3 + 4);
    bVar2 = *(byte *)(param_3 + 4);
    while (bVar2 != 0) {
      iVar3 = _isspace((uint)bVar2);
      if (iVar3 == 0) {
        if (*pcVar4 != '\0') {
          iVar3 = FUN_100f49f0(*param_1,pcVar4,piVar5);
          if (iVar3 != 0) {
            return iVar3;
          }
          *piVar5 = 2;
          return 0;
        }
        break;
      }
      pbVar1 = (byte *)(pcVar4 + 1);
      pcVar4 = pcVar4 + 1;
      bVar2 = *pbVar1;
    }
    iVar3 = *piVar5;
    if (iVar3 == 4) {
      FUN_100d8ae0(*param_1,"NTLM auth restarted\n");
      FUN_100f4a70(param_1 + 0xf3);
      FUN_100f4a70(param_1 + 0x102);
    }
    else {
      if (iVar3 == 3) {
        FUN_100d8ae0(*param_1,"NTLM handshake rejected\n");
        FUN_100ec210(param_1);
        *piVar5 = 0;
        return 9;
      }
      if (0 < iVar3) {
        FUN_100d8ae0(*param_1,"NTLM handshake failure (internal error)\n");
        return 9;
      }
    }
    *piVar5 = 1;
  }
  return 0;
}


/* END FUNCTION 0x100ec240 */

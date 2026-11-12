/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414ef0
 * Name: FUN_00414ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00414ef0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int in_EAX;
  undefined3 extraout_var;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  if (*(int *)(in_EAX + 0x10) < *(int *)(in_EAX + 0xc) + param_1) {
    bVar2 = FUN_00414d70();
    if (CONCAT31(extraout_var,bVar2) != 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(in_EAX + 0xc);
  if (0 < param_1) {
    pcVar4 = (char *)(param_2 + 1);
    iVar6 = iVar1 * 0x14;
    local_8 = param_1;
    do {
      iVar5 = (int)pcVar4[1];
      pbVar3 = (byte *)(*(int *)(in_EAX + 0x14) + iVar6);
      *pbVar3 = pcVar4[-1];
      *(int *)(pbVar3 + 4) = (int)*pcVar4;
      if ((iVar5 < 0) && (((&DAT_004b2ad8)[*pbVar3] & 1) != 0)) {
        *(int *)(pbVar3 + 8) = (iVar1 - iVar5) + -1;
      }
      else {
        *(int *)(pbVar3 + 8) = iVar5;
      }
      *(int *)(pbVar3 + 0xc) = (int)pcVar4[2];
      pbVar3[1] = 0;
      pbVar3[0x10] = 0;
      pbVar3[0x11] = 0;
      pbVar3[0x12] = 0;
      pbVar3[0x13] = 0;
      pbVar3[3] = 0;
      iVar6 = iVar6 + 0x14;
      pcVar4 = pcVar4 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    *(int *)(in_EAX + 0xc) = *(int *)(in_EAX + 0xc) + param_1;
  }
  return iVar1;
}


/* END FUNCTION 0x00414ef0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003e510
 * Name: FUN_1003e510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __thiscall FUN_1003e510(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 local_c;
  undefined2 local_8;
  uint local_6;
  
  uVar1 = FUN_1002e2b0();
  uVar4 = 0;
  if (*(ushort *)(param_1 + 7) != 0) {
    pcVar2 = *(char **)(param_1 + 0x334);
    do {
      if (*pcVar2 == '\0') {
        pcVar5 = *(char **)(param_1 + 0x334) + uVar4 * 0xc69;
        FUN_10051110();
        *(undefined4 *)(pcVar5 + 1) = param_2;
        *(undefined2 *)(pcVar5 + 5) = param_3;
        *pcVar5 = '\x01';
        FUN_10043920(*(undefined4 *)(param_1 + 0xdae));
        FUN_10043930(*(undefined4 *)(param_1 + 0xdb2));
        FUN_10043760(0);
        pcVar2 = pcVar5 + 0x712;
        iVar3 = 5;
        do {
          pcVar2[-0xffffffff00000002] = -1;
          pcVar2[-0xffffffff00000001] = -1;
          pcVar2[0] = '\0';
          pcVar2[1] = '\0';
          pcVar2[2] = '\0';
          pcVar2[3] = '\0';
          pcVar2 = pcVar2 + 6;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        *(undefined4 *)(pcVar5 + 0xc62) = param_4;
        pcVar5[0x72e] = '\0';
        pcVar5[0x72f] = '\0';
        pcVar5[0x730] = '\0';
        pcVar5[0x731] = '\0';
        pcVar5[0x732] = -1;
        pcVar5[0x733] = -1;
        pcVar5[0x734] = '\0';
        pcVar5[0x735] = '\0';
        pcVar5[0x736] = '\0';
        pcVar5[0x737] = '\0';
        pcVar5[0x70f] = '\0';
        FUN_1001f3b0();
        *(undefined4 *)(pcVar5 + 0x84d) = uVar1;
        *(undefined4 *)(pcVar5 + 7) = DAT_1013c7cc;
        *(undefined2 *)(pcVar5 + 0xb) = DAT_1013c7d0;
        pcVar5[0x861] = '\0';
        *(undefined4 *)(pcVar5 + 0x738) = uVar1;
        pcVar5[0xc66] = '\0';
        pcVar5[0xc67] = '\0';
        pcVar5[0xc68] = '\0';
        FUN_10049db0(1);
        local_c = param_2;
        local_8 = param_3;
        local_6 = uVar4;
        FUN_1003c790(&param_2,&local_c);
        return pcVar5;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = pcVar2 + 0xc69;
    } while (uVar4 < *(ushort *)(param_1 + 7));
  }
  return (char *)0x0;
}


/* END FUNCTION 0x1003e510 */

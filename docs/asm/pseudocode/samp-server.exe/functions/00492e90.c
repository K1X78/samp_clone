/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00492e90
 * Name: FUN_00492e90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_00492e90(void *this,char *param_1,undefined4 param_2,undefined4 param_3,char param_4,
            undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int extraout_EDX;
  int iVar5;
  
  FUN_00492da0((int)this);
  puVar4 = (undefined4 *)(extraout_EDX + 0x1305);
  puVar2 = (undefined1 *)(extraout_EDX + 0x41);
  iVar5 = 0xc;
  do {
    puVar2[-0x20] = 0;
    *puVar2 = 0;
    *puVar4 = 1;
    puVar2 = puVar2 + 0x40;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)(extraout_EDX + 0x1301) = 1;
  *(undefined1 *)(extraout_EDX + 0x321) = 0;
  *(undefined1 *)(extraout_EDX + 0x341) = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (0x1f < (uint)((int)pcVar3 - (int)(param_1 + 1))) {
    param_1[0x1f] = '\0';
  }
  iVar5 = (extraout_EDX + 1) - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar5] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(extraout_EDX + 0x1341) = param_2;
  *(undefined4 *)(extraout_EDX + 0x1349) = param_5;
  *(undefined4 *)(extraout_EDX + 0x1345) = param_3;
  *(char *)(extraout_EDX + 0x1351) = (param_4 == '\x02') + '\x01';
  *(undefined1 *)(extraout_EDX + 0x1352) = 0;
  *(undefined1 *)(extraout_EDX + 0x1353) = 0;
  *(undefined4 *)(extraout_EDX + 0x134d) = param_6;
  return extraout_EDX;
}


/* END FUNCTION 0x00492e90 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00457960
 * Name: FUN_00457960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_00457960(void *this,char *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (((param_1 == (char *)0x0) || (*(char *)((int)this + 4) != '\0')) ||
     (*(int *)((int)this + 0xc18) == -1)) {
    return (uint)param_1 & 0xffffff00;
  }
  if (((*param_1 < '0') || ('2' < *param_1)) &&
     (param_1 = FUN_00462b20(param_1), param_1 == (char *)0x0)) {
    return 0;
  }
  bVar5 = true;
  iVar2 = 10;
  pcVar3 = param_1;
  pcVar4 = "127.0.0.1";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    bVar5 = true;
    iVar2 = 8;
    pcVar3 = param_1;
    pcVar4 = "0.0.0.0";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_00457a0c;
  }
  if ((short)param_2 == *(short *)((int)this + 0x238)) {
    return (uint)param_1 & 0xffffff00;
  }
LAB_00457a0c:
  uVar1 = FUN_004557f0(this,(uint)param_1,param_2);
  return uVar1;
}


/* END FUNCTION 0x00457960 */

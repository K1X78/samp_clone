/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004683d0
 * Name: FUN_004683d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004683d0(void *this,int param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  size_t _Count;
  char local_898 [135];
  undefined1 uStack_811;
  undefined4 local_810 [515];
  
  puVar6 = local_810;
  for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)puVar6 = 0;
  _strncpy((char *)local_810,param_2,0x800);
  *(int *)((int)this + 10) = param_1;
  _strncpy((char *)((int)this + 0x3111),param_4,0x100);
  if (param_1 == 2) {
    _strncpy((char *)((int)this + 0x1110),param_3,0x2000);
  }
  pcVar1 = _strchr((char *)local_810,0x2f);
  if (pcVar1 == (char *)0x0) {
    puVar7 = (undefined2 *)&uStack_811;
    do {
      pcVar1 = (char *)((int)puVar7 + 1);
      puVar7 = (undefined2 *)((int)puVar7 + 1);
    } while (*pcVar1 != '\0');
    *puVar7 = 0x2f;
    pcVar1 = _strchr((char *)local_810,0x2f);
  }
  uVar2 = (int)pcVar1 - (int)local_810;
  if (0x100 < uVar2) {
    uVar2 = 0x100;
  }
  puVar6 = local_810;
  puVar8 = (undefined4 *)((int)this + 0xe);
  for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  _Count = 0x1000;
  *(undefined1 *)(uVar2 + 0xe + (int)this) = 0;
  pcVar1 = _strchr((char *)local_810,0x2f);
  _strncpy((char *)((int)this + 0x10f),pcVar1,_Count);
  pcVar1 = _strchr((char *)((int)this + 0xe),0x3a);
  if (pcVar1 != (char *)0x0) {
    pcVar9 = local_898;
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    *pcVar9 = '\0';
    _strncpy(local_898,pcVar1 + 1,0x80);
    *pcVar1 = '\0';
    lVar3 = _atol(local_898);
    *(short *)((int)this + 8) = (short)lVar3;
    return;
  }
  *(undefined2 *)((int)this + 8) = 0x50;
  return;
}


/* END FUNCTION 0x004683d0 */

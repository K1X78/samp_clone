/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ff40
 * Name: FUN_0044ff40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0044ff40(void *this,undefined4 *param_1,ushort *param_2)

{
  ushort *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  int iVar7;
  ushort *puVar6;
  
  puVar1 = param_2;
  pcVar2 = *(char **)((int)this + 0x33c);
  if ((pcVar2 != (char *)0x0) && (*(char *)((int)this + 4) != '\x01')) {
    if (param_1 == (undefined4 *)0x0) {
      uVar5 = 0;
      for (uVar3 = (uint)*(ushort *)((int)this + 8); uVar3 != 0; uVar3 = uVar3 - 1) {
        if ((*pcVar2 != '\0') && (*(int *)(pcVar2 + 0xcb0) == 8)) {
          uVar5 = uVar5 + 1;
        }
        pcVar2 = pcVar2 + 0xcb8;
      }
    }
    else {
      puVar6 = (ushort *)0x0;
      uVar5 = 0;
      iVar7 = 0;
      param_2 = (ushort *)0x0;
      if (*(short *)((int)this + 8) != 0) {
        iVar4 = 0;
        do {
          pcVar2 = (char *)(*(int *)((int)this + 0x33c) + iVar4);
          if ((*pcVar2 != '\0') && (*(int *)(pcVar2 + 0xcb0) == 8)) {
            if ((int)param_2 < (int)(uint)*puVar1) {
              *param_1 = *(undefined4 *)(pcVar2 + 1);
              *(undefined2 *)(param_1 + 1) = *(undefined2 *)(pcVar2 + 5);
            }
            puVar6 = (ushort *)((int)param_2 + 1);
            param_1 = (undefined4 *)((int)param_1 + 6);
            param_2 = puVar6;
          }
          uVar5 = *(ushort *)((int)this + 8);
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + 0xcb8;
        } while (iVar7 < (int)(uint)uVar5);
        *puVar1 = (ushort)puVar6;
        return (uint)(byte)(uVar5 >> 8) << 8;
      }
    }
    *puVar1 = uVar5;
    return (uint)pcVar2 & 0xffffff00;
  }
  *param_2 = 0;
  return (uint)pcVar2 & 0xffffff00;
}


/* END FUNCTION 0x0044ff40 */

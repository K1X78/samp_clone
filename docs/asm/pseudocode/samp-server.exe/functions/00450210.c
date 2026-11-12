/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00450210
 * Name: FUN_00450210
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00450210(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 local_4;
  
  uVar6 = 0;
  local_4 = DAT_004cac40;
  uVar5 = DAT_004cac3c;
  if (*(short *)((int)this + 8) != 0) {
    iVar4 = 0;
    do {
      uVar2 = FUN_0044eec0((void *)(*(int *)((int)this + 0x33c) + 1 + iVar4),(int *)&stack0x00000008
                          );
      if ((char)uVar2 == '\0') {
        uVar2 = FUN_0044eec0(&stack0x00000008,&DAT_004cac3c);
        if ((char)uVar2 != '\0') goto LAB_0045025e;
      }
      else {
LAB_0045025e:
        iVar3 = *(int *)((int)this + 0x33c) + iVar4;
        if (*(char *)(*(int *)((int)this + 0x33c) + iVar4) != '\0') {
          puVar1 = (undefined4 *)(uVar6 * 0xcb8 + 7 + *(int *)((int)this + 0x33c));
          *param_1 = *puVar1;
          *(undefined2 *)(param_1 + 1) = *(undefined2 *)(puVar1 + 1);
          return;
        }
        local_4 = *(undefined2 *)(iVar3 + 0xb);
        uVar5 = *(undefined4 *)(iVar3 + 7);
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0xcb8;
    } while (uVar6 < *(ushort *)((int)this + 8));
  }
  *param_1 = uVar5;
  *(undefined2 *)(param_1 + 1) = local_4;
  return;
}


/* END FUNCTION 0x00450210 */

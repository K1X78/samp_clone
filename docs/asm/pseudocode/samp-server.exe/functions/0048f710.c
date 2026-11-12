/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048f710
 * Name: FUN_0048f710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_0048f710(void *this,char *param_1,char *param_2,undefined4 param_3,char param_4,
            undefined1 param_5,undefined1 param_6,char param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte local_90 [65];
  char local_4f [65];
  undefined4 local_e;
  char local_a;
  undefined1 local_9;
  undefined1 local_8;
  char local_7;
  undefined4 local_6;
  
  pbVar4 = local_90;
  for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  pbVar4[0] = 0;
  pbVar4[1] = 0;
  _strncpy((char *)local_90,param_1,0x40);
  _strncpy(local_4f,param_2,0x40);
  local_e = param_3;
  local_a = param_4;
  local_9 = param_5;
  local_8 = param_6;
  local_7 = param_7;
  local_6 = param_8;
  iVar3 = *(int *)(DAT_004fc438 + 8);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x30d50);
    uVar5 = 0;
    if (-1 < iVar1) {
      do {
        if (((((ushort)uVar5 < 1000) && (*(int *)(iVar3 + 0x24de4 + (uVar5 & 0xffff) * 4) != 0)) &&
            (iVar2 = *(int *)(iVar3 + 0x25d84 + (uVar5 & 0xffff) * 4), iVar2 != 0)) &&
           ((*(ushort *)((int)this + 0xd5) < 1000 &&
            (*(char *)(*(ushort *)((int)this + 0xd5) + 0x28dd + iVar2) != '\0')))) {
          FUN_0048f420(this,(ushort)uVar5,local_90);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 <= iVar1);
    }
  }
  if ((param_4 == '\0') && (param_7 == '\0')) {
    *(undefined1 *)((int)this + 0x21) = 0;
    puVar6 = (undefined4 *)((int)this + 0x22);
    for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    return;
  }
  pbVar4 = local_90;
  puVar6 = (undefined4 *)((int)this + 0x22);
  for (iVar3 = 0x23; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *(undefined4 *)pbVar4;
    pbVar4 = pbVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)pbVar4;
  *(undefined1 *)((int)this + 0x21) = 1;
  return;
}


/* END FUNCTION 0x0048f710 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a9e70
 * Name: FUN_100a9e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a9e70(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_10;
  undefined4 *local_8;
  DWORD local_4;
  
  uVar3 = param_1 * 0x24 + 4;
  puVar2 = _malloc(uVar3);
  if (puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar1 = puVar2 + 1;
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    for (puVar5 = puVar1; puVar5 < puVar2 + param_1 * 9 + 1; puVar5 = puVar5 + 9) {
      *(undefined1 *)puVar5 = 0xb0;
      *(undefined1 *)((int)puVar5 + 1) = 0xbc;
      *(undefined1 *)((int)puVar5 + 2) = 0x85;
      *(undefined1 *)((int)puVar5 + 10) = 0xff;
      *(undefined1 *)((int)puVar5 + 0xb) = 0xff;
      *(undefined1 *)((int)puVar5 + 0x22) = 0xff;
      *(undefined1 *)((int)puVar5 + 0x23) = 0xff;
    }
    local_8 = puVar2;
    VirtualProtect(&DAT_004c66b1,4,0x40,(PDWORD)&local_8);
    _DAT_004c66b1 = puVar2;
    VirtualProtect(&DAT_004c66b1,4,(DWORD)local_8,&local_4);
    VirtualProtect(&DAT_004c66c2,4,0x40,(PDWORD)&local_8);
    _DAT_004c66c2 = puVar2;
    VirtualProtect(&DAT_004c66c2,4,(DWORD)local_8,&local_4);
    VirtualProtect(&DAT_0084bc51,4,0x40,(PDWORD)&local_8);
    _DAT_0084bc51 = puVar2;
    VirtualProtect(&DAT_0084bc51,4,(DWORD)local_8,&local_4);
    VirtualProtect(&DAT_00856261,4,0x40,(PDWORD)&local_8);
    _DAT_00856261 = puVar2;
    VirtualProtect(&DAT_00856261,4,(DWORD)local_8,&local_4);
    VirtualProtect(&DAT_004c683b,4,0x40,(PDWORD)&local_8);
    _DAT_004c683b = puVar2;
    VirtualProtect(&DAT_004c683b,4,(DWORD)local_8,&local_4);
    VirtualProtect(&DAT_004c6464,4,0x40,(PDWORD)&local_8);
    _DAT_004c6464 = puVar1;
    VirtualProtect(&DAT_004c6464,4,(DWORD)local_8,&local_4);
    VirtualProtect(&DAT_004c66bd,4,0x40,(PDWORD)&local_8);
    _DAT_004c66bd = puVar1;
    VirtualProtect(&DAT_004c66bd,4,(DWORD)local_8,&local_4);
    local_10 = (param_1 & 0xff) << 8;
    local_10._0_3_ = CONCAT12((char)(param_1 >> 8),(undefined2)local_10);
    local_10 = CONCAT31((uint3)local_10 >> 8,0x68);
    local_10 = CONCAT13((char)(param_1 >> 0x10),(uint3)local_10);
    VirtualProtect(&DAT_004c58a5,5,0x40,(PDWORD)&local_8);
    _DAT_004c58a5 = local_10;
    DAT_004c58a9 = (undefined1)(param_1 >> 0x18);
    VirtualProtect(&DAT_004c58a5,5,(DWORD)local_8,&local_4);
  }
  return;
}


/* END FUNCTION 0x100a9e70 */

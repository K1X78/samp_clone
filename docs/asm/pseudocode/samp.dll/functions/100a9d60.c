/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a9d60
 * Name: FUN_100a9d60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a9d60(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *local_8;
  DWORD local_4;
  
  uVar2 = (int)param_1 + 4;
  param_1 = _malloc(uVar2);
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = param_1;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    local_8 = param_1;
    if (param_2 == 1) {
      FUN_100a9d10(0x1569777,&param_1,4);
      FUN_100a9d10(0x15649fa,&param_1,4);
      uVar4 = 0x1561160;
    }
    else {
      FUN_100a9d10(0x1569717,&param_1,4);
      FUN_100a9d10(0x156495a,&param_1,4);
      uVar4 = 0x156115c;
    }
    FUN_100a9d10(uVar4,&param_1,4);
    VirtualProtect(&DAT_0040619b,4,0x40,(PDWORD)&local_8);
    puVar3 = param_1;
    _DAT_0040619b = param_1;
    VirtualProtect(&DAT_0040619b,4,(DWORD)local_8,&local_4);
    VirtualProtect(&DAT_00405c3d,4,0x40,(PDWORD)&local_8);
    _DAT_00405c3d = puVar3;
    VirtualProtect(&DAT_00405c3d,4,(DWORD)local_8,&local_4);
  }
  return;
}


/* END FUNCTION 0x100a9d60 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a5d80
 * Name: FUN_100a5d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a5d80(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 uint param_5)

{
  uint dwSize;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD local_4;
  
  puVar2 = param_3;
  VirtualProtect(param_3,4,0x40,(PDWORD)&param_3);
  *puVar2 = param_2;
  VirtualProtect(puVar2,4,(DWORD)param_3,&local_4);
  dwSize = param_5;
  VirtualProtect(param_1,param_5,0x40,(PDWORD)&param_3);
  puVar2 = param_4;
  puVar3 = param_1;
  for (uVar1 = dwSize >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  for (uVar1 = dwSize & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  VirtualProtect(param_1,dwSize,(DWORD)param_3,&local_4);
  return;
}


/* END FUNCTION 0x100a5d80 */

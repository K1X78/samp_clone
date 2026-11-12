/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10002ec0
 * Name: FUN_10002ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10002ec0(undefined4 *param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)((int)param_1 + 0x181) = 0;
  *(undefined4 *)((int)param_1 + 0x2fe) = 0;
  *(undefined4 *)((int)param_1 + 0x306) = 0;
  *(undefined4 *)((int)param_1 + 0x302) = 0;
  *(undefined1 *)((int)param_1 + 0x1d3) = 0;
  *(undefined2 *)((int)param_1 + 0xfe) = 0xffff;
  param_1[0x75] = 0;
  *(undefined2 *)(param_1 + 199) = 0xffff;
  *(undefined2 *)(param_1 + 0x42) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x10a) = 0xffff;
  *(undefined2 *)(param_1 + 0x43) = 0xffff;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)((int)param_1 + 0xd5) = 0;
  *(undefined4 *)((int)param_1 + 0xd9) = 0;
  *(undefined4 *)((int)param_1 + 0xdd) = 0;
  *(undefined4 *)((int)param_1 + 0xe1) = 0;
  *(undefined4 *)((int)param_1 + 0xe5) = 0;
  *(undefined4 *)((int)param_1 + 0xe9) = 0;
  *(undefined4 *)((int)param_1 + 0xed) = 0;
  *(undefined2 *)((int)param_1 + 0xf1) = 0;
  *(undefined1 *)((int)param_1 + 0xf3) = 0;
  puVar3 = param_1;
  for (iVar2 = 0xd; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
  }
  *(undefined2 *)puVar3 = 0;
  puVar3 = (undefined4 *)((int)param_1 + 0x3a);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)((int)param_1 + 0x96);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined2 *)((int)param_1 + 0x189) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x18b) = 0xffff;
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x185) = DVar1;
  *(undefined1 *)((int)param_1 + 0x18d) = 0;
  DVar1 = GetTickCount();
  *(undefined4 *)((int)param_1 + 0x2de) = 0;
  *(undefined4 *)((int)param_1 + 0x2e2) = 0;
  param_1[0x44] = DVar1;
  return;
}


/* END FUNCTION 0x10002ec0 */

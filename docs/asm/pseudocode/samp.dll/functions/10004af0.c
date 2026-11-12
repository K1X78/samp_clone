/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10004af0
 * Name: FUN_10004af0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10004af0(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x147) = DVar1;
  DVar1 = GetTickCount();
  param_1[0x48] = DVar1;
  DVar1 = GetTickCount();
  param_1[0x49] = DVar1;
  param_1[0x75] = 0;
  *(undefined4 *)((int)param_1 + 0x2e6) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x2da) = DVar1;
  *(undefined4 *)((int)param_1 + 0x2fa) = 0;
  uVar2 = FUN_10001010();
  *param_1 = uVar2;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined2 *)((int)param_1 + 0x131) = 0;
  *(undefined4 *)((int)param_1 + 0x30e) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x133) = DVar1;
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x137) = DVar1;
  DVar1 = GetTickCount();
  param_1[0x4a] = DVar1;
  *(undefined4 *)((int)param_1 + 0x13b) = *(undefined4 *)((int)param_1 + 0x133);
  *(undefined4 *)((int)param_1 + 0x13f) = *(undefined4 *)((int)param_1 + 0x133);
  param_1[0x4b] = 0;
  *(undefined1 *)((int)param_1 + 0x313) = 0;
  param_1[0xc5] = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x30a) = 0;
  FUN_10002ec0();
  puVar3 = (undefined1 *)((int)param_1 + 0x18e);
  puVar4 = (undefined4 *)((int)param_1 + 0x19b);
  iVar5 = 0xd;
  do {
    *puVar3 = 0;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined1 *)(param_1 + 0x4c) = 0xff;
  return param_1;
}


/* END FUNCTION 0x10004af0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00409460
 * Name: FUN_00409460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
FUN_00409460(DWORD param_1,LPVOID param_2,DWORD param_3,LONG param_4,uint param_5)

{
  DWORD DVar1;
  LPVOID pvVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint local_4;
  
  DVar1 = param_1;
  local_4 = param_5 & 0x7fffffff;
  DVar3 = SetFilePointer(*(HANDLE *)(param_1 + 8),param_4,(PLONG)&local_4,0);
  if (DVar3 == 0xffffffff) {
    DVar3 = GetLastError();
    if (DVar3 != 0) {
      *(DWORD *)(DVar1 + 0x10) = DVar3;
      return 0xd;
    }
  }
  DVar3 = param_3;
  pvVar2 = param_2;
  BVar4 = ReadFile(*(HANDLE *)(DVar1 + 8),param_2,param_3,&param_1,(LPOVERLAPPED)0x0);
  if (BVar4 == 0) {
    DVar3 = GetLastError();
    *(DWORD *)(DVar1 + 0x10) = DVar3;
    return 0x10a;
  }
  uVar5 = 0;
  if (param_1 != DVar3) {
    uVar6 = DVar3 - param_1;
    puVar8 = (undefined4 *)(param_1 + (int)pvVar2);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    uVar5 = 0x20a;
  }
  return uVar5;
}


/* END FUNCTION 0x00409460 */

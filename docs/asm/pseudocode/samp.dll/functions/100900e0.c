/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100900e0
 * Name: FUN_100900e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100900e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  tagRECT local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x24);
  FUN_10085f40(0,param_3,0x3f333333);
  FUN_10086e20(iVar1,(LONG *)(param_1 + 0x184));
  local_20.top = *(LONG *)(param_1 + 0x188);
  local_20.left = *(LONG *)(param_1 + 0x184);
  local_20.right = *(LONG *)(param_1 + 0x18c);
  local_20.bottom = *(LONG *)(param_1 + 400);
  InflateRect(&local_20,-*(int *)(param_1 + 100),-*(int *)(param_1 + 100));
  if ((DAT_1018061c == 1) && (DAT_1017f6b0 != '\0')) {
    uVar2 = *(uint *)(param_1 + 0x174);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x178);
  }
  *(float *)(iVar1 + 0x5c) = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
  *(float *)(iVar1 + 0x60) = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
  *(float *)(iVar1 + 100) = (float)(uVar2 & 0xff) * 0.003921569;
  *(float *)(iVar1 + 0x68) = (float)(uVar2 >> 0x18) * 0.003921569;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  puVar3 = (undefined2 *)PTR_DAT_10140c9c;
  if (DAT_1017f6b0 == '\0') {
    puVar3 = &DAT_10140c7c;
  }
  FUN_10087260(puVar3,iVar1,&local_10,0xffffffff);
  FUN_1008ce50(puVar3,iVar1,&local_20,0,0xffffffff);
  return;
}


/* END FUNCTION 0x100900e0 */

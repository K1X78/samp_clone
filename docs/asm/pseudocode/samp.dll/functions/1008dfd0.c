/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008dfd0
 * Name: FUN_1008dfd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1008dfd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int dx;
  int dy;
  int iVar2;
  undefined4 local_14;
  tagRECT local_10;
  
  dx = 0;
  dy = 0;
  iVar2 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    iVar2 = 2;
  }
  else if (*(char *)(param_1 + 0x3c) == '\0') {
    iVar2 = 1;
  }
  else if (*(char *)(param_1 + 0x151) == '\0') {
    if (*(char *)(param_1 + 5) == '\0') {
      if (*(char *)(param_1 + 6) != '\0') {
        iVar2 = 3;
      }
    }
    else {
      iVar2 = 4;
      dx = -1;
      dy = -2;
    }
  }
  else {
    iVar2 = 5;
    dx = 1;
    dy = 2;
  }
  uVar1 = **(undefined4 **)(param_1 + 0x20);
  local_14 = 0;
  if (iVar2 != 5) {
    local_14 = 0x3f4ccccd;
  }
  local_10.left = *(LONG *)(param_1 + 0x3d);
  local_10.top = *(LONG *)(param_1 + 0x41);
  local_10.right = *(LONG *)(param_1 + 0x45);
  local_10.bottom = *(LONG *)(param_1 + 0x49);
  OffsetRect(&local_10,dx,dy);
  FUN_10085f40(iVar2,param_3,local_14);
  FUN_10085f40(iVar2,param_3,local_14);
  FUN_10086e20(uVar1,&local_10);
  FUN_1008cae0(param_1 + 0x4d,uVar1,&local_10,0,0xffffffff);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 4);
  FUN_10085f40(iVar2,param_3,local_14);
  FUN_10085f40(iVar2,param_3,local_14);
  FUN_10086e20(uVar1,&local_10);
  FUN_1008cae0(param_1 + 0x4d,uVar1,&local_10,0,0xffffffff);
  return;
}


/* END FUNCTION 0x1008dfd0 */

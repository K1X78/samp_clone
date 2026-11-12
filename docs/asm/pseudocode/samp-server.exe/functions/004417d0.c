/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004417d0
 * Name: FUN_004417d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_004417d0(short *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,int param_7
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  int iVar7;
  byte *local_34;
  int local_2c;
  
  iVar1 = *in_EAX;
  iVar7 = 0;
  local_34 = (byte *)0x0;
  local_2c = 0;
  pvVar4 = (void *)FUN_0041c720();
  if (param_7 < 0) {
    local_2c = FUN_00414e70((uint)*(byte *)(param_4 + 6),0x6f);
  }
  if (0 < param_4[5]) {
    do {
      iVar5 = FUN_0041a000((void *)0x0,iVar1,0x84);
      if (iVar5 != 0) {
        if (param_3 == 0) {
          *(int *)(iVar5 + 0x18) = param_6;
          *(undefined1 *)(iVar5 + 1) = 100;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar7 * 4);
          iVar3 = *(int *)(*(int *)(param_3 + 0x10) + 0x10);
          *(int *)(iVar5 + 0x18) = iVar2 + 1 + param_6;
          *(undefined1 *)(iVar5 + 1) = *(undefined1 *)(iVar3 + iVar2 * 0x18 + 0x16);
          piVar6 = FUN_004308f0(in_EAX);
          *(int **)(iVar5 + 0x14) = piVar6;
        }
      }
      if (param_5 == 0) {
        iVar5 = param_4[9];
      }
      else {
        iVar5 = *(int *)(param_5 + iVar7 * 4);
      }
      FUN_0041a000(*(void **)(*(int *)(*param_4 + 0x10) + iVar5 * 0x18),iVar1,0x1a);
      FUN_0041a0a0(in_EAX);
      local_34 = (byte *)FUN_0041a0d0(iVar1,(undefined4 *)local_34);
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_4[5]);
  }
  if ((param_2 == *param_4) && (0 < param_7)) {
    iVar7 = FUN_0041a000((void *)0x0,iVar1,0x84);
    iVar5 = FUN_0041a000((void *)0x0,iVar1,0x98);
    if ((iVar7 != 0) && (iVar5 != 0)) {
      *(int *)(iVar7 + 0x18) = param_6;
      *(undefined1 *)(iVar7 + 1) = 100;
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(param_1 + 0x10);
      *(undefined2 *)(iVar5 + 0x1c) = 0xffff;
    }
    FUN_0041a0a0(in_EAX);
    local_34 = (byte *)FUN_0041a0d0(iVar1,(undefined4 *)local_34);
    param_2 = extraout_ECX;
  }
  FUN_00424ba0(param_2);
  piVar6 = FUN_00440af0(in_EAX,param_1,local_34,(undefined4 *)0x0,0);
  if ((0 < param_7) && ((char)param_4[6] == '\0')) {
    if ((int *)in_EAX[0x6a] != (int *)0x0) {
      in_EAX = (int *)in_EAX[0x6a];
    }
    *(undefined1 *)((int)in_EAX + 0x159) = 1;
  }
  FUN_00414e70((uint)*(byte *)(param_4 + 6),0x6e);
  if (piVar6 != (int *)0x0) {
    FUN_004174c0(piVar6);
  }
  FUN_004158d0(iVar1,(int)local_34);
  if (local_2c != 0) {
    FUN_0040d680(pvVar4);
  }
  return;
}


/* END FUNCTION 0x004417d0 */

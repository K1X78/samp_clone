/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004327a0
 * Name: FUN_004327a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004327a0(undefined1 *param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  void *this;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int local_18;
  int local_10;
  int local_4;
  
  iVar1 = in_EAX[3];
  *param_1 = 1;
  FUN_0040eb00();
  piVar5 = *(int **)(param_1 + 0x20);
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar2 = 0;
      iVar6 = *piVar5;
      piVar3 = *(int **)(iVar6 + 0x10);
      local_4 = 0;
      if (piVar3 == (int *)0x0) {
        local_18 = 0;
      }
      else {
        local_18 = *piVar3;
        iVar2 = FUN_0040ec60((int)in_EAX);
        FUN_00420330(this,iVar2,0);
        iVar6 = extraout_ECX;
      }
      if (-1 < piVar5[3]) {
        local_4 = FUN_00414e90(iVar6);
        FUN_0041c200(piVar5[3],local_4,(char *)0x1,iVar2);
      }
      if ((*(byte *)(piVar5[1] + 3) & 8) != 0) {
        puVar4 = (undefined4 *)piVar3[3];
        piVar3 = (int *)0x0;
        iVar6 = 0;
        do {
          if (local_18 <= iVar6) {
            if (piVar3 == (int *)0x0) {
              piVar3 = *(int **)(*in_EAX + 0x2c);
            }
            break;
          }
          piVar3 = FUN_004300f0((char *)*puVar4);
          iVar6 = iVar6 + 1;
          puVar4 = puVar4 + 5;
        } while (piVar3 == (int *)0x0);
        FUN_004197c0(0,0,0x11,(char *)piVar3,-4);
      }
      FUN_004197c0(iVar2,0,0x74,(char *)piVar5[1],-5);
      FUN_0040d660(extraout_ECX_00,(undefined1)local_18);
      thunk_FUN_0040ea60(local_18);
      FUN_0040ec90(iVar2);
      if (local_4 != 0) {
        FUN_0040d4e0(iVar1,local_4);
        FUN_0040eb00();
      }
      local_10 = local_10 + 1;
      piVar5 = piVar5 + 4;
    } while (local_10 < *(int *)(param_1 + 0x24));
  }
  FUN_0040eb00();
  local_10 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      FUN_00415dc0();
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_1 + 0x1c));
  }
  *param_1 = 0;
  FUN_0040eb00();
  return;
}


/* END FUNCTION 0x004327a0 */

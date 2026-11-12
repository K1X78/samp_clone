/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042c1b0
 * Name: FUN_0042c1b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x0042c276) */

uint __cdecl FUN_0042c1b0(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  void *in_EAX;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 extraout_ECX;
  void *pvVar5;
  int local_8;
  void *local_4;
  
  puVar1 = *(uint **)(param_1 + 4);
  local_8 = 0;
  if (puVar1[2] != 0) {
    return 0x106;
  }
  uVar2 = FUN_004238d0(in_EAX,&local_8);
  if (uVar2 == 0) {
    uVar2 = FUN_0042c150(in_EAX,(int *)0x0);
    if (uVar2 != 0) {
      FUN_00427610();
      return uVar2;
    }
    *param_2 = 0;
    if (in_EAX < (void *)0x2) {
      FUN_0041f920(9);
      FUN_00427610();
      uVar2 = 0;
    }
    else {
      if ((char)puVar1[5] == '\0') {
        FUN_00428f50();
        FUN_00427610();
        return 0;
      }
      FUN_0040cff0(4,&local_4);
      if (in_EAX == local_4) {
        FUN_00428f50();
        FUN_00427610();
LAB_0042c311:
        iVar3 = DAT_004ca204 / (int)(uint)*(ushort *)((int)puVar1 + 0x16);
        pvVar5 = local_4;
        do {
          do {
            pvVar5 = (void *)((int)pvVar5 + -1);
          } while (pvVar5 == (void *)(iVar3 + 1));
          pvVar4 = (void *)FUN_0040c740((int)pvVar5);
        } while (pvVar4 == pvVar5);
        uVar2 = FUN_00423a20(4);
        return uVar2;
      }
      FUN_00427610();
      uVar2 = FUN_004238d0(local_4,&local_8);
      if (uVar2 == 0) {
        uVar2 = FUN_00428060(extraout_ECX,0,puVar1,'\x01',(void *)0x0,(int)in_EAX);
        FUN_00427610();
        if (uVar2 != 0) {
          return uVar2;
        }
        local_8 = 0;
        uVar2 = FUN_004238d0(local_4,&local_8);
        FUN_00428f50();
        FUN_00427610();
        if (uVar2 == 0) {
          *param_2 = local_4;
          goto LAB_0042c311;
        }
      }
    }
  }
  return uVar2;
}


/* END FUNCTION 0x0042c1b0 */

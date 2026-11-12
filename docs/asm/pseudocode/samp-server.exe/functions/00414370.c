/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00414370
 * Name: FUN_00414370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00414370(int param_1)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_4;
  
  iVar4 = *(int *)(in_EAX + 100);
  if ((iVar4 < param_1) && (*(char *)(in_EAX + 6) != '\0')) {
    iVar2 = FUN_00414010(&local_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_004127c0(param_1 * 0x30);
    if (iVar2 == 0) {
      return 7;
    }
    puVar6 = (undefined4 *)(iVar4 * 0x30 + iVar2);
    puVar5 = puVar6;
    for (iVar3 = ((param_1 - iVar4) * 3 & 0xfffffffU) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(int *)(in_EAX + 0x60) = iVar2;
    if (iVar4 < param_1) {
      puVar6 = puVar6 + 6;
      do {
        puVar6[-1] = local_4;
        if (**(int **)(in_EAX + 0x3c) == 0) {
LAB_00414425:
          puVar6[-6] = *(undefined4 *)(in_EAX + 0x78);
          puVar6[-5] = 0;
        }
        else {
          iVar2 = *(int *)(in_EAX + 0x4c);
          if ((iVar2 < 0) || ((iVar2 < 1 && (*(int *)(in_EAX + 0x48) == 0)))) goto LAB_00414425;
          puVar6[-6] = *(int *)(in_EAX + 0x48);
          puVar6[-5] = iVar2;
        }
        *puVar6 = *(undefined4 *)(in_EAX + 0x30);
        iVar2 = FUN_00413460(local_4);
        puVar6[-2] = iVar2;
        if (iVar2 == 0) {
          return 7;
        }
        bVar1 = FUN_0040b4a0(in_EAX);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          FUN_0040c1e0(*(int *)(in_EAX + 0xac));
        }
        iVar4 = iVar4 + 1;
        *(int *)(in_EAX + 100) = iVar4;
        puVar6 = puVar6 + 0xc;
      } while (iVar4 < param_1);
    }
  }
  return 0;
}


/* END FUNCTION 0x00414370 */

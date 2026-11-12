/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401410
 * Name: FUN_00401410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401410(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_2 != (int *)0x0) {
    if (param_1 == (int *)0x0) {
      return 0x19;
    }
    if (-1 < (char)((uint)param_2[10] >> 8)) {
      return 0x16;
    }
    iVar1 = *param_2;
    if (*(short *)(iVar1 + 4) == -0xe20) {
      if ((*(char *)(iVar1 + 6) < '\t') && ('\x05' < *(char *)(iVar1 + 7))) {
        *param_1 = iVar1;
        param_1[7] = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10);
        param_1[9] = (*(int *)(iVar1 + 0x18) - *(int *)(iVar1 + 0x10)) + -4;
        param_1[6] = param_1[7];
        param_1[8] = param_1[9];
        if (param_1[2] == 0) {
          param_1[2] = param_2[2];
        }
        if (param_1[3] == 0) {
          param_1[3] = param_2[3];
        }
        param_1[10] = param_2[10];
        param_1[1] = (int)param_3;
        puVar4 = (undefined4 *)param_2[1];
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(*(int *)(iVar1 + 0x10) + *param_2);
        }
        uVar2 = *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10);
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *param_3 = *puVar4;
          puVar4 = puVar4 + 1;
          param_3 = param_3 + 1;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)param_3 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          param_3 = (undefined4 *)((int)param_3 + 1);
        }
        *(undefined4 *)(param_1[9] + param_1[1]) = 0;
        return 0;
      }
      return 0x12;
    }
  }
  return 0x11;
}


/* END FUNCTION 0x00401410 */

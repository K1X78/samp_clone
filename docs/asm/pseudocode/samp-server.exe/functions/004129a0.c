/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004129a0
 * Name: FUN_004129a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_004129a0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int extraout_EDX;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)0x0;
  if (*(char *)(param_3 + 0x1e) == '\0') {
    if (param_4 == (undefined4 *)0x0) {
      puVar5 = FUN_00412930(param_2);
      return puVar5;
    }
    iVar2 = FUN_00408070(param_3);
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)FUN_004128e0(param_4,extraout_EDX);
      if (puVar5 == (undefined4 *)0x0) {
        *(undefined1 *)(param_3 + 0x1e) = 1;
      }
    }
    else {
      if (extraout_EDX <= (int)(uint)*(ushort *)(param_3 + 0xe8)) {
        return param_4;
      }
      puVar3 = FUN_00412930(extraout_EDX);
      puVar5 = (undefined4 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        uVar1 = *(ushort *)(param_3 + 0xe8);
        puVar5 = puVar3;
        for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = *param_4;
          param_4 = param_4 + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)param_4;
          param_4 = (undefined4 *)((int)param_4 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        FUN_00408130(param_3);
        return puVar3;
      }
    }
  }
  return puVar5;
}


/* END FUNCTION 0x004129a0 */

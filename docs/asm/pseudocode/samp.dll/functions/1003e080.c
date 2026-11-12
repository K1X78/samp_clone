/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003e080
 * Name: FUN_1003e080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1003e080(int param_1,undefined4 param_2,undefined2 param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  ushort uVar5;
  undefined4 *puVar6;
  
  cVar2 = FUN_100331a0(&DAT_1013c7cc);
  if (cVar2 != '\0') {
    bVar1 = true;
    uVar5 = 0;
    if (*(short *)(param_1 + 7) != 0) {
      do {
        if (*(char *)((uint)uVar5 * 0xc69 + *(int *)(param_1 + 0x334)) != '\0') {
          puVar3 = (undefined4 *)FUN_10047490(1);
          if (bVar1) {
            puVar6 = &DAT_10156d10;
            for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar6 = puVar6 + 1;
            }
            bVar1 = false;
          }
          else {
            FUN_10037b20(puVar3);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1 + 7));
    }
    return &DAT_10156d10;
  }
  iVar4 = FUN_1003c2a0(param_2,param_3,0,0);
  if ((iVar4 != 0) && (*(char *)(param_1 + 4) == '\0')) {
    puVar3 = (undefined4 *)FUN_10047490(1);
    return puVar3;
  }
  return (undefined4 *)0x0;
}


/* END FUNCTION 0x1003e080 */

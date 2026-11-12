/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0042a350
 * Name: FUN_0042a350
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0042a350(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_68;
  undefined1 auStack_64 [100];
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  FUN_0040c2c0();
  iStack_68 = FUN_0040b940();
  uStack_9c = *puVar1;
  puStack_a0 = puVar1;
  uStack_98 = FUN_0040ca90();
  iStack_90 = param_3;
  iStack_8c = 0;
  iStack_88 = 0;
  *param_4 = 0;
  if (uStack_98 != 0) {
    iStack_94 = FUN_004125b0(uStack_98 * 4 + 4);
    if (iStack_94 != 0) {
      uVar5 = 0;
      do {
        *(undefined4 *)(iStack_94 + uVar5 * 4) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 <= uStack_98);
      uVar6 = 1;
      uVar5 = DAT_004ca204 / (int)(uint)*(ushort *)((int)puVar1 + 0x16) + 1;
      if (uVar5 <= uStack_98) {
        *(undefined4 *)(iStack_94 + uVar5 * 4) = 1;
      }
      FUN_004081c0(auStack_64,100,20000);
      pcVar7 = "Main freelist: ";
      iVar3 = FUN_00408f80();
      FUN_00408f80();
      FUN_00429b20(&puStack_a0,1,iVar3,pcVar7);
      iVar3 = 0;
      if (0 < param_2) {
        do {
          if (iStack_90 == 0) break;
          iVar2 = *(int *)(in_EAX + iVar3 * 4);
          if (iVar2 != 0) {
            if ((*(char *)(puVar1 + 5) != '\0') && (1 < iVar2)) {
              FUN_00429a90((int)&puStack_a0);
            }
            FUN_00429d00((int *)&puStack_a0,*(void **)(in_EAX + iVar3 * 4),"List of tree roots: ",
                         (uint *)0x0,(uint *)0x0);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_2);
      }
      if (uStack_98 != 0) {
        do {
          if (iStack_90 == 0) break;
          if ((*(int *)(iStack_94 + uVar6 * 4) == 0) &&
             ((uVar5 = FUN_0040c740(uVar6), uVar5 != uVar6 || (*(char *)(puVar1 + 5) == '\0')))) {
            FUN_004195e0((undefined **)"Page %d is never used");
          }
          if (((*(int *)(iStack_94 + uVar6 * 4) != 0) &&
              (uVar5 = FUN_0040c740(uVar6), uVar5 == uVar6)) && (*(char *)(puVar1 + 5) != '\0')) {
            FUN_004195e0((undefined **)"Pointer map page %d is referenced");
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 <= uStack_98);
      }
      iVar3 = FUN_0040b940();
      if (iStack_68 != iVar3) {
        FUN_0040b940();
        FUN_004195e0((undefined **)"Outstanding page count goes from %d to %d during this analysis")
        ;
      }
      FUN_0040c340();
      FUN_004080d0(iStack_94);
      if (iStack_88 == 0) {
        *param_4 = iStack_8c;
        if (iStack_8c == 0) {
          FUN_004081a0();
        }
        uVar4 = FUN_00412be0();
        return uVar4;
      }
      FUN_004081a0();
      *param_4 = iStack_8c + 1;
      return 0;
    }
    *param_4 = 1;
    iStack_94 = 0;
  }
  FUN_0040c340();
  return 0;
}


/* END FUNCTION 0x0042a350 */

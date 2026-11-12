/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006d640
 * Name: FUN_1006d640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006d640(int *param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  float10 fVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  puVar8 = local_8;
  if (*param_1 != 0) {
    puVar6 = local_4;
    FUN_10001010(puVar6,local_8);
    uVar1 = FUN_100af1d0(puVar6,puVar8);
    bVar4 = (uVar1 & 8) == 0;
    if (bVar4) {
      (**(code **)(*DAT_102ac9d0 + 0x30))(DAT_102ac9d0,1);
      uVar7 = 3;
    }
    else {
      uVar7 = 0;
    }
    FUN_100a0530(uVar7,!bVar4);
    *(undefined2 *)(param_1 + 1) = 0xffff;
    if (*(int *)(DAT_102aca3c + 0x61) != 0) {
      uVar1 = FUN_1006d450();
      uVar3 = (ushort)uVar1;
      if ((((uVar3 != 0xffff) && (uVar3 < 0x835)) &&
          (*(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14) + 4 + (uVar1 & 0xffff) * 4) != 0
          )) && ((iVar2 = FUN_10002e10(uVar1), iVar2 != 0 &&
                 (fVar5 = (float10)FUN_1009efd0(),
                 fVar5 < (float10)150.0 != (fVar5 == (float10)150.0))))) {
        *(ushort *)(param_1 + 1) = uVar3;
        FUN_1006d4a0();
      }
    }
  }
  return;
}


/* END FUNCTION 0x1006d640 */

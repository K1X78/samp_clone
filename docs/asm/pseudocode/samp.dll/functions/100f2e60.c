/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f2e60
 * Name: FUN_100f2e60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100f2e60(int param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_EDI;
  undefined1 local_28 [4];
  char *local_24;
  char *local_20;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_100f1a40(local_14,*(int *)(in_EAX + 4) + 1,*(undefined4 *)(in_EAX + 8));
  iVar2 = FUN_100de830(param_2,"rsaEncryption");
  if (iVar2 != 0) {
    uVar3 = FUN_100f1a40(local_28,local_10,local_c);
    cVar1 = *local_24;
    for (pcVar4 = local_24; (cVar1 == '\0' && (pcVar4 < local_20)); pcVar4 = pcVar4 + 1) {
      cVar1 = pcVar4[1];
    }
    uVar5 = ((int)local_20 - (int)pcVar4) * 8;
    if (uVar5 != 0) {
      for (cVar1 = *pcVar4; -1 < cVar1; cVar1 = cVar1 << 1) {
        uVar5 = uVar5 - 1;
      }
    }
    if (0x20 < uVar5) {
      local_24 = pcVar4;
    }
    if (unaff_EBX == 0) {
      FUN_100d8ae0();
    }
    if ((*(int *)(unaff_EDI + 0x440) != 0) &&
       (iVar2 = FUN_100cd220(&DAT_1012a610,uVar5), iVar2 != 0)) {
      FUN_100cf340();
      (*(code *)PTR__free_101554bc)(iVar2);
    }
    FUN_100f2cc0();
    FUN_100f1a40(local_28,uVar3,local_c);
    FUN_100f2cc0();
    return;
  }
  iVar2 = FUN_100de830(param_2,&DAT_1012a510);
  if (iVar2 != 0) {
    uVar3 = FUN_100f1a40(local_28,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_100f2cc0();
    uVar3 = FUN_100f1a40(local_28,uVar3,*(undefined4 *)(param_1 + 8));
    FUN_100f2cc0();
    FUN_100f1a40(local_28,uVar3,*(undefined4 *)(param_1 + 8));
    FUN_100f2cc0();
    FUN_100f2cc0();
    return;
  }
  iVar2 = FUN_100de830(param_2,"dhpublicnumber");
  if (iVar2 != 0) {
    FUN_100f1a40(local_28,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_100f2cc0();
    FUN_100f1a40(local_28,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_100f2cc0();
    FUN_100f2cc0();
  }
  return;
}


/* END FUNCTION 0x100f2e60 */

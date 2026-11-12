/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c0950
 * Name: FUN_100c0950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100c0950(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int in_EAX;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(in_EAX + 0x48);
  if ((uVar1 != 0) && (uVar1 < 0x112)) {
    uVar2 = *(uint *)(in_EAX + 0x28);
    uVar5 = *(uint *)(in_EAX + 0x24);
    uVar3 = *(uint *)(in_EAX + 0x38);
    iVar4 = *(int *)(in_EAX + 0x14);
    uVar6 = uVar1;
    if (param_1 - uVar5 < uVar1) {
      uVar6 = param_1 - uVar5;
    }
    if ((*(int *)(in_EAX + 0x30) == 0) &&
       ((uint)(*(int *)(in_EAX + 0xc) - *(int *)(in_EAX + 0x2c)) <= uVar6)) {
      *(undefined4 *)(in_EAX + 0x30) = *(undefined4 *)(in_EAX + 0xc);
    }
    *(uint *)(in_EAX + 0x2c) = *(int *)(in_EAX + 0x2c) + uVar6;
    *(uint *)(in_EAX + 0x48) = uVar1 - uVar6;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)(uVar5 + iVar4) =
           *(undefined1 *)(((-(uint)(uVar5 < uVar3) & uVar2) - uVar3) + uVar5 + iVar4);
      uVar5 = uVar5 + 1;
    }
    *(uint *)(in_EAX + 0x24) = uVar5;
  }
  return;
}


/* END FUNCTION 0x100c0950 */

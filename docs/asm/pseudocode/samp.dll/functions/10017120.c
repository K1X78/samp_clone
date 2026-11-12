/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10017120
 * Name: FUN_10017120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10017120(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  puVar4 = *(ushort **)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  uVar1 = *param_1;
  if (uVar1 == *puVar4) {
    if (*(uint *)(puVar4 + 0xd) < 0x10) {
      puVar4 = puVar4 + 3;
    }
    else {
      puVar4 = *(ushort **)(puVar4 + 3);
    }
  }
  else if ((uVar1 < 0x3ed) && (iVar2 = *(int *)(puVar4 + (uint)uVar1 * 2 + 0x13), iVar2 != 0)) {
    if (*(uint *)(iVar2 + 0x28) < 0x10) {
      puVar4 = (ushort *)(iVar2 + 0x14);
    }
    else {
      puVar4 = *(ushort **)(iVar2 + 0x14);
    }
  }
  else {
    puVar4 = (ushort *)0x0;
  }
  uVar3 = FUN_100a6f70(uVar1);
  FUN_10067a90(puVar4,uVar3 >> 8 | 0xff000000,param_2);
  return;
}


/* END FUNCTION 0x10017120 */

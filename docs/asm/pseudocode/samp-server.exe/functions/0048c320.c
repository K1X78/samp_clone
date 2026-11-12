/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048c320
 * Name: FUN_0048c320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0048c320(ushort *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(in_EAX + (uint)(*param_1 >> 4) * 4);
  iVar1 = *(int *)(in_EAX + ((param_1[1] ^ 0x7f0) >> 4) * 4);
  iVar2 = *(int *)(in_EAX + ((*param_1 ^ 0x7f0) >> 4) * 4);
  iVar3 = *(int *)(in_EAX + (uint)(param_1[1] >> 4) * 4);
  uVar6 = 0;
  do {
    if (param_3 <= uVar6) {
      return;
    }
    iVar4 = FUN_0048c1a0(3,uVar6);
    *(int *)(param_4 + uVar6 * 4) = iVar4 + iVar5;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  while( true ) {
    if (0xf < uVar6) {
      for (; uVar6 < param_3; uVar6 = uVar6 + 1) {
        iVar5 = FUN_0048c1a0(8,uVar6 - 0x10);
        *(int *)(param_4 + uVar6 * 4) = iVar5 + iVar1 + iVar2;
      }
      return;
    }
    if (param_3 <= uVar6) break;
    iVar5 = FUN_0048c1a0(3,uVar6 - 8);
    *(int *)(param_4 + uVar6 * 4) = iVar5 + iVar3 + iVar2;
    uVar6 = uVar6 + 1;
  }
  return;
}


/* END FUNCTION 0x0048c320 */

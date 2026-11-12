/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004513e0
 * Name: FUN_004513e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004513e0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  sbyte sVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar4 = param_2 >> 5;
  if (uVar4 != 0) {
    iVar3 = 0xf - uVar4;
    puVar7 = param_1;
    if (-1 < iVar3) {
      puVar5 = param_1 + iVar3 + uVar4;
      do {
        *puVar5 = param_1[iVar3];
        iVar3 = iVar3 + -1;
        puVar5 = puVar5 + -1;
      } while (-1 < iVar3);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  if ((param_2 & 0x1f) != 0) {
    uVar6 = 0;
    sVar2 = (sbyte)(param_2 & 0x1f);
    uVar4 = 0;
    do {
      uVar1 = param_1[uVar6];
      param_1[uVar6] = uVar1 << sVar2 | uVar4;
      uVar6 = uVar6 + 1;
      uVar4 = uVar1 >> (0x20U - sVar2 & 0x1f);
    } while (uVar6 < 0x10);
  }
  return;
}


/* END FUNCTION 0x004513e0 */

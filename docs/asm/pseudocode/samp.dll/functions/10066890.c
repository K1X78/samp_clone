/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10066890
 * Name: FUN_10066890
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10066890(int param_1,ushort param_2,char *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_2 < 0x3ec) {
    puVar1 = (undefined4 *)((uint)param_2 * 0x118 + param_1);
    puVar7 = puVar1;
    for (iVar6 = 0x46; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    pcVar3 = param_3;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if ((uint)((int)pcVar3 - (int)(param_3 + 1)) < 0x91) {
      iVar6 = (uint)param_2 * 0x118 - (int)param_3;
      do {
        cVar2 = *param_3;
        param_3[iVar6 + 4 + param_1] = cVar2;
        param_3 = param_3 + 1;
      } while (cVar2 != '\0');
      uVar4 = FUN_100171a0(puVar1 + 1,0x24,0xc);
      puVar1[0x45] = uVar4;
      puVar1[0x43] = param_4 >> 8 | 0xff000000;
      puVar1[0x44] = param_5;
      puVar1[0x42] = param_6;
      DVar5 = GetTickCount();
      puVar1[0x41] = DVar5;
      *puVar1 = 1;
    }
  }
  return;
}


/* END FUNCTION 0x10066890 */

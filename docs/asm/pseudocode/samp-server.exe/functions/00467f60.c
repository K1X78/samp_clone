/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00467f60
 * Name: FUN_00467f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_00467f60(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  char *pcVar7;
  char local_4000 [16380];
  undefined4 uStack_4;
  
  uStack_4 = 0x467f6a;
  if (param_4 == 0) {
    if (0 < param_2) {
      pbVar6 = (byte *)(param_1 + 0xe);
      do {
        _sprintf(local_4000,
                 "+%04X: %02X %02X %02X %02X   %02X %02X %02X %02X   %02X %02X %02X %02X   %02X %02X %02X %02X\r\n"
                 ,pbVar6 + (-0xe - param_1),(uint)pbVar6[-0xe],(uint)pbVar6[-0xd],(uint)pbVar6[-0xc]
                 ,(uint)pbVar6[-0xb],(uint)pbVar6[-10],(uint)pbVar6[-9],(uint)pbVar6[-8],
                 (uint)pbVar6[-7],(uint)pbVar6[-6],(uint)pbVar6[-5],(uint)pbVar6[-4],
                 (uint)pbVar6[-3],(uint)pbVar6[-2],(uint)pbVar6[-1],(uint)*pbVar6,(uint)pbVar6[1]);
        pcVar2 = local_4000;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar2 - (int)local_4000;
        pcVar2 = (char *)(param_3 + -1);
        do {
          pcVar7 = pcVar2 + 1;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar7 != '\0');
        pcVar7 = local_4000;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar2 = pcVar2 + 4;
        }
        pbVar6 = pbVar6 + 0x10;
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar2 = pcVar2 + 1;
        }
      } while ((int)(pbVar6 + (-0xe - param_1)) < param_2);
    }
  }
  else if (0 < param_2) {
    puVar5 = (undefined4 *)(param_1 + 8);
    do {
      _sprintf(local_4000,"+%04X: 0x%08X   0x%08X   0x%08X   0x%08X\r\n",
               (int)puVar5 + (-8 - param_1),puVar5[-2],puVar5[-1],*puVar5,puVar5[1]);
      pcVar2 = local_4000;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = (int)pcVar2 - (int)local_4000;
      pcVar2 = (char *)(param_3 + -1);
      do {
        pcVar7 = pcVar2 + 1;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = local_4000;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar2 = pcVar2 + 4;
      }
      puVar5 = puVar5 + 4;
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar2 = pcVar2 + 1;
      }
    } while ((int)puVar5 + (-8 - param_1) < param_2);
    return;
  }
  return;
}


/* END FUNCTION 0x00467f60 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002a070
 * Name: FUN_1002a070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_1002a070(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar2 = param_2 / 3;
  iVar5 = param_2 % 3;
  iVar3 = 0;
  iVar7 = 0;
  iVar4 = 0;
  if (0 < iVar2) {
    pbVar6 = (byte *)(param_1 + 2);
    param_2 = iVar2;
    do {
      *(undefined1 *)(iVar3 + param_3) = *(undefined1 *)(((int)(char)pbVar6[-2] >> 2) + param_4);
      iVar4 = iVar3 + 1;
      iVar7 = iVar7 + 1;
      if (iVar7 % 0x4c == 0) {
        *(undefined1 *)(iVar4 + param_3) = 0xd;
        *(undefined1 *)(iVar3 + 2 + param_3) = 10;
        iVar4 = iVar3 + 3;
        iVar7 = 0;
      }
      *(undefined1 *)(iVar4 + param_3) =
           *(undefined1 *)
            ((((int)(char)pbVar6[-1] >> 4 | (int)(char)pbVar6[-2] << 4) & 0x3fU) + param_4);
      iVar3 = iVar4 + 1;
      iVar7 = iVar7 + 1;
      if (iVar7 % 0x4c == 0) {
        *(undefined1 *)(iVar3 + param_3) = 0xd;
        *(undefined1 *)(iVar4 + 2 + param_3) = 10;
        iVar3 = iVar4 + 3;
        iVar7 = 0;
      }
      *(undefined1 *)(iVar3 + param_3) =
           *(undefined1 *)
            ((((int)(char)*pbVar6 >> 6 | (int)(char)pbVar6[-1] << 2) & 0x3fU) + param_4);
      iVar4 = iVar3 + 1;
      iVar7 = iVar7 + 1;
      if (iVar7 % 0x4c == 0) {
        *(undefined1 *)(iVar4 + param_3) = 0xd;
        *(undefined1 *)(iVar3 + 2 + param_3) = 10;
        iVar4 = iVar3 + 3;
        iVar7 = 0;
      }
      *(undefined1 *)(iVar4 + param_3) = *(undefined1 *)((*pbVar6 & 0x3f) + param_4);
      iVar3 = iVar4 + 1;
      iVar7 = iVar7 + 1;
      if (iVar7 % 0x4c == 0) {
        *(undefined1 *)(iVar3 + param_3) = 0xd;
        *(undefined1 *)(iVar4 + 2 + param_3) = 10;
        iVar3 = iVar4 + 3;
        iVar7 = 0;
      }
      pbVar6 = pbVar6 + 3;
      param_2 = param_2 + -1;
      iVar4 = iVar2;
    } while (param_2 != 0);
  }
  if (iVar5 == 1) {
    *(undefined1 *)(iVar3 + param_3) =
         *(undefined1 *)(((int)*(char *)(param_1 + iVar4 * 3) >> 2) + param_4);
    iVar4 = iVar3 + 1;
    if ((iVar7 + 1) % 0x4c == 0) {
      *(undefined1 *)(iVar4 + param_3) = 0xd;
      *(undefined1 *)(iVar3 + 2 + param_3) = 10;
      iVar4 = iVar3 + 3;
    }
    *(undefined1 *)(iVar4 + param_3) = 0x3d;
LAB_1002a26f:
    iVar4 = iVar4 + 1;
  }
  else {
    if (iVar5 != 2) goto LAB_1002a275;
    pcVar1 = (char *)(param_1 + iVar4 * 3);
    *(undefined1 *)(iVar3 + param_3) = *(undefined1 *)(((int)*pcVar1 >> 2) + param_4);
    iVar4 = iVar3 + 1;
    iVar7 = iVar7 + 1;
    if (iVar7 % 0x4c == 0) {
      *(undefined1 *)(iVar4 + param_3) = 0xd;
      *(undefined1 *)(iVar3 + 2 + param_3) = 10;
      iVar4 = iVar3 + 3;
      iVar7 = 0;
    }
    *(undefined1 *)(iVar4 + param_3) =
         *(undefined1 *)((((int)pcVar1[1] >> 4 | (int)*pcVar1 << 4) & 0x3fU) + param_4);
    iVar2 = iVar4 + 1;
    iVar7 = iVar7 + 1;
    if (iVar7 % 0x4c == 0) {
      *(undefined1 *)(iVar2 + param_3) = 0xd;
      *(undefined1 *)(iVar4 + 2 + param_3) = 10;
      iVar2 = iVar4 + 3;
      iVar7 = 0;
    }
    *(undefined1 *)(iVar2 + param_3) = *(undefined1 *)(param_4 + ((byte)pcVar1[1] & 0xf) * 4);
    iVar4 = iVar2 + 1;
    if ((iVar7 + 1) % 0x4c == 0) {
      *(undefined1 *)(iVar4 + param_3) = 0xd;
      iVar4 = iVar2 + 2;
      *(undefined1 *)(iVar4 + param_3) = 10;
      goto LAB_1002a26f;
    }
  }
  *(undefined1 *)(iVar4 + param_3) = 0x3d;
  iVar3 = iVar4 + 1;
LAB_1002a275:
  *(undefined1 *)(iVar3 + param_3) = 0xd;
  *(undefined1 *)(iVar3 + 1 + param_3) = 10;
  *(undefined1 *)(iVar3 + 2 + param_3) = 0;
  return iVar3 + 2;
}


/* END FUNCTION 0x1002a070 */

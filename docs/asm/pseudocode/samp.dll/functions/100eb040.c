/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100eb040
 * Name: FUN_100eb040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100eb040(undefined4 param_1,byte *param_2,uint param_3,int *param_4,int *param_5,int param_6)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  char *pcStack_4;
  
  uVar3 = param_3;
  if (param_3 == 0) {
    pbVar2 = param_2;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
    uVar3 = (int)pbVar2 - (int)(param_2 + 1);
  }
  iVar4 = (*(code *)PTR__malloc_101554b8)(uVar3 + 1);
  iVar7 = 0;
  if (iVar4 == 0) {
    return 0x1b;
  }
  while( true ) {
    if (uVar3 == 0) {
      *(undefined1 *)(iVar4 + iVar7) = 0;
      if (param_5 != (int *)0x0) {
        *param_5 = iVar7;
      }
      *param_4 = iVar4;
      return 0;
    }
    bVar1 = *param_2;
    if ((((bVar1 == 0x25) && (2 < uVar3)) && (iVar5 = _isxdigit((uint)param_2[1]), iVar5 != 0)) &&
       (iVar5 = _isxdigit((uint)param_2[2]), iVar5 != 0)) {
      param_3._0_3_ = (uint3)*(ushort *)(param_2 + 1);
      uVar6 = _strtoul((char *)&param_3,&pcStack_4,0x10);
      bVar1 = FUN_100d99d0(uVar6);
      param_2 = param_2 + 2;
      uVar3 = uVar3 - 2;
    }
    if ((param_6 != 0) && (bVar1 < 0x20)) break;
    *(byte *)(iVar4 + iVar7) = bVar1;
    iVar7 = iVar7 + 1;
    param_2 = param_2 + 1;
    uVar3 = uVar3 - 1;
  }
  (*(code *)PTR__free_101554bc)(iVar4);
  return 3;
}


/* END FUNCTION 0x100eb040 */

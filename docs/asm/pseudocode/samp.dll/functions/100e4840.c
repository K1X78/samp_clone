/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e4840
 * Name: FUN_100e4840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e4840(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
LAB_100e4864:
      bVar1 = *param_1;
      while ((bVar1 != 0 && (iVar2 = _isspace((uint)*param_1), iVar2 != 0))) {
        bVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
LAB_100e4888:
      pbVar3 = (byte *)_strchr((char *)param_1,0xd);
      if (((pbVar3 == (byte *)0x0) &&
          (pbVar3 = (byte *)_strchr((char *)param_1,10), pbVar3 == (byte *)0x0)) &&
         (pbVar3 = (byte *)_strchr((char *)param_1,0), pbVar3 == (byte *)0x0)) {
        return;
      }
      while ((param_1 < pbVar3 && (iVar2 = _isspace((uint)*pbVar3), iVar2 != 0))) {
        pbVar3 = pbVar3 + -1;
      }
      pbVar5 = pbVar3 + (1 - (int)param_1);
      pbVar3 = (byte *)(*(code *)PTR__malloc_101554b8)(pbVar3 + (2 - (int)param_1));
      if (pbVar3 != (byte *)0x0) {
        pbVar6 = pbVar3;
        for (uVar4 = (uint)pbVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pbVar6 = *(undefined4 *)param_1;
          param_1 = param_1 + 4;
          pbVar6 = pbVar6 + 4;
        }
        for (uVar4 = (uint)pbVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pbVar6 = *param_1;
          param_1 = param_1 + 1;
          pbVar6 = pbVar6 + 1;
        }
        pbVar3[(int)pbVar5] = 0;
        return;
      }
      return;
    }
    if (bVar1 == 0x3a) {
      if (*param_1 == 0) goto LAB_100e4888;
      param_1 = param_1 + 1;
      goto LAB_100e4864;
    }
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  } while( true );
}


/* END FUNCTION 0x100e4840 */

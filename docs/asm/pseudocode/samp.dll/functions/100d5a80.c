/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d5a80
 * Name: FUN_100d5a80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d5a80(int *param_1,uint *param_2,uint *param_3,undefined4 param_4,uint *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint local_1c;
  uint local_14 [5];
  
  local_1c = 0xffffffff;
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  puVar1 = (undefined4 *)param_1[1];
  do {
    if (puVar1 == (undefined4 *)0x0) {
      *param_5 = local_1c;
      return 0;
    }
    uVar2 = FUN_100d5970();
    iVar6 = 0;
    do {
      uVar4 = 0xffffffff;
      if ((uVar2 & 1 << ((byte)iVar6 & 0x1f)) != 0) {
        uVar4 = *param_2;
        uVar3 = 0;
        if (uVar4 != 0) {
          puVar5 = param_2;
          do {
            puVar5 = puVar5 + 1;
            if (*puVar5 == local_14[iVar6]) break;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *param_2);
        }
        if ((uVar3 == uVar4) && (uVar4 < 0x40)) {
          param_2[uVar3 + 1] = local_14[iVar6];
          *param_2 = *param_2 + 1;
        }
        uVar4 = local_14[iVar6];
      }
      if ((uVar2 & 1 << ((byte)iVar6 + 0x10 & 0x1f)) != 0) {
        uVar4 = *param_3;
        uVar3 = 0;
        if (uVar4 != 0) {
          puVar5 = param_3;
          do {
            puVar5 = puVar5 + 1;
            if (*puVar5 == local_14[iVar6]) break;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *param_3);
        }
        if ((uVar3 == uVar4) && (uVar4 < 0x40)) {
          param_3[uVar3 + 1] = local_14[iVar6];
          *param_3 = *param_3 + 1;
        }
        uVar4 = local_14[iVar6];
      }
      if (uVar4 == 0xffffffff) break;
      if ((int)local_1c < (int)uVar4) {
        local_1c = uVar4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 5);
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


/* END FUNCTION 0x100d5a80 */

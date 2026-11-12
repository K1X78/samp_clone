/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10056790
 * Name: FUN_10056790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10056790(undefined4 *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte local_11;
  
  uVar4 = param_2 + 2;
  local_11 = 0;
  if ((uVar4 & 7) != 0) {
    local_11 = 8 - ((byte)uVar4 & 7);
  }
  uVar3 = (uint)local_11;
  *param_4 = uVar4 + uVar3;
  cVar1 = FUN_100436c0();
  if (param_1 == param_3) {
    _memmove((undefined1 *)(uVar3 + 2 + (int)param_3),param_1,param_2);
  }
  else {
    puVar6 = (undefined4 *)(uVar3 + 2 + (int)param_3);
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  uVar4 = 0;
  *(byte *)((int)param_3 + 1) = cVar1 << 4 | local_11;
  if (uVar3 != 0) {
    do {
      uVar2 = FUN_100436c0();
      *(undefined1 *)(uVar4 + 2 + (int)param_3) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  FUN_1001fce0((byte *)((int)param_3 + 1),uVar3 + 1 + param_2);
  *(undefined1 *)param_3 = 0;
  iVar5 = 0;
  if (0 < *param_4) {
    do {
      FUN_10056480((undefined1 *)(iVar5 + (int)param_3),(undefined1 *)(iVar5 + 4 + (int)param_3));
      iVar5 = iVar5 + 8;
    } while (iVar5 < *param_4);
  }
  return;
}


/* END FUNCTION 0x10056790 */

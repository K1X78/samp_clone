/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f7e80
 * Name: FUN_100f7e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_100f7e80(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint local_104 [32];
  uint local_84 [32];
  
  if ((param_3 < 1) && ((param_3 < 0 || (param_2 == 0)))) {
    return in_EAX;
  }
  uVar3 = 1;
  local_84[0] = 0xedb88320;
  iVar2 = 1;
  do {
    local_84[iVar2] = uVar3;
    uVar3 = uVar3 << 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  FUN_100f7e30();
  FUN_100f7e30();
  do {
    FUN_100f7e30();
    if ((param_2 & 1) != 0) {
      puVar4 = local_104;
      uVar1 = 0;
      for (uVar3 = in_EAX; in_EAX = uVar1, uVar3 != 0; uVar3 = uVar3 >> 1) {
        if ((uVar3 & 1) != 0) {
          in_EAX = in_EAX ^ *puVar4;
        }
        puVar4 = puVar4 + 1;
        uVar1 = in_EAX;
      }
    }
    uVar5 = __allshr();
    if (uVar5 == 0) break;
    FUN_100f7e30();
    if ((uVar5 & 1) != 0) {
      puVar4 = local_84;
      uVar1 = 0;
      for (uVar3 = in_EAX; in_EAX = uVar1, uVar3 != 0; uVar3 = uVar3 >> 1) {
        if ((uVar3 & 1) != 0) {
          in_EAX = in_EAX ^ *puVar4;
        }
        puVar4 = puVar4 + 1;
        uVar1 = in_EAX;
      }
    }
    lVar6 = __allshr();
    param_2 = (uint)lVar6;
  } while (lVar6 != 0);
  return in_EAX ^ param_1;
}


/* END FUNCTION 0x100f7e80 */

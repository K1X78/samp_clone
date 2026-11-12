/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ac470
 * Name: FUN_100ac470
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __thiscall FUN_100ac470(int param_1,short *param_2)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  
  if (DAT_102aca24 == 0) {
    *param_2 = -1;
    return 0xff;
  }
  iVar2 = *(int *)(param_1 + 0x2a4);
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x760);
    if (((bVar1 < 0x2b) || (bVar1 == 0x32)) || (bVar1 == 0x33)) {
      if (*(int *)(iVar2 + 0x764) != 0) {
        sVar3 = FUN_100137c0(*(int *)(iVar2 + 0x764));
        if (sVar3 != -1) {
LAB_100ac5b1:
          *param_2 = sVar3;
          return bVar1;
        }
        sVar3 = FUN_1001e650(*(undefined4 *)(*(int *)(param_1 + 0x2a4) + 0x764));
        if (sVar3 != -1) {
          sVar3 = FUN_100137c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x764) + 0x460))
          ;
          if (sVar3 != -1) goto LAB_100ac5b1;
        }
      }
      *param_2 = -1;
      return 0xff;
    }
    if (bVar1 == 0x35) {
      *param_2 = -1;
      return 0x35;
    }
    if (bVar1 == 0x31) {
      if (*(int *)(iVar2 + 0x764) != 0) {
        sVar3 = FUN_1001e650(*(int *)(iVar2 + 0x764));
        if (sVar3 != -1) {
          sVar3 = FUN_100137c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x764) + 0x460))
          ;
          if (sVar3 != -1) {
            *param_2 = sVar3;
            return 0x31;
          }
        }
      }
    }
    else if ((bVar1 == 0x36) && (*(int *)(iVar2 + 0x764) != 0)) {
      sVar3 = FUN_1001e650(*(int *)(iVar2 + 0x764));
      if (sVar3 == -1) {
        *param_2 = -1;
        return 0x36;
      }
      sVar3 = FUN_100137c0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2a4) + 0x764) + 0x460));
      if (sVar3 != -1) {
        *param_2 = sVar3;
        return 0x36;
      }
    }
  }
  *param_2 = -1;
  return 0xff;
}


/* END FUNCTION 0x100ac470 */

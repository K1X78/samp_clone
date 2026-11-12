/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10070db0
 * Name: FUN_10070db0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10070db0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  POINT pt;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  tagPOINT local_8;
  
  GetCursorPos(&local_8);
  ScreenToClient(_DAT_00c97c1c,&local_8);
  if ((DAT_102aca24 != 0) && (iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x20), iVar1 != 0))
  {
    uVar5 = 0;
    *(undefined2 *)(param_1 + 8) = 0xffff;
    do {
      if ((((ushort)uVar5 < 0x900) && (uVar6 = uVar5 & 0xffff, *(int *)(iVar1 + uVar6 * 4) != 0)) &&
         (iVar3 = *(int *)(iVar1 + 0x2400 + uVar6 * 4), iVar3 != 0)) {
        *(undefined1 *)(iVar3 + 0x9d1) = 0;
        *(undefined4 *)(iVar3 + 0x9d2) = 0;
        if (*(int *)(iVar1 + uVar6 * 4) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar1 + 0x2400 + uVar6 * 4);
        }
        if (((*(char *)(iVar3 + 0x9a7) != '\0') && (*(char *)(iVar3 + 0x9bf) != '\0')) &&
           (((RECT *)(iVar3 + 0x9c1) != (RECT *)0x0 &&
            (pt.y = local_8.y, pt.x = local_8.x, BVar4 = PtInRect((RECT *)(iVar3 + 0x9c1),pt),
            BVar4 != 0)))) {
          *(ushort *)(param_1 + 8) = (ushort)uVar5;
          if (*(int *)(iVar1 + uVar6 * 4) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar1 + 0x2400 + uVar6 * 4);
          }
          uVar2 = *(undefined4 *)(param_1 + 4);
          *(undefined1 *)(iVar3 + 0x9d1) = 1;
          *(undefined4 *)(iVar3 + 0x9d2) = uVar2;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x900);
  }
  return;
}


/* END FUNCTION 0x10070db0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00419b40
 * Name: FUN_00419b40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x00419c83) */
/* WARNING: Removing unreachable block (ram,0x00419ca3) */
/* WARNING: Removing unreachable block (ram,0x00419cae) */
/* WARNING: Removing unreachable block (ram,0x00419c0e) */

void __cdecl
FUN_00419b40(int param_1,int param_2,int param_3,uint param_4,int param_5,undefined1 param_6)

{
  void *this;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_ESI;
  undefined4 *puVar6;
  
  iVar1 = *unaff_ESI;
  param_2 = param_2 + param_3;
  unaff_ESI[0x11] = -0x420df25d;
  if ((-1 < param_1) && (*(char *)(iVar1 + 0x1e) == '\0')) {
    puVar6 = (undefined4 *)(unaff_ESI[5] + unaff_ESI[3] * 0x14);
    uVar2 = unaff_ESI[5] + unaff_ESI[4] * 0x14;
    FUN_0040d510(&param_4);
    *(undefined1 *)((int)unaff_ESI + 0x66) = param_6;
    if ((param_5 != 0) && (param_2 < 10)) {
      param_2 = 10;
    }
    uVar4 = uVar2 - (int)puVar6;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    this = (void *)(param_4 * 4);
    uVar5 = FUN_0040d7c0((void *)(param_2 * 0x28),uVar2);
    unaff_ESI[0x13] = uVar5;
    uVar5 = FUN_0040d7c0((void *)(param_1 * 0x28),uVar2);
    unaff_ESI[0xf] = uVar5;
    uVar5 = FUN_0040d7c0(this,uVar2);
    unaff_ESI[9] = uVar5;
    uVar5 = FUN_0040d7c0((void *)(param_1 << 2),uVar2);
    unaff_ESI[0x10] = uVar5;
    uVar2 = FUN_0040d7c0((void *)(param_3 << 2),uVar2);
    unaff_ESI[0xd] = uVar2;
    *(undefined2 *)((int)unaff_ESI + 0x32) = (undefined2)param_3;
    if ((unaff_ESI[0xf] != 0) && (*(short *)((int)unaff_ESI + 0x3a) = (short)param_1, 0 < param_1))
    {
      iVar3 = 0;
      do {
        *(undefined2 *)(unaff_ESI[0xf] + 0x1c + iVar3) = 1;
        *(int *)(unaff_ESI[0xf] + 0x10 + iVar3) = iVar1;
        iVar3 = iVar3 + 0x28;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    if (unaff_ESI[0x13] != 0) {
      unaff_ESI[0x13] = unaff_ESI[0x13] + -0x28;
      unaff_ESI[0x12] = param_2;
      if (0 < param_2) {
        iVar3 = 0x28;
        do {
          *(undefined2 *)(unaff_ESI[0x13] + 0x1c + iVar3) = 1;
          *(int *)(unaff_ESI[0x13] + 0x10 + iVar3) = iVar1;
          iVar3 = iVar3 + 0x28;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
  }
  unaff_ESI[0x15] = -1;
  unaff_ESI[0x16] = 0;
  *(undefined1 *)(unaff_ESI + 0xe) = 2;
  *(byte *)(unaff_ESI + 0x18) = *(byte *)(unaff_ESI + 0x18) | (byte)param_5;
  unaff_ESI[0x11] = -0x420df25d;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x14] = 1;
  *(undefined1 *)(unaff_ESI + 0x19) = 0xff;
  unaff_ESI[0x36] = 0;
  unaff_ESI[0x32] = 0;
  unaff_ESI[0x33] = 0;
  return;
}


/* END FUNCTION 0x00419b40 */

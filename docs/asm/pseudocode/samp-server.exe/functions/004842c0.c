/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004842c0
 * Name: FUN_004842c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_004842c0(void *this,char *param_1)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  void *this_00;
  undefined4 in_EAX;
  uint3 uVar7;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort uVar8;
  
  iVar6 = DAT_004fc438;
  bVar2 = param_1[0x27];
  uVar7 = (uint3)((uint)in_EAX >> 8);
  uVar4 = CONCAT31(uVar7,bVar2);
  if ((bVar2 < 0x16) || ((0x22 < bVar2 && (bVar2 != 0x26)))) {
    return (uint)uVar7 << 8;
  }
  cVar3 = *param_1;
  if (cVar3 == '\x01') {
    uVar8 = *(ushort *)(param_1 + 1);
    uVar4 = CONCAT22((short)((uint)in_EAX >> 0x10),*(ushort *)((int)this + 0x2d53));
    if (uVar8 == *(ushort *)((int)this + 0x2d53)) {
      uVar4 = FUN_00491fa0("[warning] Invalid shot data for player(%u). Player shoots self.");
      return uVar4 & 0xffffff00;
    }
    if ((DAT_004fc438 != 0) && (*(void **)(DAT_004fc438 + 8) != (void *)0x0)) {
      iVar5 = FUN_00463da0(*(void **)(DAT_004fc438 + 8),uVar8);
      uVar4 = 0;
      if ((iVar5 == 0) || (uVar4 = FUN_00465bb0(this,uVar8), (char)uVar4 == '\0'))
      goto LAB_00484485;
    }
  }
  if (((cVar3 == '\x02') && (iVar6 != 0)) &&
     (this_00 = *(void **)(iVar6 + 0xc), this_00 != (void *)0x0)) {
    uVar8 = *(ushort *)(param_1 + 1);
    iVar6 = FUN_00463dc0(this_00,uVar8);
    uVar4 = 0;
    if ((iVar6 == 0) || (uVar4 = FUN_00465b90(this,uVar8), (char)uVar4 == '\0')) goto LAB_00484485;
  }
  if (cVar3 != '\0') {
    if ((((*(float *)(param_1 + 0x1b) <= 1000.0) && (-1000.0 <= *(float *)(param_1 + 0x1b))) &&
        (*(float *)(param_1 + 0x1f) <= 1000.0)) &&
       ((-1000.0 <= *(float *)(param_1 + 0x1f) && (*(float *)(param_1 + 0x23) <= 1000.0)))) {
      fVar1 = *(float *)(param_1 + 0x23);
      uVar8 = (ushort)(fVar1 < -1000.0) << 8 | (ushort)NAN(fVar1) << 10 |
              (ushort)(fVar1 == -1000.0) << 0xe;
      if (fVar1 >= -1000.0) {
LAB_00484466:
        return CONCAT31((int3)(CONCAT22((short)(uVar4 >> 0x10),uVar8) >> 8),1);
      }
    }
    uVar4 = FUN_00491fa0("[warning] Invalid shot data for player(%u). Offset out of bounds.");
LAB_00484485:
    return uVar4 & 0xffffff00;
  }
  if (((*(float *)(param_1 + 0x1b) <= 20000.0) && (-20000.0 <= *(float *)(param_1 + 0x1b))) &&
     ((*(float *)(param_1 + 0x1f) <= 20000.0 &&
      ((-20000.0 <= *(float *)(param_1 + 0x1f) && (*(float *)(param_1 + 0x23) <= 20000.0)))))) {
    fVar1 = *(float *)(param_1 + 0x23);
    uVar8 = (ushort)(fVar1 < -20000.0) << 8 | (ushort)NAN(fVar1) << 10 |
            (ushort)(fVar1 == -20000.0) << 0xe;
    if (fVar1 >= -20000.0) goto LAB_00484466;
  }
  uVar4 = FUN_00491fa0("[warning] Invalid shot data for player(%u). Shot out of bounds.");
  return uVar4 & 0xffffff00;
}


/* END FUNCTION 0x004842c0 */

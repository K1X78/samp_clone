/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10104fb3
 * Name: __isindst_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __isindst_lk(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *unaff_EBX;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  if (DAT_10155fc4 == 0) {
    return false;
  }
  iVar1 = unaff_EBX[5];
  if ((iVar1 != DAT_10156058) || (iVar1 != DAT_10156064)) {
    if (DAT_102ad0d4 == 0) {
      cvtdate(1,1,iVar1,1,0,0,0,0,0);
      cvtdate(0,1,iVar1,5,0,0,0,0,0);
    }
    else {
      if (DAT_102ad0c0 != 0) {
        uVar5 = 0;
        uVar4 = 0;
        uVar6 = DAT_102ad0c6;
      }
      else {
        uVar5 = DAT_102ad0c4;
        uVar4 = DAT_102ad0c6;
        uVar6 = 0;
      }
      cvtdate(1,DAT_102ad0c0 == 0,iVar1,uVar4,uVar5,uVar6,DAT_102ad0ca,DAT_102ad0cc,DAT_102ad0ce);
      if (DAT_102ad06c != 0) {
        uVar5 = 0;
        uVar4 = 0;
        uVar6 = DAT_102ad072;
      }
      else {
        uVar5 = DAT_102ad070;
        uVar4 = DAT_102ad072;
        uVar6 = 0;
      }
      cvtdate(0,DAT_102ad06c == 0,iVar1,uVar4,uVar5,uVar6,DAT_102ad076,DAT_102ad078,DAT_102ad07a);
    }
  }
  iVar1 = unaff_EBX[7];
  if (DAT_1015605c < DAT_10156068) {
    if ((iVar1 < DAT_1015605c) || (DAT_10156068 < iVar1)) {
      return false;
    }
    if ((DAT_1015605c < iVar1) && (iVar1 < DAT_10156068)) {
      return true;
    }
  }
  else {
    if (iVar1 < DAT_10156068) {
      return true;
    }
    if (DAT_1015605c < iVar1) {
      return true;
    }
    if ((DAT_10156068 < iVar1) && (iVar1 < DAT_1015605c)) {
      return false;
    }
  }
  iVar3 = ((unaff_EBX[2] * 0x3c + unaff_EBX[1]) * 0x3c + *unaff_EBX) * 1000;
  if (iVar1 == DAT_1015605c) {
    bVar2 = DAT_10156060 <= iVar3;
  }
  else {
    bVar2 = iVar3 < DAT_1015606c;
  }
  return bVar2;
}


/* END FUNCTION 0x10104fb3 */

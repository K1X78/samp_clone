/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a915c
 * Name: __isindst_lk
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __isindst_lk(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *unaff_EBX;
  uint uVar6;
  
  if (DAT_004ec704 == 0) {
    return false;
  }
  iVar1 = unaff_EBX[5];
  if ((iVar1 != DAT_004ec798) || (iVar1 != DAT_004ec7a4)) {
    if (DAT_0051c474 == 0) {
      cvtdate((void *)0x2,1,1,iVar1,1,0,0,0,0,0);
      cvtdate((void *)0x2,0,1,iVar1,5,0,0,0,0,0);
    }
    else {
      if (DAT_0051c460 != 0) {
        uVar6 = (uint)DAT_0051c466;
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (uint)DAT_0051c464;
        uVar6 = 0;
        uVar4 = (uint)DAT_0051c466;
      }
      cvtdate((void *)(uint)DAT_0051c468,1,(uint)(DAT_0051c460 == 0),iVar1,uVar4,uVar3,uVar6,
              (uint)DAT_0051c46a,(uint)DAT_0051c46c,(uint)DAT_0051c46e);
      if (DAT_0051c40c != 0) {
        uVar6 = (uint)DAT_0051c412;
        uVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar3 = (uint)DAT_0051c410;
        uVar6 = 0;
        uVar4 = (uint)DAT_0051c412;
      }
      cvtdate((void *)(uint)DAT_0051c414,0,(uint)(DAT_0051c40c == 0),iVar1,uVar4,uVar3,uVar6,
              (uint)DAT_0051c416,(uint)DAT_0051c418,(uint)DAT_0051c41a);
    }
  }
  iVar1 = unaff_EBX[7];
  if (DAT_004ec79c < DAT_004ec7a8) {
    if ((iVar1 < DAT_004ec79c) || (DAT_004ec7a8 < iVar1)) {
      return false;
    }
    if ((DAT_004ec79c < iVar1) && (iVar1 < DAT_004ec7a8)) {
      return true;
    }
  }
  else {
    if (iVar1 < DAT_004ec7a8) {
      return true;
    }
    if (DAT_004ec79c < iVar1) {
      return true;
    }
    if ((DAT_004ec7a8 < iVar1) && (iVar1 < DAT_004ec79c)) {
      return false;
    }
  }
  iVar5 = ((unaff_EBX[2] * 0x3c + unaff_EBX[1]) * 0x3c + *unaff_EBX) * 1000;
  if (iVar1 == DAT_004ec79c) {
    bVar2 = DAT_004ec7a0 <= iVar5;
  }
  else {
    bVar2 = iVar5 < DAT_004ec7ac;
  }
  return bVar2;
}


/* END FUNCTION 0x004a915c */

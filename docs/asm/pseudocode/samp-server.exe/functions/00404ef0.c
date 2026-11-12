/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404ef0
 * Name: FUN_00404ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00404ef0(FILE *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  bool bVar6;
  bool bVar7;
  fpos_t local_8;
  
  if (param_2 == 0) {
    return 0;
  }
  _fgetpos(param_1,&local_8);
  iVar5 = 0;
  iVar3 = 0;
  iVar4 = param_2 + -1;
  bVar6 = param_2 == 1;
  param_2 = 0;
  bVar7 = false;
  if (bVar6) {
LAB_0040510d:
    *(undefined4 *)(unaff_EDI + iVar5 * 4) = 0;
    return iVar5;
  }
LAB_00404f32:
  uVar2 = FID_conflict__getc(param_1);
  if (uVar2 == 0xffffffff) {
    if ((param_3 == 0) || (iVar3 == 0)) goto LAB_0040510d;
    iVar5 = 0;
    _fsetpos(param_1,&local_8);
    goto LAB_004050e5;
  }
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  if (param_3 == 0) {
    *(uint *)(unaff_EDI + iVar5 * 4) = uVar2;
    iVar5 = iVar5 + 1;
    if (uVar2 == 10) goto LAB_0040510d;
    if (bVar7) {
      _ungetc(uVar2,param_1);
      goto LAB_0040510d;
    }
    bVar7 = uVar2 == 0xd;
    goto LAB_004050e5;
  }
  bVar1 = (byte)uVar2;
  if ((iVar3 < 1) || ((bVar1 & 0xc0) != 0x80)) {
    if (iVar3 == 0) {
      if ((uVar2 & 0x80) != 0) {
        if ((bVar1 & 0xe0) == 0xc0) {
          iVar3 = 1;
          param_2 = 0x80;
          uVar2 = uVar2 & 0x1f;
        }
        else if ((bVar1 & 0xf0) == 0xe0) {
          iVar3 = 2;
          param_2 = 0x800;
          uVar2 = uVar2 & 0xf;
        }
        else if ((bVar1 & 0xf8) == 0xf0) {
          iVar3 = 3;
          param_2 = 0x10000;
          uVar2 = uVar2 & 7;
        }
        else if ((bVar1 & 0xfc) == 0xf8) {
          iVar3 = 4;
          param_2 = 0x200000;
          uVar2 = uVar2 & 3;
        }
        else {
          if ((bVar1 & 0xfe) != 0xfc) goto LAB_004050bf;
          iVar3 = 5;
          param_2 = 0x4000000;
          uVar2 = uVar2 & 1;
        }
        *(uint *)(unaff_EDI + iVar5 * 4) = uVar2;
        goto LAB_00405004;
      }
      *(uint *)(unaff_EDI + iVar5 * 4) = uVar2;
      iVar5 = iVar5 + 1;
      if (uVar2 == 10) goto LAB_0040510d;
      goto LAB_00405004;
    }
LAB_004050bf:
    param_3 = 0;
  }
  else {
    uVar2 = uVar2 & 0x3f | *(int *)(unaff_EDI + iVar5 * 4) << 6;
    iVar3 = iVar3 + -1;
    *(uint *)(unaff_EDI + iVar5 * 4) = uVar2;
    if (iVar3 == 0) {
      if ((int)uVar2 < param_2) {
        param_3 = 0;
      }
      if ((((0xd7ff < (int)uVar2) && ((int)uVar2 < 0xe000)) || (uVar2 == 0xfffe)) ||
         (uVar2 == 0xffff)) {
        param_3 = 0;
      }
      iVar5 = iVar5 + 1;
    }
LAB_00405004:
    if (param_3 != 0) goto LAB_004050e5;
  }
  iVar5 = 0;
  _fsetpos(param_1,&local_8);
LAB_004050e5:
  if (iVar5 == iVar4) {
    *(undefined4 *)(unaff_EDI + iVar5 * 4) = 0;
    return iVar5;
  }
  goto LAB_00404f32;
}


/* END FUNCTION 0x00404ef0 */

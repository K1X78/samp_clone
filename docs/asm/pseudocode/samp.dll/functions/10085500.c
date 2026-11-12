/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10085500
 * Name: FUN_10085500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10085500(uint param_1)

{
  int iVar1;
  SIZE_T SVar2;
  HANDLE pvVar3;
  LPVOID lpMem;
  uint uVar4;
  DWORD DVar5;
  SIZE_T dwBytes;
  uint uStack_420;
  undefined1 *puStack_41c;
  undefined4 uStack_418;
  CHAR aCStack_40c [12];
  undefined1 local_400 [1008];
  uint uStack_10;
  
  if (1 < param_1) {
    return 0;
  }
  if (DAT_10181a84 == _DAT_10180600) goto LAB_1008574f;
  DAT_10181a84 = _DAT_10180600;
  if (((_DAT_10180600 != 0xe0080404) && (_DAT_10180600 != 0xe0090404)) &&
     (_DAT_10180600 != 0xe00e0804)) {
LAB_1008554b:
    _DAT_10181a80 = 0;
    _DAT_10181a7c = 0;
    return *(undefined4 *)(&DAT_10181a7c + param_1 * 4);
  }
  uStack_418 = 0x3ff;
  puStack_41c = local_400;
  uStack_420 = _DAT_10180600;
  iVar1 = (*(code *)PTR_FUN_10140c50)();
  if (iVar1 == 0) goto LAB_1008554b;
  if ((((PTR_FUN_10140c68 == (undefined *)0x0) &&
       (iVar1 = CompareStringA(0x409,1,aCStack_40c,-1,"TINTLGNT.IME",-1), iVar1 != 2)) &&
      ((iVar1 = CompareStringA(0x409,1,aCStack_40c,-1,"CINTLGNT.IME",-1), iVar1 != 2 &&
       ((iVar1 = CompareStringA(0x409,1,aCStack_40c,-1,"MSTCIPHA.IME",-1), iVar1 != 2 &&
        (iVar1 = CompareStringA(0x409,1,aCStack_40c,-1,"PINTLGNT.IME",-1), iVar1 != 2)))))) &&
     (iVar1 = CompareStringA(0x409,1,aCStack_40c,-1,"MSSCIPYA.IME",-1), iVar1 != 2)) {
    _DAT_10181a80 = 0;
    _DAT_10181a7c = 0;
    return *(undefined4 *)(&DAT_10181a7c + param_1 * 4);
  }
  SVar2 = (*(code *)PTR_FUN_10140c78)(aCStack_40c,&stack0xfffffbec);
  if (SVar2 == 0) goto LAB_1008574f;
  DVar5 = 0;
  dwBytes = SVar2;
  pvVar3 = GetProcessHeap();
  lpMem = HeapAlloc(pvVar3,DVar5,dwBytes);
  param_1 = uStack_10;
  if (lpMem == (LPVOID)0x0) goto LAB_1008574f;
  iVar1 = (*(code *)PTR_FUN_10140c74)(&stack0xfffffbec,puStack_41c,SVar2,lpMem);
  if ((iVar1 == 0) ||
     (iVar1 = (*(code *)PTR_FUN_10140c70)(lpMem,&DAT_101183ec,&uStack_420,&uStack_418), iVar1 == 0))
  goto LAB_1008573a;
  uVar4 = ((*(uint *)(uStack_420 + 8) & 0xff) << 8 | *(uint *)(uStack_420 + 8) & 0xffff0000) * 0x100
  ;
  if (PTR_FUN_10140c68 == (undefined *)0x0) {
    if ((short)_DAT_10180600 == 0x404) {
      if ((((uVar4 == 0x4020000) || (uVar4 == 0x4030000)) || (uVar4 == 0x4040000)) ||
         (((uVar4 == 0x5000000 || (uVar4 == 0x5010000)) ||
          ((uVar4 == 0x5020000 || (uVar4 == 0x6000000)))))) goto LAB_10085727;
    }
    else if (((short)_DAT_10180600 == 0x804) &&
            (((uVar4 == 0x4010000 || (uVar4 == 0x4020000)) || (uVar4 == 0x5030000))))
    goto LAB_10085727;
  }
  else {
LAB_10085727:
    _DAT_10181a7c = _DAT_10180600 & 0xffff | uVar4;
    _DAT_10181a80 = *(undefined4 *)(uStack_420 + 0xc);
  }
LAB_1008573a:
  DVar5 = 0;
  pvVar3 = GetProcessHeap();
  HeapFree(pvVar3,DVar5,lpMem);
  param_1 = uStack_10;
LAB_1008574f:
  return *(undefined4 *)(&DAT_10181a7c + param_1 * 4);
}


/* END FUNCTION 0x10085500 */

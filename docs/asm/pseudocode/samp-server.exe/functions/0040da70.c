/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040da70
 * Name: FUN_0040da70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_0040da70(char *param_1)

{
  char cVar1;
  char cVar2;
  int3 iVar3;
  uint in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *unaff_ESI;
  
  switch(in_EAX) {
  case 0:
  case 10:
  case 0xb:
    *(undefined2 *)(unaff_ESI + 7) = 1;
    return 0;
  case 1:
    cVar1 = *param_1;
    *unaff_ESI = (int)cVar1;
    unaff_ESI[1] = (int)cVar1 >> 0x1f;
    *(undefined2 *)(unaff_ESI + 7) = 4;
    return 1;
  case 2:
    cVar1 = *param_1;
    cVar2 = param_1[1];
    *unaff_ESI = (int)CONCAT11(cVar1,cVar2);
    unaff_ESI[1] = (int)CONCAT11(cVar1,cVar2) >> 0x1f;
    *(undefined2 *)(unaff_ESI + 7) = 4;
    return 2;
  case 3:
    iVar4 = (int)CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
    *unaff_ESI = iVar4;
    unaff_ESI[1] = iVar4 >> 0x1f;
    *(undefined2 *)(unaff_ESI + 7) = 4;
    return 3;
  case 4:
    iVar3 = CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
    *unaff_ESI = CONCAT31(iVar3,param_1[3]);
    unaff_ESI[1] = (int)iVar3 >> 0x17;
    *(undefined2 *)(unaff_ESI + 7) = 4;
    return 4;
  case 5:
    cVar1 = *param_1;
    cVar2 = param_1[1];
    *unaff_ESI = CONCAT31(CONCAT21(CONCAT11(param_1[2],param_1[3]),param_1[4]),param_1[5]);
    unaff_ESI[1] = (int)CONCAT11(cVar1,cVar2);
    *(undefined2 *)(unaff_ESI + 7) = 4;
    return 6;
  case 6:
  case 7:
    break;
  case 8:
  case 9:
    *unaff_ESI = in_EAX - 8;
    unaff_ESI[1] = 0;
    *(undefined2 *)(unaff_ESI + 7) = 4;
    return 0;
  default:
    uVar6 = in_EAX - 0xc >> 1;
    unaff_ESI[5] = (int)param_1;
    unaff_ESI[6] = uVar6;
    unaff_ESI[8] = 0;
    *(ushort *)(unaff_ESI + 7) = (-(ushort)((in_EAX & 1) != 0) & 0xfff2) + 0x1010;
    return uVar6;
  }
  iVar4 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  iVar5 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  if (in_EAX != 6) {
    unaff_ESI[2] = iVar5;
    unaff_ESI[3] = iVar4;
    iVar4 = FUN_00408340();
    *(ushort *)(unaff_ESI + 7) = (-(ushort)(iVar4 != 0) & 0xfff9) + 8;
    return 8;
  }
  unaff_ESI[1] = iVar4;
  *unaff_ESI = iVar5;
  *(undefined2 *)(unaff_ESI + 7) = 4;
  return 8;
}


/* END FUNCTION 0x0040da70 */

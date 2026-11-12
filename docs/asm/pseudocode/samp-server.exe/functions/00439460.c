/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00439460
 * Name: FUN_00439460
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl
FUN_00439460(int *param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5,int param_6,
            undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *this;
  undefined4 *puVar5;
  char cVar6;
  bool bVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined3 extraout_var;
  int iVar11;
  
  puVar5 = param_2;
  iVar1 = param_2[4];
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_1[3];
  param_2 = (undefined4 *)(param_1[0x12] + 1);
  param_1[0x12] = param_1[0x12] + iVar2 + param_6;
  FUN_004169f0();
  pcVar8 = FUN_00412a70();
  if (pcVar8 == (char *)0x0) {
    *(undefined1 *)(*param_1 + 0x1e) = 1;
  }
  iVar11 = 0;
  if (0 < iVar2) {
    do {
      piVar9 = (int *)FUN_00432a40(param_3,iVar1,*(int *)(*(int *)(iVar3 + 8) + iVar11 * 4),param_4,
                                   param_5,(ushort)*puVar5,iVar3);
      if (piVar9 == (int *)0x0) {
        *param_7 = pcVar8;
        return (int)param_2;
      }
      puVar10 = (undefined4 *)FUN_00439300(piVar9,iVar11 + (int)param_2);
      if (puVar10 != (undefined4 *)(iVar11 + (int)param_2)) {
        if (iVar2 + param_6 == 1) {
          FUN_0040ec20(puVar10,(int)param_1);
          param_2 = puVar10;
        }
        else {
          FUN_00414e70(puVar10,0xf);
        }
      }
      if ((*(byte *)(piVar9 + 4) & 0x81) == 0) {
        this = *(char **)(*piVar9 + 0xc);
        FUN_00415bd0(this,iVar4,iVar11 + (int)param_2);
        if (pcVar8 != (char *)0x0) {
          cVar6 = FUN_00415810();
          if (cVar6 == 'b') {
            pcVar8[iVar11] = 'b';
          }
          bVar7 = FUN_0040e7c0(this,pcVar8[iVar11]);
          if (CONCAT31(extraout_var,bVar7) != 0) {
            pcVar8[iVar11] = 'b';
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar2);
    *param_7 = pcVar8;
    return (int)param_2;
  }
  *param_7 = pcVar8;
  return (int)param_2;
}


/* END FUNCTION 0x00439460 */

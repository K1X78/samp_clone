/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046a9d0
 * Name: FUN_0046a9d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0046a9d0(void *this,byte *param_1)

{
  byte bVar1;
  FILE *_File;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  bool bVar10;
  uint local_104;
  char local_100 [256];
  
  _sprintf(local_100,"filterscripts/%s.amx",param_1);
  uVar2 = *(uint *)((int)this + 0x1030);
  if ((int)uVar2 < 0x10) {
    _File = (FILE *)FUN_0049fbe9(local_100,"rb");
    uVar2 = 0;
    if (_File != (FILE *)0x0) {
      uVar2 = _fclose(_File);
      iVar6 = 0;
      pbVar8 = (byte *)((int)this + 0x40);
      do {
        pbVar3 = param_1;
        pbVar7 = pbVar8;
        if (*(int *)((int)this + iVar6 * 4) == 0) break;
        do {
          bVar1 = *pbVar3;
          bVar10 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_0046aa64:
            uVar2 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_0046aa69;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar10 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_0046aa64;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar2 = 0;
LAB_0046aa69:
        if (uVar2 == 0) goto LAB_0046aab9;
        iVar6 = iVar6 + 1;
        pbVar8 = pbVar8 + 0xff;
      } while (iVar6 < 0x10);
      if (iVar6 != 0x10) {
        piVar4 = operator_new(0x68);
        *(int **)((int)this + iVar6 * 4) = piVar4;
        piVar9 = piVar4;
        for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar9 = 0;
          piVar9 = piVar9 + 1;
        }
        iVar5 = FUN_0046fa70(piVar4,local_100);
        if (iVar5 == 0) {
          FUN_00404b40(this_00,piVar4);
          FUN_00405f40(this_01,piVar4);
          FUN_00406fe0(this_02,piVar4);
          FUN_00405bc0(this_03,piVar4);
          FUN_004072f0(piVar4);
          FUN_0047a100(this_04,piVar4);
          FUN_00481880(this_05,piVar4);
          FUN_00469c30(DAT_004fc440,piVar4);
          iVar5 = FUN_00401710(piVar4,(byte *)"OnFilterScriptInit",(int *)&local_104);
          if (iVar5 == 0) {
            FUN_00401c90(piVar4,&local_104,local_104);
          }
          iVar6 = (iVar6 * 0xff + 0x40) - (int)param_1;
          do {
            bVar1 = *param_1;
            param_1[(int)this + iVar6] = bVar1;
            param_1 = param_1 + 1;
          } while (bVar1 != 0);
          iVar6 = *(int *)((int)this + 0x1030) + 1;
          *(int *)((int)this + 0x1030) = iVar6;
          return CONCAT31((int3)((uint)iVar6 >> 8),1);
        }
        uVar2 = FUN_00491fa0("Failed to load \'%s.amx\' filterscript.");
      }
LAB_0046aab9:
      return uVar2 & 0xffffff00;
    }
  }
  return uVar2 & 0xffffff00;
}


/* END FUNCTION 0x0046a9d0 */

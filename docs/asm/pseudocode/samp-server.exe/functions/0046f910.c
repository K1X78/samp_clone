/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046f910
 * Name: FUN_0046f910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall FUN_0046f910(void *this,char *param_1)

{
  char cVar1;
  FILE *_File;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  undefined4 *puVar5;
  uint local_8;
  uint local_4;
  
  if (*(char *)((int)this + 0x68) != '\0') {
    FUN_0046da90(this);
  }
  _File = (FILE *)FUN_0049fbe9(param_1,"rb");
  uVar2 = 0;
  if (_File != (FILE *)0x0) {
    _fclose(_File);
    puVar5 = this;
    for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)((int)this + 0x6a) = 0;
    iVar4 = (int)&DAT_004fb300 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar4] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    uVar2 = FUN_0046fa70(this,&DAT_004fb300);
    if (uVar2 == 0) {
      FUN_00404b40(this_00,this);
      FUN_00405f40(this_01,this);
      FUN_00406fe0(this_02,this);
      FUN_00405bc0(this_03,this);
      FUN_004072f0(this);
      FUN_0047a100(this_04,this);
      FUN_00481880(this_05,this);
      FUN_00469c30(DAT_004fc440,this);
      *(undefined1 *)((int)this + 0x68) = 1;
      iVar4 = FUN_00401710(this,(byte *)"OnGameModeInit",(int *)&local_8);
      if (iVar4 == 0) {
        FUN_00401c90(this,&local_8,local_8);
      }
      FUN_0046af20(*(int *)(DAT_004fc438 + 4));
      local_4 = 0;
      uVar2 = FUN_00401c90(this,&local_4,-1);
      if (uVar2 == 0xc) {
        *(undefined1 *)((int)this + 0x69) = 1;
        *(float *)((int)this + 0x6a) = (float)(int)local_4 * 0.001;
        return 1;
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        *(undefined1 *)((int)this + 0x69) = 0;
        uVar3 = FUN_0046fc70(this,this,uVar2);
      }
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    FUN_0046fc70(this,this,uVar2);
    uVar2 = FUN_00491fa0("Failed to load \'%s\' script.");
  }
  return uVar2 & 0xffffff00;
}


/* END FUNCTION 0x0046f910 */

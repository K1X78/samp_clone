/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049dd70
 * Name: FUN_0049dd70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_0049dd70(void *this,int param_1,void *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  void *this_00;
  char *pcVar8;
  void *this_01;
  byte local_8 [4];
  void *local_4;
  
  this_01 = param_2;
  iVar4 = param_1;
  local_8[0] = *(byte *)((int)this + param_1 * 0xd7 + 0xc5);
  local_4 = this;
  if (local_8[0] == 1) {
    param_1 = CONCAT31(param_1._1_3_,1);
    FUN_0044df40(param_2,(byte *)&param_1,8,'\x01');
    param_2 = (void *)CONCAT31(param_2._1_3_,*(undefined1 *)((int)this + iVar4 * 0xd7 + 0xc6));
    FUN_0044df40(this_01,(byte *)&param_2,8,'\x01');
    param_2 = (void *)(uint)*(ushort *)((int)this + iVar4 * 0xd7 + 199);
    FUN_0044df40(this_01,(byte *)&param_2,0x10,'\x01');
    pbVar1 = (byte *)((int)this + iVar4 * 0xd7 + 0xcd);
    pbVar5 = pbVar1;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    uVar6 = (int)pbVar5 - ((int)this + iVar4 * 0xd7 + 0xce);
    param_2 = (void *)CONCAT31(param_2._1_3_,(char)uVar6);
    FUN_0044df40(this_01,(byte *)&param_2,8,'\x01');
    FUN_0044dff0(this_01,pbVar1,uVar6 & 0xff);
    pbVar1 = (byte *)((int)this + iVar4 * 0xd7 + 0x10e);
    pbVar5 = pbVar1;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    uVar6 = (int)pbVar5 - ((int)this + iVar4 * 0xd7 + 0x10f);
    param_2 = (void *)CONCAT31(param_2._1_3_,(char)uVar6);
    FUN_0044df40(this_01,(byte *)&param_2,8,'\x01');
    FUN_0044dff0(this_01,pbVar1,uVar6 & 0xff);
    param_2 = *(void **)((int)this + iVar4 * 0xd7 + 0xc9);
    FUN_0044df40(this_01,(byte *)&param_2,0x20,'\x01');
    return;
  }
  if (local_8[0] == 2) {
    FUN_0044df40(param_2,local_8,8,'\x01');
    param_2 = (void *)CONCAT31(param_2._1_3_,*(undefined1 *)((int)this + iVar4 * 0xd7 + 0xc6));
    FUN_0044df40(this_01,(byte *)&param_2,8,'\x01');
    param_2 = (void *)CONCAT31(param_2._1_3_,*(undefined1 *)((int)this + iVar4 * 0xd7 + 0x14f));
    FUN_0044df40(this_01,(byte *)&param_2,8,'\x01');
    pbVar1 = (byte *)((int)this + iVar4 * 0xd7 + 0x150);
    pbVar5 = pbVar1;
    do {
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    uVar6 = (int)pbVar5 - ((int)this + iVar4 * 0xd7 + 0x151);
    param_2 = (void *)CONCAT31(param_2._1_3_,(char)uVar6);
    FUN_0044df40(this_01,(byte *)&param_2,8,'\x01');
    FUN_0044dff0(this_01,pbVar1,uVar6 & 0xff);
    param_2 = (void *)CONCAT31(param_2._1_3_,*(undefined1 *)((int)this + iVar4 * 0xd7 + 0x191));
    FUN_0044df40(this_01,(byte *)&param_2,8,'\x01');
    param_2 = (void *)CONCAT31(param_2._1_3_,*(undefined1 *)((int)this + iVar4 * 0xd7 + 0x192));
    FUN_0044df40(this_01,(byte *)&param_2,8,'\x01');
    param_2 = *(void **)((int)this + iVar4 * 0xd7 + 0x193);
    FUN_0044df40(this_01,(byte *)&param_2,0x20,'\x01');
    param_2 = *(void **)((int)this + iVar4 * 0xd7 + 0x197);
    FUN_0044df40(this_01,(byte *)&param_2,0x20,'\x01');
    param_2 = (void *)CONCAT31(param_2._1_3_,*(undefined1 *)((int)this + iVar4 * 0xd7 + 0x19b));
    FUN_0044df40(this_01,(byte *)&param_2,8,'\x01');
    pcVar8 = *(char **)((int)local_4 + param_1 * 4 + 0xe35);
    pcVar7 = pcVar8;
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    pcVar7 = pcVar7 + (1 - (int)(pcVar8 + 1));
    this_00 = (void *)FUN_00462dd0();
    FUN_00463220(this_00,pcVar8,(int)pcVar7,this_01);
  }
  return;
}


/* END FUNCTION 0x0049dd70 */

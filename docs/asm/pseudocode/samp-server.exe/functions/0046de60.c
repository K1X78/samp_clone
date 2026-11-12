/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046de60
 * Name: FUN_0046de60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0046de60(void *this,uint *param_1,byte *param_2)

{
  byte bVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint local_8;
  int local_4;
  
  pbVar3 = param_2;
  if (*(char *)((int)this + 0x68) == '\0') {
    return 0;
  }
  local_8 = 1;
  pbVar6 = param_2 + 1;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  iVar5 = FUN_00401710(this,(byte *)"OnPlayerText",(int *)&param_2);
  puVar2 = param_1;
  if (iVar5 == 0) {
    FUN_00403610(this,&local_4,&param_1,(short *)pbVar3,(undefined4 *)0x0,0);
    FUN_00401c50(this,puVar2);
    FUN_00401c90(this,&local_8,(int)param_2);
    FUN_00403350((int)pbVar3,param_1,0,(uint)(pbVar4 + (1 - (int)pbVar6)));
    FUN_004031b0((int)this,local_4);
  }
  if ((local_8 != 0) && ((ushort)puVar2 < 1000)) {
    if (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + ((uint)puVar2 & 0xffff) * 4) != 0) {
      pbVar6 = pbVar3;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
      FUN_00484eb0(*(void **)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + ((uint)puVar2 & 0xffff) * 4),
                   pbVar3,(char)pbVar6 - ((char)pbVar3 + '\x01'));
    }
  }
  return local_8;
}


/* END FUNCTION 0x0046de60 */

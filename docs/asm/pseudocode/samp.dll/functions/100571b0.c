/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100571b0
 * Name: FUN_100571b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100571b0(undefined4 param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_retaddr;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115dc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100635c0();
  local_4 = 0;
  if (DAT_102aca3c != 0) {
    iVar3 = FUN_100b3860();
    if (iVar3 != 0) {
      FUN_1009d5c0(0x4488a000,0xc4fe8000,0x42b40000,0,0,0);
      FUN_1009d620(0x43c00000,0xc4c2a000,0x41a00000,2);
      local_b0 = 0;
      local_ac = 0;
      local_a8 = 0;
      local_a4 = 0;
      local_a0 = 0;
      pcVar4 = param_2;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      thunk_FUN_10063d30(param_2,(int)pcVar4 - (int)(param_2 + 1));
      FUN_10063ce0(&local_b0);
      FUN_10001010();
      FUN_1009efd0();
      iVar3 = (**(code **)(*DAT_102ac9d4 + 0x1c))(0xbaddea6b);
      if (iVar3 != -1) {
        iVar3 = (**(code **)(*DAT_102ac9d4 + 0x14))(iVar3);
        iVar6 = 0;
        do {
          bVar2 = (&stack0xffffff38)[iVar6];
          iVar5 = 0;
          do {
            bVar2 = *(byte *)(iVar5 + iVar3) ^ bVar2 ^ 0x2f;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 100);
          (&stack0xffffff38)[iVar6] = bVar2;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 5);
        do {
          bVar2 = (&stack0xffffff38)[iVar6];
          iVar5 = 0;
          do {
            bVar2 = *(byte *)(iVar5 + iVar3) ^ bVar2 ^ 0x45;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 100);
          (&stack0xffffff38)[iVar6] = bVar2;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 10);
        do {
          bVar2 = (&stack0xffffff38)[iVar6];
          iVar5 = 0;
          do {
            bVar2 = *(byte *)(iVar5 + iVar3) ^ bVar2 ^ 0x6f;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 100);
          (&stack0xffffff38)[iVar6] = bVar2;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0xf);
        do {
          bVar2 = (&stack0xffffff38)[iVar6];
          iVar5 = 0;
          do {
            bVar2 = *(byte *)(iVar5 + iVar3) ^ bVar2 ^ 0xdb;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 100);
          (&stack0xffffff38)[iVar6] = bVar2;
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0x14);
        FUN_100aa0b0(&DAT_004d3aa0,0x14);
        local_a0 = _DAT_004d3aa0;
        uStack_9c = _DAT_004d3aa4;
        uStack_94 = _DAT_004d3aac;
        uStack_98 = _DAT_004d3aa8;
        uStack_90 = _DAT_004d3ab0;
        iVar3 = 0;
        do {
          (&stack0xffffff38)[iVar3] = (&stack0xffffff38)[iVar3] ^ *(byte *)((int)&local_a0 + iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0x14);
      }
      FUN_10057170(unaff_retaddr,&stack0xffffff38);
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_10063550();
      ExceptionList = pvStack_10;
      return;
    }
  }
  local_4 = 0xffffffff;
  FUN_10063550();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100571b0 */

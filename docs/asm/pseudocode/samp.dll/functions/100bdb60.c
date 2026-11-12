/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100bdb60
 * Name: FUN_100bdb60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100bdb60(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int local_104;
  int *local_100;
  int local_fc [3];
  int local_f0 [2];
  char local_e8 [32];
  char local_c8 [32];
  int local_a8;
  int local_a4;
  ushort local_a0;
  ushort local_9e;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  char local_98 [72];
  char local_50 [76];
  
  FUN_100bc1d0(local_fc,0xc);
  if (local_fc[0] == 1) {
    piVar4 = local_f0;
    for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = 0;
      piVar4 = piVar4 + 1;
    }
    local_104 = 0;
    FUN_100bc1d0(&local_104,4);
    local_f0[0] = local_104;
    if ((local_104 == 8) || (local_104 == 9)) {
      local_104 = 0;
      FUN_100bc1d0(&local_104,4);
      local_f0[1] = local_104;
      pcVar2 = local_50;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      *pcVar2 = '\0';
      pcVar2 = local_98;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2 = pcVar2 + 4;
      }
      *pcVar2 = '\0';
      FUN_100bc1d0(local_50,0x20);
      pcVar2 = local_50;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar2 - (int)(local_50 + 1)) < 0x20) {
        _strncpy(local_e8,local_50,0x1f);
        FUN_100bc1d0(local_98,0x20);
        pcVar2 = local_98;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if ((uint)((int)pcVar2 - (int)(local_98 + 1)) < 0x20) {
          _strncpy(local_c8,local_98,0x1f);
          local_104 = 0;
          FUN_100bc1d0(&local_104,4);
          local_a8 = local_104;
          local_104 = 0;
          FUN_100bc1d0(&local_104,4);
          local_a4 = local_104;
          local_104 = 0;
          FUN_100bc1d0(&local_104,2);
          local_a0 = (ushort)local_104;
          local_104 = 0;
          FUN_100bc1d0(&local_104,2);
          local_9e = (ushort)local_104;
          if ((local_a0 < 0x801) && (local_9e < 0x801)) {
            local_9c = FUN_100b36a0();
            local_9b = FUN_100b36a0();
            local_9a = FUN_100b36a0();
            FUN_100b36a0();
            *(short *)((int)local_100 + 0x29) = *(short *)((int)local_100 + 0x29) + 1;
            return 1;
          }
          if (*local_100 != 0) {
            return 0;
          }
          *local_100 = 0xd2f7;
          return 0;
        }
      }
      if (*local_100 == 0) {
        *local_100 = 0xd2f5;
        return 0;
      }
    }
    else if (*local_100 == 0) {
      *local_100 = 0xd2f6;
      return 0;
    }
  }
  return 0;
}


/* END FUNCTION 0x100bdb60 */
